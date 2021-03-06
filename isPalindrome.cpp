#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string & text)
{
    for (int i = 0; i < text.length() / 2; i++)
    {
        if (text[i] != text[text.length() - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string text;
    cout << "Podaj tekst: " << endl;
    cin >> text;
    if (isPalindrome(text))
        cout << "Twoj tekst: \"" << text << "\" jest palindromem." << endl;
    else
        cout << "Twoj tekst: \"" << text << "\" nie jest palindromem." << endl;

    system("pause");
    return 0;
}
