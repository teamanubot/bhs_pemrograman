# GITHUB COMMAND LINE

1. `git init` : Perintah ini digunakan untuk membuat repository Git baru atau menginisialisasi repository Git yang sudah ada di direktori saat ini. Ini menciptakan struktur awal yang diperlukan oleh Git untuk melacak perubahan dan versi dari file dalam proyek.

2. `git add .` : Perintah ini digunakan untuk menambahkan semua perubahan yang ada di direktori kerja (working directory) ke dalam staging area. Dengan menggunakan tanda titik (`.`), Anda memberitahu Git untuk menambahkan semua perubahan, baik itu penambahan, pengeditan, atau penghapusan file.

3. `git commit -m "pesan komit"` : Setelah Anda menambahkan perubahan ke staging area dengan `git add`, Anda dapat mengonfirmasi perubahan tersebut dengan melakukan commit. Perintah `git commit` digunakan untuk membuat snapshot dari perubahan yang ada di staging area dan menyimpannya ke dalam repository Git. Opsi `-m` diikuti oleh pesan komit adalah pesan yang menjelaskan perubahan yang dilakukan.

4. `git branch -M main` : Perintah ini digunakan untuk mengubah nama branch utama dari default `master` ke `main`. Ini adalah praktik terbaru yang disarankan oleh komunitas Git untuk menghindari istilah yang tidak inklusif seperti `master`.

5. `git remote add origin [link kode ssh di repository GitHub]` : Perintah ini digunakan untuk menambahkan remote repository ke lokal repository Git Anda. `origin` adalah alias yang biasanya digunakan untuk merujuk ke remote repository utama. Link kode SSH digunakan untuk mengidentifikasi lokasi remote repository, sehingga Anda dapat melakukan operasi seperti `push` dan `pull` ke dan dari repository tersebut.

6. `git push origin -u main` : Perintah ini digunakan untuk mengirimkan perubahan dari branch lokal ke branch `main` di remote repository yang sudah ditetapkan sebelumnya sebagai `origin`. Opsi `-u` digunakan untuk mengatur branch lokal yang di-push agar secara otomatis terhubung dengan branch yang sesuai di remote repository. Ini memungkinkan Anda untuk menggunakan `git push` atau `git pull` tanpa menyertakan argumen tambahan seperti nama branch dan nama remote repository.

# GITHUB COMMAND LINE SAAT MAINTENANCE/MONITORING PROJECT (TAMBAH KURANG ISI FILE)
- git add .
- git commit -m "pesannya"
- git push

# TAMBAHAN
> `touch <nama file>`
>> _"Perintah touch pada sistem Linux/Unix digunakan untuk membuat file kosong baru atau mengubah timestamp dari file yang sudah ada."_<br>
>> Beberapa kegunaan umum dari perintah touch adalah :
>>> **Membuat File Baru :** Jika Anda memberikan nama file yang belum ada, touch akan membuat file kosong dengan nama tersebut di direktori saat ini.<br><br>
>>> **Mengubah Timestamp File :** Jika file sudah ada, touch dapat digunakan untuk mengubah waktu akses (atime) dan waktu modifikasi (mtime) dari file tersebut. Hal ini berguna terutama jika Anda ingin memperbarui timestamp suatu file tanpa mengubah isinya.

> `touch -t <YYYYMMDDHHMM> <nama file>`
>> _"Perintah yang digunakan untuk mengatur timestamp pada sebuah file"_<br>
>> Berikut ini adalah penjelasan dalam mengatur timestamp :
>>> - `YYYY` adalah tahun (4 digit)
>>> - `MM` adalah bulan (2 digit)
>>> - `DD` adalah hari (2 digit)
>>> - `HH` adalah jam dalam format 24 jam (2 digit)
>>> - `MM` adalah menit (2 digit)