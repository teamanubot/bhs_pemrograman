# Pengertian Function Exception Handling
Exception handling (penanganan pengecualian) dalam pemrograman digunakan untuk menangani situasi di mana suatu program menghadapi kesalahan atau kondisi yang tidak diinginkan selama eksekusi. Dengan menangani pengecualian, program dapat menjaga agar tidak berhenti secara tiba-tiba dan memberikan kesempatan untuk menangani kesalahan secara lebih elegan.

# Konsep Dasar Exception Handling
- `try` **Block** : Tempat di mana kode yang mungkin menghasilkan pengecualian ditempatkan. Jika terjadi pengecualian di dalam block **'try'**, eksekusi akan berpindah ke block except.

- `except` **Block** : Tempat di mana pengecualian yang terjadi di block **'try'** ditangani. Kamu dapat menangani pengecualian spesifik atau semua pengecualian umum di sini.

- `finally` **Block** (opsional) : Kode yang selalu dijalankan, terlepas dari apakah pengecualian terjadi atau tidak. Biasanya digunakan untuk membersihkan sumber daya seperti file atau koneksi jaringan.

- `else` **Block** (opsional) : Kode yang dijalankan jika tidak ada pengecualian yang terjadi di block **'try'**.