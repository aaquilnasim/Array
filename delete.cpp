#include <iostream>
using namespace std;



int main()
{
    delete(a,b,c);
    
    int a[] = {1, 6, 8, 5, 3, 9};
    int n = 6, d;
    cout << "Enter to delete the array a[]={1,6,8,5,3,9}" << endl;
    cin >> d;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == d)
            for (int j = i; j<n; j++)
                a[j] = a[j+1];
    }
    cout << "NewArray :" << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
