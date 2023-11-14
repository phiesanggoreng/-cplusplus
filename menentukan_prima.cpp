#include <iostream>

using namespace std;

int main() {
    int angka;
    bool prima = true;

    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka <= 1) {
        prima = false;
    }
    else {
        int pembagi = 2;
        do {
            if (angka % pembagi == 0) {
                prima = false;
                break;
            }
            pembagi++;
        } while (pembagi <= angka / 2);
    }

    if (prima) {
        cout << angka << " adalah bilangan prima." << endl;
    }
    else {
        cout << angka << " bukan bilangan prima." << endl;
    }

    return 0;
}