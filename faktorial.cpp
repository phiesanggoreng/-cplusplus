#include <iostream>

using namespace std;

int main()
{
	
	int n;
	int faktorial = 1;
	
	cout << "masukkan angka: ";
	cin >> n; //memasukkan angka

	for (int i = 1; i <= n; ++i) {
		faktorial *= i;
	}

	cout << n << "!" << " adalah " << faktorial << endl;//hasil dari faktorial mas



	system("pause");
	return 0;
}