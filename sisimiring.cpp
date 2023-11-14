#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "+_____________+" << endl;
    cout << "|hello nibrass|" << endl;
    cout << "+_____________+" << endl;
    
    double sisiA, sisiB, sisiMiring;

    cout << "Masukkan panjang sisi tegak(a): ";
    cin >> sisiA;

    cout << "Masukkan panjang sisi samping(b): ";
    cin >> sisiB;

    // Menggunakan teorema Pythagoras untuk menghitung sisi miring
    sisiMiring = sqrt(pow(sisiA, 2) + pow(sisiB, 2));

    cout << "Panjang sisi miring(c) adalah: " << sisiMiring << endl;

    return 0;
}