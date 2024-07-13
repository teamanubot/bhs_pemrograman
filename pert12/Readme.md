# Rest API

## Starterpack
- [Windows Subsystem for Linux](https://www.microsoft.com/store/productId/9PDXGNCFSCZV)
- [Database](https://github.com/teamanubot/bhs_pemrograman/tree/main/pert12)
- [Docker](https://www.docker.com/products/docker-desktop)
- [Postman](https://www.postman.com/downloads)


## Langkah - Langkah
1. > `cd pert12` (jika sudah didalam direktori tidak perlu)
2. > `code .` (jika sudah membuka vscode di direktori saat ini/pert12 tidak perlu)
3. > `docker-compose up -d --build`
4. > `docker exec -it uas_pemrog bash`
5. > `composer create-project laravel/lumen .`
6. > `composer require flipbox/lumen-generator` (jika error `rm -rf ./composer.lock` kemudian ketik ulang perintah require)
7. > `mv .env.example .env`
8. > `nano .env`
9. > Lakukan perubahan berikut ini
   >> - `DB_HOST=database2`
   >> - `DB_DATABASE=uas_pemrog`
   >> - `DB_USERNAME=root`
   >> - `DB_PASSWORD=admin123`
   >> - CTRL+S
   >> - CTRL+X
10. > kembali kevscode dan lakukan perubahan pada folder src -> folder bootstrap -> file app.php
    >> - `// $app->withFacades();` -> `$app->withFacades();`
    >> - `// $app->withEloquent();` -> `$app->withEloquent();`
    >> - tambahkan `$app->register(Flipbox\LumenGenerator\LumenGeneratorServiceProvider::Class);` dibawahnya `$app->withEloquent();`
    >> - tambahkan `$app->middleware(['auth' => App\Http\Middleware\Authenticate::class,]);` diatasnya `// $app->routeMiddleware([ ...`
    >> - `// $app->register(App\Providers\AuthServiceProvider::class);` -> `$app->register(App\Providers\AuthServiceProvider::class);`
11. > kembali keterminal masukkan perintah `php artisan key:generate`
12. > `php artisan migrate`
13. > `chmod 777 -R storage/*`
14. > `rm -rf app/Models/User.php`
15. > `php artisan make:Model User -mcs --resource`
16. > kembali ke vscode
17. > lakukan perubahan pada src -> app -> Http
    >> Controllers -> UserController.php
    >>> - `use Illuminate\Support\Facades\DB;` tambahkan dibawah `use Illuminate\Http\Request;`<br>
    >>> tambahkan dibawah ini setelah `public function index() {`
    >>> - `$query = DB::connection('mysql')->table('users')->get();`
    >>> - `return response()->json($query, 200);`
    
    >> Middleware -> Authenticate.php
    >>> - `use Illuminate\Support\Facades\DB;` tambahkan dibawah `use Illuminate\Contracts\Auth\Factory as Auth;`<br>
    >>> tambahkan dibawah ini setelah `public function handle($request, Closure $next, $guard = null) {`
    >>> - `if ($this->auth->guard($guard)->guest()) { $token = $request->header('token'); if ($token) { $token = trim(str_replace('Bearer', '', $token)); $user = DB::connection('mysql')->table('users')->where('password', $token)->first(); dd($user); if (!$user) { return response()->json([ 'success' => false,'message' => 'Permission Not Allowed' ], 403); } $this->auth->setUser($user); } else { return response()->json(['success' => false, 'message' => 'Not Authorized' ], 401); } } return $next($request);`

    >> Models -> User.php
    >>> tambahkan dibawah ini setelah `class User extends Model {`
    >>> - `protected $connected $connection = 'mysql';`
    >>> - `protected $fillable = ['username'];`
    >>> - `protected $hidden = ['password'];`

    >> Providers -> AuthServiceProvider.php
    >>> - `use Illuminate\Support\Facades\DB;` tambahkan dibawah `use Illuminate\Support\ServiceProvider;`<br>
    >>> cari `$this->app['auth']->viaRequest('api', function ($request) {` kemudian ganti jadi dibawah ini
    >>> - `$this->app['auth']->viaRequest('api', function ($request) { if ($request->header('token')) { $token = str_replace('Bearer', '', $request->header('token')); return DB::connection('mysql')->table('users')->where('password', $token)->first(); } });`
18. > lakukan perubahan pada src -> database
    >> migrations -> Tahun_Bulan_Tanggal_Id_create_user_table.php
    >>> tambahkan dibawah ini setelah `$table->id();`
    >>> - `$table->string('username');`
    >>> - `$table->string('password');`<br>
    
    >> seeders<br>
    >>> DatabaseSeeder.php<br>
    >>>> `$this->call([UserSeeder::class]);` Tambahkan didalam `public function run() {`<br>

    >>> UserSeeder.php<br>
    >>>> - `use Illuminate\Support\Facades\DB;` tambahkan dibawah `use Illuminate\Database\Seeder;`<br>

    >>>> tambahkan dibawah ini didalam `public function run(): void {`
    >>>> - `$timestamp = \Carbon\Carbon::now()->toDateTimeString();`
    >>>> - `DB::table('users')->insert(['username' => 'rivai', 'password' => 'ganteng banget', 'created_at' => $timestamp, 'updated_at' => $timestamp]);`
19. > lakukan perubahan pada src -> routes -> web.php
    >> tambahkan dibawah ini setelah `$router->get('/', function () use ($router) {return $router->app->version();});`
    >> - `$router->group(['prefix' => 'api/v1/user'], function () use ($router) {$router->get('/', ['uses' => 'UserController@index']);});`
20. > kembali ke terminal
21. > `php artisan migrate:fresh --seed`
22. > buka Postman (login terlebih dahulu)
23. > pilih tab Collection kemudian buat folder user lalu add request (namanya bebas)
24. > kemudian di GET bagian tengahnya isi dengan `localhost/api/v1/user`
25. > klik Authorization dan pilih Api Key Auth Type dan isi seperti dibawah ini : 
    >> Key : `token` <br>
    >> Value : `ganteng banget` <br>
    >> Add to : `Header`
26. > jika sudah maka authorization berupa api key sudah selesai dibuat kemudian membuat model beserta migration, controller dan seeders dengan command dibawah ini
    >> `php artisan make:Model <namaModel> -mcs --resource`
27. > editlah Migrations, Controllers, dan Seeders seperti halnya model User namun ada sedikit perubahan
28. > konfigurasikan routes dan databaseSeeders supaya model yang dibuat dapat dijalankan normal
29. > udah kelar mending uninstall aja ~