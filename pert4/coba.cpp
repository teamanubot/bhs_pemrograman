#include <iostream>
using namespace std;

int main() {
    char abjad;
    int kondisi = 0;
    for (abjad = 'z'; abjad >= 'a'; abjad--) {
        char besar = toupper(abjad);
        cout << besar << endl;
        kondisi = 1;
        if(kondisi == 1) {
            abjad--;
            cout << abjad << endl;
            kondisi = 0;
        }
    }

    return 0;
}