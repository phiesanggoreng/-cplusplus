#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengonversi desimal ke heksadesimal
string desimaltohex(int decimal) {
    // Jika bilangan desimal kurang dari 0, kembalikan string kosong
    if (decimal < 0) {
        return "";
    }

    // Jika bilangan desimal sama dengan 0, kembalikan "0" sebagai heksadesimal
    if (decimal == 0) {
        return "0";
    }

    string hex = "";  // String untuk menyimpan hasil heksadesimal

    // Konversi desimal ke heksadesimal
    while (decimal > 0) {
        int remainder = decimal % 16;

        // Konversi sisa pembagian ke karakter heksadesimal
        char hexDigit = (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A');

        // Tambahkan karakter heksadesimal ke depan string hasil
        hex = hexDigit + hex;

        // Bagi desimal dengan 16 untuk melanjutkan konversi
        decimal /= 16;
    }

    return hex;  // Kembalikan hasil heksadesimal
}

int main() {
    int decimalNumber;

    // Input bilangan desimal dari pengguna
    cout << "Masukkan bilangan desimal: ";
    cin >> decimalNumber;

    // Panggil fungsi desimaltohex untuk mengonversi
    string hexadecimalNumber = desimaltohex(decimalNumber);

    // Tampilkan hasil
    cout << "Hasil konversi: " << hexadecimalNumber << endl;

    return 0;
}
