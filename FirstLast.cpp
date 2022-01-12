#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int a = str[0];
    int b;
    for (int i = str.length() - 1; i > 0; i--)
    {
        if (str[i] == a)
        {
            b = i;
            break;
        }
    }
    cout << b - 1;

    return 0;
}