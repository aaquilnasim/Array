#include <iostream>
using namespace std;

void user(string n)
{
    int c = 0;
     for (int i = 0; i < n.length(); i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
            c++;
    }
    cout << c;
}

int main()
{
    string s;
    cin >> s;
    user(s);

    return 0;
}