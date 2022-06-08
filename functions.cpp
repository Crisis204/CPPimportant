//  Even or Odd using functions
// #include <iostream>
// using namespace std;
// bool isEven(int a){
//     if (a&1)
//     {
//         return 0;

//     }
//     else {
//         return 1;
//     }

// }
// int main(){
//     int num;
//     cout<<"Enter the number"<<endl;
//     cin>>num;
//     if (isEven(num))
//     {
//         cout<<"Number is even"<<endl;
//     }
//     else {
//         cout<<"Number is odd"<<endl;
//     }

// }

// Factorial Ncr
// #include<iostream>
// using namespace std;

// int factorial(int n) {

//     int fact = 1;

//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r) {

//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return num/denom;
// }

// int main( ) {

//     int n, r;

//     cin>> n >> r ;

//     cout <<" Answer is " << nCr(n,r) << endl;

//     return 0;
// }

// Counting print
// #include <iostream>
// using namespace std;
// void printcounting(int num){
//     for (int i = 1; i <=num; i++)
//     {
//         cout<< i<< " ";
//     }
//     cout<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     printcounting(n);
// } 
// #include <iostream>
// using namespace std;
// int array[100] = {-1};
// int array[100] = {0};
// std::fill_n(array, 100, -1);
// int array[100] = { [0 ... 99] = -1 };
#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}


int main() {

    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }


    return 0;
}