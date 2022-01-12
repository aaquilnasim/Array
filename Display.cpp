#include<iostream>
using namespace std;

int main(){
    int a[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<"The output are: "<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}