#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main()
{
    int arr[50];
    int sum[50];
    int i,n;
    
    for(int k=0;k<50;k++)
    {
       sum[k]=0;
    }
    
    cout << "How many products do you have?";
    cin >> n;

    for(i=0;i<n;i++)
    {
       cout << "Enter the product key:";
       
       for(int l=0;l<50;l++)
       {
           cin>>arr[l];
           cout<<endl;
       }
       
       for(int j=0;j<50;j++)
       { 
           sum[j] = sum[j] + arr[j];
       }
    }   
    
    for(int i=0;i<50;i++) 
    {
      cout << sum[i];
    }
    
    system("pause");
    return 0;
}
