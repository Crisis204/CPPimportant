#include <iostream>
using namespace std;
int main(){
    /* To find the character is vowel or consonanat
    char p;
    int lc,uc;
    cout<<"Enter the characacter"<<endl;
    cin>>p;
    lc=(p=='a'||p=='e'||p=='i'||p=='o'||p=='u');
    uc=(p=='A'||p=='E'||p=='I'||p=='o'||p=='U');
    if (lc||uc)
    {
        cout<<"the alphabet is vowel"<<endl;
    }else {
        cout<<"the alphabet is consonant"<<endl;
    } 
    */
   


    /* gretaest of three numbers
    int a , b , c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {cout<<"a is greater"<<endl;
        
    }
    else if (b>c&&b>a)
    {cout<<"b is greater"<<endl;
        
    } else {
        cout <<"c is the greatest"<<endl;
    } /* code 

    /* To find which traingle it is
    int a , b , c;
    cout<<"Enter the three sides of Traingle"<<endl;
    cin>>a>>b>>c;
    if (a==b && a==c)
    {cout<<" Equilateral Traingle"<<endl;
        
    }
    else if (a==c || a==b || b==c)
    {cout<<"Isocelous Traingle"<<endl;
        
    } else {
        cout <<"Scalene Traingle"<<endl;

    
}*/
//Calculator
    /*float a, b;
    char op;
    cout << "enter the two nos." << endl;
    cin >> a >> b;
    cout << "enter the operator" << endl;
    
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;

        break;

    default:
        cout << "eneter the operator" << endl;
        break;
    

} */// namespace std;
/*Print all decimal of digits from right to left
int n;
cin>>n;
while (n>0)
{
    int rem = n%10;

    cout<< rem <<endl;
    n= n/10;

}*/
// reverse of a number
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
