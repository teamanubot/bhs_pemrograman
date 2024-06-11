### Definisi
Dalam Python, array adalah struktur yang dapat menyimpan dan mengorganisasi kumpulan data. Struktur data sangat penting untuk mengorganisasi, mengelompokkan, dan merepresentasikan data. Memahami struktur data sangat penting untuk menyelesaikan banyak masalah pemrograman. Materi ini berfokus pada struktur data lanjutan, yaitu set dan dictionary.

### Set
Set dalam Python adalah kumpulan nilai unik dan tidak dapat diubah yang disimpan dalam satu variabel. Karakteristik utama dari set adalah:
1. **Keunikan**: Setiap nilai dalam set harus unik; duplikat tidak diperbolehkan.
2. **Tidak Dapat Diubah**: Setelah nilai ditambahkan ke dalam set, nilainya tidak dapat diubah.
3. **Tidak Berurutan**: Set adalah kumpulan yang tidak berurutan, artinya tidak mempertahankan urutan tertentu dan tidak dapat diakses melalui indeks.

#### Bentuk Umum dari Set
1. **Menggunakan Kurung Kurawal**:
   ```python
   student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'}
   print(student_set)

2. **Mengkonversi List ke Set**:
   ```python
   fruit_set = set(['mango', 'Apple'])
   print(fruit_set)

3. **Set dengan Tipe Data Berbeda**:
   ```python
   set_mix = {'man', 'animal', 5, True, ('A', 'B')}
   print(set_mix)

#### Dictionary
Dictionary dalam Python adalah kumpulan pasangan kunci-nilai di mana setiap kunci unik dan digunakan untuk menyimpan serta mengakses nilai. Karakteristik utama dari dictionary adalah:
1. **Keunikan Kunci**: Setiap kunci dalam dictionary harus unik.
2. **Dapat Diubah**: Dictionary bersifat mutable, artinya isinya dapat diubah setelah dibuat.
3. **Tidak Berurutan**: Dictionary tidak mempertahankan urutan tertentu untuk pasangan kunci-nilai.

#### Bentuk Umum dari Dictionary
1. **Menggunakan Kurung Kurawal**:
   ```python
   student_dict = {'Huda': 25, 'Lendis': 22, 'Wahid': 23, 'Basith': 21}
   print(student_dict)

2. **Menambahkan Pasangan Kunci-Nilai**:
   ```python
   student_dict['Ali'] = 24
   print(student_dict)

3. **Mengakses Nilai**:
   ```python
   age = student_dict['Huda']
   print(age)

#### Operator Keanggotaan (Dict)
Operator keanggotaan dalam Python, in dan not in, digunakan untuk menguji apakah sebuah kunci atau nilai ada dalam dictionary.
1. **Memeriksa Apakah Kunci Ada**:
   ```python
   student_dict = {'Huda': 25, 'Lendis': 22, 'Wahid': 23, 'Basith': 21}
   if 'Huda' in student_dict:
    print("Huda adalah kunci dalam dictionary.")


2. **Memeriksa Apakah Nilai Ada**:
   ```python
   if 25 in student_dict.values():
    print("25 adalah nilai dalam dictionary.")

3. **Menggunakan Operator `not in`**:
   ```python
   if 'Ali' not in student_dict:
    print("Ali bukan kunci dalam dictionary.")
