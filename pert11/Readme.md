# Swagger UI (OpenAPI)

## Starterpack
- [Windows Subsystem for Linux](https://www.microsoft.com/store/productId/9PDXGNCFSCZV)
- [Database](https://github.com/teamanubot/bhs_pemrograman/tree/main/pert9/db)
- [Docker](https://www.docker.com/products/docker-desktop)


## Langkah - Langkah
1. `cd pert9/db`
2. [Build atau Jalankan](#command)
3. `cd pert11`
4. [Build atau Jalankan](#command)
5. [Buka Chrome lalu kunjungi localhost:port/docs](#penjelasan-masing-masing-port)

### Penjelasan Masing-Masing Port
- Port 8000 : User -> Berisikan respon terhadap status user
- Port 8001 : Product -> Berisikan respon terhadap status product
- Port 8002 : Order -> Berisikan respon terhadap status order


### Command
- Build : `docker-compose up -d --build`
- Start : `docker-compose start` (jika sudah dibuild)
- Stop : `docker-compose stop` (jika sudah dibuild)
- Remove : `docker-compose down`
- Status Container : `docker ps`

### Penjelasan GET, POST, PUT, dan DELETE
- GET : Metode GET digunakan untuk membaca atau mengambil data dari server. Ini adalah permintaan yang aman dan idempotent (menghasilkan hasil yang sama tidak peduli berapa kali permintaan itu dieksekusi).
- POST : Metode POST digunakan untuk membuat sumber daya baru di server. Data yang dikirimkan dalam permintaan POST biasanya disertakan dalam body permintaan.
- PUT : Metode PUT digunakan untuk memperbarui sumber daya yang ada di server atau membuat sumber daya baru jika belum ada. Ini juga idempotent.
- DELETE : Metode DELETE digunakan untuk menghapus sumber daya dari server. Ini juga idempotent.
- Istilah "idempotent" dalam konteks HTTP dan REST API mengacu pada operasi yang dapat dilakukan berkali-kali tanpa menghasilkan efek tambahan setelah operasi pertama. Artinya, setelah operasi pertama berhasil, operasi berikutnya tidak akan mengubah keadaan lebih lanjut atau menghasilkan hasil yang berbeda.