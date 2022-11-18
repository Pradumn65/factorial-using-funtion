#include<iostream>
using namespace std;
  

    int factorial(int n)
    {
        int fact=1;
        for( int i=2;i<=n; i++)
        {
           fact=fact*i; 
        }
        return fact;
        
    }
    int main()
    {
        int a;

        cout<<"enter the number";
        cin>>a;
        int ans=factorial(a);
        cout<<ans;
    }
   
