#include <iostream>
using namespace std;

class Angka {
private:
    int a, b;

public:
    void input() {
        cout << "Masukkan angka pertama : ";
        cin >> a;
        cout << "Masukkan angka kedua : ";
        cin >> b;
    }

    int tambah() {
        return a + b;
    }

    int kurang() {
        return a - b;
    }

    int bagi() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
            return 0;
        }
    }

    int kali() {
        return a * b;
    }
};

int main() {
    Angka ang;
    int pilihan;

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
            case 1:
                ang.input();
                cout << "Hasil penambahan: " << ang.tambah() << endl;
                break;
            case 2:
                ang.input();
                cout << "Hasil pengurangan: " << ang.kurang() << endl;
                break;
            case 3:
                ang.input();
                cout << "Hasil pembagian: " << ang.bagi() << endl;
                break;
            case 4:
                ang.input();
                cout << "Hasil perkalian: " << ang.kali() << endl;
                break;
            case 5:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan pilih angka 1-5." << endl;
                break;
        }
    } while (pilihan != 5);

    return 0;
}