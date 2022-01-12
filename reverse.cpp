#include<iostream>
using namespace std;

int main(){
    int n;
    int a[n];
    cout<<"Enter the no of element ";
    cin>>n;
    cout<<"Enter the Array";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    cout<<"Reverse Array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}