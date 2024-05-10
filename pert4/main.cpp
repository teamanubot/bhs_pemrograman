#include <iostream>
using namespace std;

void tambah(float angka1, float angka2) {
    float hasil;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    hasil = angka1 + angka2;
    cout << "Hasil penjumlahan: " << hasil << endl;
}

void kurang(float angka1, float angka2) {
    float hasil;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    hasil = angka1 - angka2;
    cout << "Hasil pengurangan: " << hasil << endl;
}

void bagi(float angka1, float angka2) {
    float hasil;
    cout << "Masukkan angka pembilang: ";
    cin >> angka1;
    cout << "Masukkan angka penyebut: ";
    cin >> angka2;
    if (angka2 != 0) {
        hasil = angka1 / angka2;
        cout << "Hasil pembagian: " << hasil << endl;
    } else {
        cout << "Error: Penyebut tidak boleh nol." << endl;
    }
}

void kali(float angka1, float angka2) {
    float hasil;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    hasil = angka1 * angka2;
    cout << "Hasil perkalian: " << hasil << endl;
}

int main() {
    char pilihan;
    float a, b;

    do {
        cout << "Menu Operasi Matematika" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Bagi" << endl;
        cout << "4. Kali" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih operasi (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case '1':
                tambah(a, b);
                break;
            case '2':
                kurang(a, b);
                break;
            case '3':
                bagi(a, b);
                break;
            case '4':
                kali(a, b);
                break;
            case '5':
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih antara 1-5." << endl;
                break;
        }

    } while (pilihan != '5');

    return 0;
}