#include <iostream>
using namespace std;
int main()
{
    // int a =3;
    // int b = 4;
    
    // cout<<"a&b"<<(a&b) <<endl;
    // cout<<"a|b"<<(a|b) <<endl;
    // cout<< "~a"<<(~a)<<endl;
    // cout <<"a^b"<<(a^b)<<endl;
    // cout<<(17<<2)<<endl;
    // cout<<(19>>2)<<endl;
    // return 0;
    // For loop   fabonacci 
    
    // int n;
    // cin>>n;
    // int a = 0; 
    // int b = 9;

    // cout<<a<<b<<endl;

    // for ( int i = 1; i <= n; i++)

    // {
    //     int sum = a+b;
    //     cout <<sum<<endl;
    //     a=b;
    //     b=sum;
    // }
    // Given number product - sum
    int n = 234 ;
    int p = 1;
    int sum =0;
    while(n!=0){
    int d = n%10;
    p = p*d;

    sum = sum+d;
    n =n/10;
    }
    int fa = p-sum;
    cout<<fa<<endl;



} 
