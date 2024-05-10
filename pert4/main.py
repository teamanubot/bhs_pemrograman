def tambah(a, b):
    return a + b

def kurang(a, b):
    return a - b

def bagi(a, b):
    if b != 0:
        return a / b
    else:
        return "Error: Pembagian dengan nol!"

def kali(a, b):
    return a * b

def menu():
    print("Menu Operasi Matematika:")
    print("1. Tambah")
    print("2. Kurang")
    print("3. Bagi")
    print("4. Kali")
    
    pilihan = int(input("Masukkan pilihan (1/2/3/4): "))

    if pilihan not in [1, 2, 3, 4]:
        print("Pilihan tidak valid.")
        return

    bilangan1 = float(input("Masukkan bilangan pertama: "))
    bilangan2 = float(input("Masukkan bilangan kedua: "))

    hasil = None
    if pilihan == 1:
        hasil = tambah(bilangan1, bilangan2)
    elif pilihan == 2:
        hasil = kurang(bilangan1, bilangan2)
    elif pilihan == 3:
        hasil = bagi(bilangan1, bilangan2)
    elif pilihan == 4:
        hasil = kali(bilangan1, bilangan2)

    print("Hasil:", hasil)

menu()