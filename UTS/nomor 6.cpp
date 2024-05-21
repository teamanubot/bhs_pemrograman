#include <iostream>
using namespace std;

int angkaPertama, angkaKedua;

void menu() {
    cout << "Masukkan Angka Pertama: ";
    cin >> angkaPertama;
    cout << "Masukkan Angka Kedua: ";
    cin >> angkaKedua;
}

void tambah() {
    int hasil = angkaPertama + angkaKedua;
    cout << "Penjumlahan: " << hasil << endl;
}

void kurang() {
    int hasil = angkaPertama - angkaKedua;
    cout << "Pengurangan: " << hasil << endl;
}

void kali() {
    int hasil = angkaPertama * angkaKedua;
    cout << "Perkalian: " << hasil << endl;
}

void bagi() {
    if (angkaKedua != 0) {
        double hasil = static_cast<double>(angkaPertama) / angkaKedua;
        cout << "Pembagian: " << hasil << endl;
    } else {
        cout << "Pembagian: Error (pembagi tidak boleh 0)" << endl;
    }
}

int main() {
    menu();
    tambah();
    kurang();
    kali();
    bagi();
    return 0;
}
