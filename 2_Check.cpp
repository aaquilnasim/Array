#include <iostream>
using namespace std;

int main()
{
    int n, m, k = 0;
    int a[m];
    cout << "Enter the size of array" << endl;
    cin >> m;
    cout << "Enter the Array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << "ENter the No. to find" << endl;
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        if (a[i] == n)
            k = 1;
    }
    if (k == 1)
        cout << "True";
    else
        cout << "False";

    return 0;
}