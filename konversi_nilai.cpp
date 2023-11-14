#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    if (x >= 86 && x <= 100) {
        cout << "A\n";
    }
    else if (x >= 66 && x <= 85) {
        cout << "B\n";
    }
    else if (x >= 46 && x <= 65) {
        cout << "C\n";
    }
    else if (x >= 1 && x <= 45) {
        cout << "D\n";
    }
    else {
        cout << "E\n";
    }

    system("pause");
    return 0;
}
