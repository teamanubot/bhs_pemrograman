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