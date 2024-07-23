# Function
## Pengertian Function
Fungsi (function) adalah blok kode yang dirancang untuk melakukan tugas tertentu dan dapat digunakan kembali di berbagai bagian program. Fungsi membantu dalam pengorganisasian kode, membuatnya lebih modular dan lebih mudah dibaca serta dikelola.

## Struktur Dasar Function
1. Definisi Fungsi : Fungsi didefinisikan menggunakan kata kunci def diikuti dengan nama fungsi dan tanda kurung (). Parameter fungsi ditulis di dalam tanda kurung.
2. Blok Kode Fungsi : Blok kode yang akan dieksekusi ketika fungsi dipanggil. Blok ini biasanya berisi beberapa pernyataan.
3. Panggilan Fungsi : Untuk menggunakan fungsi, Anda memanggilnya dengan menuliskan nama fungsi diikuti dengan tanda kurung berisi argumen (jika ada).

## Manfaat Function
- Reusability (Dapat digunakan kembali) : Anda dapat mendefinisikan sebuah fungsi sekali dan menggunakannya berkali-kali.
- Modularity (Modularitas) : Membantu memecah program besar menjadi bagian-bagian kecil yang lebih mudah dikelola.
- Maintainability (Kemudahan pemeliharaan) : Mempermudah perawatan dan pembaruan kode.

## Kekurangan Function
- Overhead Pemanggilan Fungsi : Setiap kali fungsi dipanggil, ada overhead yang terkait dengan pengaturan lingkungan eksekusi untuk fungsi tersebut. Ini bisa berdampak pada kinerja, terutama jika fungsi dipanggil berulang kali dalam loop yang ketat.
- Kompleksitas Debugging : Jika program menggunakan banyak fungsi, terutama yang saling memanggil, debugging bisa menjadi kompleks. Menemukan sumber kesalahan bisa menjadi lebih sulit dibandingkan dengan kode yang lebih linear.
- Pemahaman Konteks : Memahami alur program yang menggunakan banyak fungsi bisa menjadi sulit karena alur kontrol tidak langsung. Pembaca kode harus melompat antara definisi fungsi dan tempat-tempat di mana fungsi tersebut dipanggil.

# Rekursif
## Pengertian Rekursif
Rekursif adalah teknik pemrograman di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan masalah. Masalah besar dipecah menjadi sub-masalah yang lebih kecil, dan solusi dari sub-masalah ini digabungkan untuk mendapatkan solusi dari masalah besar.

## Struktur Dasar Rekursif
1. Base Case (Kasus Dasar) : Kondisi yang menentukan kapan rekursi harus berhenti. Tanpa kasus dasar, fungsi rekursif akan memanggil dirinya sendiri tanpa henti (infinite recursion).
2. Recursive Case (Kasus Rekursif) : Bagian di mana fungsi memanggil dirinya sendiri dengan parameter yang diubah untuk mendekati kasus dasar.

## Manfaat Rekursif
- Sederhana dan Elegan : Kadang-kadang lebih mudah dan lebih intuitif untuk menulis solusi rekursif daripada solusi iteratif.
- Solusi Alami untuk Masalah Rekursif : Beberapa masalah, seperti traversing pohon, lebih alami diselesaikan dengan rekursi.

## Kekurangan Rekursif
- Overhead Memori : Setiap panggilan fungsi rekursif menambah tumpukan panggilan, yang dapat menyebabkan penggunaan memori yang lebih besar.
- Kinerja : Rekursi dapat lebih lambat dibandingkan dengan iterasi karena overhead panggilan fungsi.