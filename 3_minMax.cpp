#include <iostream>
using namespace std;

int main()
{
    int n, i, min, max;
    int a[n];
    cout << "Enter the no of element of Array" << endl;
    cin >> n;
    cout << "Enter the Array" << endl;
    for (i = 0; i < n; i++)
    
        cin >> a[i];
    
    min = a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    cout << "MIN : " << min << endl;
    cout << "MAX : " << max;

    return 0;
}