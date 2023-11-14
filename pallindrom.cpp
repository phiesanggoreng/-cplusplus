#include <iostream>
#include <string>

using namespace std;

bool palindrome(string text) 
{
    for (int i = 0; i < text.length() / 2; i++)
    {
        if (text[i] != text[text.length() - i - 1]) 
        {
            return false;
        }
    }
}
int main()
{

    string kata;
    cout << "masukkan kata: ";
    getline(cin, kata);
 


    if (palindrome(kata)) 
    {
        cout << kata << " ini adalah palindrome" << endl;

    }else 
    {
        cout << kata << " bukan palindrome" << endl;
    }


    return 0;
}