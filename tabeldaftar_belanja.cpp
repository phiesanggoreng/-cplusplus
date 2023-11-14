#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main()
{
    string daftar_belanja1, daftar_belanja2, daftar_belanja3;
    cout << "masukkan daftar belanja: " << endl;
    cin >> daftar_belanja1;
    cin >> daftar_belanja2;
    cin >> daftar_belanja3;

    cout << setw(20) << "Daftar Belanja" << endl;
    cout << setw(0) << "+--+---------------+-------------+" << endl;
    cout << setw(0) << "|NO|" << setw(15) << "daftar belanja" << setw(15) << "|Jumlah|" << endl;
    cout << setw(0) << "+--+---------------+-------------+" << endl;
    cout << setw(0) << "|01|" << setw(15) << daftar_belanja1 << setw(15) << "|     5|" << endl;
    cout << setw(0) << "|02|" << setw(15) << daftar_belanja2 << setw(15) << "|     5|" << endl;
    cout << setw(0) << "|03|" << setw(15) << daftar_belanja3 << setw(15) << "|     5|" << endl;
    cout << setw(0) << "+--+---------------+-------------+" << endl;

    system("pause");
    return 0;
}