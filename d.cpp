#include <iostream>
using namespace std;
int main(){
    int num;
cout<<"enter the no"<<endl;
cin>>num;
int reverse=0;
while (num>0)
{
    int rem = num%10;
    reverse = reverse *10+rem;
    num=num/10;
}
cout<<reverse<<endl;



 return 0;
}