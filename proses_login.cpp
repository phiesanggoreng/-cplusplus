#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_id;
    string password;

    cout << "Masukkan user id: ";
    cin >> user_id;
    cout << "Masukkan password: ";
    cin >> password;

    if (user_id == "" && password == "") {
        cout << "Login berhasil!" << endl;
    }
    else {
        cout << "User id atau password tidak sesuai." << endl;
    }

    system("pause");
    return 0;
}