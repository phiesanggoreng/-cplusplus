#include <iostream>

using namespace std;

int main() 
{
	int angka1, angka2, angka3, angka4;

	cout << "masukkan angka1: ";
	cin >> angka1;

	cout << "masukkan angka2: ";
	cin >> angka2;

	cout << "masukkan angka3: ";
	cin >> angka3;

	cout << "masukkan angka4: ";
	cin >> angka4;

	int bilangan_gede = angka1;

	if (angka2 > bilangan_gede) {
		bilangan_gede = angka2;
		cout << "angka 2 gede bos\n";
	}
	else if (angka3 > bilangan_gede) {
		bilangan_gede = angka3;
		cout << "angka 3 gede\n";
	}
	else if (angka4 > bilangan_gede) {
		bilangan_gede = angka4;
		cout << "angka 4 gede\n";

	}
	else {
		cout << "angka 1 gede\n";
	}

	system("pause");
	return 0;
}