#include <iostream>
using namespace std;

class Kalkulator {
private:
    int angkaPertama;
    int angkaKedua;

public:
    void setAngka(int a, int b) {
        angkaPertama = a;
        angkaKedua = b;
    }

    int getPenjumlahan() {
        return angkaPertama + angkaKedua;
    }

    int getPengurangan() {
        return angkaPertama - angkaKedua;
    }

    int getPerkalian() {
        return angkaPertama * angkaKedua;
    }

    double getPembagian() {
        return static_cast<double>(angkaPertama) / angkaKedua;
    }
};

int main() {
    Kalkulator kalkulator;
    int angkaPertama, angkaKedua;

    cout << "Masukkan Angka Pertama : ";
    cin >> angkaPertama;
    cout << "Masukkan Angka Kedua : ";
    cin >> angkaKedua;

    kalkulator.setAngka(angkaPertama, angkaKedua);

    cout << "Penjumlahan : " << kalkulator.getPenjumlahan() << endl;
    cout << "Pengurangan : " << kalkulator.getPengurangan() << endl;
    cout << "Perkalian : " << kalkulator.getPerkalian() << endl;
    cout << "Pembagian : " << kalkulator.getPembagian() << endl;

    return 0;
}
