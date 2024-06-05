# Pemahaman Bisnis terhadap Rencana/Ide yang Diinginkan

## Tujuan Bisnis
- Jadi, tujuan bisnis ini adalah untuk mendukung jual beli produk elektronik melalui platform e-commerce. Hal ini mencakup pembuatan platform yang memungkinkan pengguna untuk mendaftar, masuk, menelusuri produk elektronik, menambahkan produk ke keranjang belanja, dan melakukan proses checkout. Dengan demikian, fokusnya adalah pada penjualan produk elektronik secara online.

## Fitur Utama
- **Pendaftaran Pengguna**: Memungkinkan pengguna baru untuk membuat akun dengan nama pengguna dan kata sandi.
- **Masuk Pengguna**: Pengguna yang sudah terdaftar dapat masuk dengan nama pengguna dan kata sandi mereka.
- **Menelusuri Produk**: Pengguna yang telah masuk dapat melihat daftar produk yang tersedia beserta detail harga.
- **Menambahkan Produk ke Keranjang**: Pengguna dapat memilih produk dari daftar dan menambahkannya ke keranjang belanja mereka.
- **Checkout**: Pengguna dapat melihat isi keranjang belanja mereka dan total harga yang harus dibayar, serta mengosongkan keranjang setelah proses checkout.

## Alur Proses
- **Pengguna Baru**:
  - Registrasi -> Masuk -> Menelusuri Produk -> Menambahkan Produk ke Keranjang -> Checkout
- **Pengguna Terdaftar**:
  - Masuk -> Menelusuri Produk -> Menambahkan Produk ke Keranjang -> Checkout

## Data yang Dibutuhkan
- **Pengguna**: Menyimpan informasi pengguna seperti nama pengguna dan kata sandi.
- **Produk**: Menyimpan informasi produk seperti ID, nama produk, dan harga.
- **Keranjang**: Menyimpan produk-produk yang dipilih oleh pengguna untuk dibeli.

## Interaksi Pengguna
- Pengguna akan berinteraksi dengan program melalui antarmuka baris perintah, memasukkan pilihan mereka dan informasi yang diperlukan.

## Penggunaan Teknologi
- **Node.js**: Menggunakan JavaScript di server untuk menjalankan logika aplikasi.
- **Readline Module**: Menggunakan modul readline untuk berinteraksi dengan pengguna melalui terminal.

## Implementasi Program

Program diimplementasikan menggunakan Node.js, dengan alur sebagai berikut:

1. **Menu Utama**:
   - Pengguna dapat memilih untuk mendaftar, masuk, atau keluar dari program.

2. **Pendaftaran**:
   - Pengguna diminta untuk memasukkan nama pengguna dan kata sandi untuk membuat akun baru.

3. **Masuk**:
   - Pengguna yang sudah terdaftar diminta memasukkan nama pengguna dan kata sandi untuk masuk.

4. **Menu Pengguna**:
   - Pengguna yang telah masuk memiliki opsi untuk menelusuri produk, menambahkan produk ke keranjang, checkout, atau keluar dari akun.

5. **Penelusuran Produk**:
   - Menampilkan daftar produk yang tersedia beserta ID dan harga.

6. **Menambahkan ke Keranjang**:
   - Pengguna dapat memasukkan ID produk untuk menambahkan produk tersebut ke keranjang mereka.

7. **Checkout**:
   - Menampilkan isi keranjang dan total harga, serta mengosongkan keranjang setelah checkout.

Program ini menyediakan dasar-dasar untuk platform e-commerce sederhana dengan alur yang mudah dipahami dan diimplementasikan.