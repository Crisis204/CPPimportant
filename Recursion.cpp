/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;
int incdec(int n){
    if (n==0){
        cout<<endl;
        return 0;
    }
    cout<<n<<" ";
    incdec(n-1);
    cout<<n<<" ";
    return 0;
    
}
int main(){
    int n;
    cin >> n;
    incdec(n);
    
}
// To find that the array strictly increasing is sorted or not

// bool sorted (int arr[],int n){
//     if (n==1)
//     {
//         return true;
        
//     }
//     // Array is incresaing by one and the size is decreasing

//     bool restarray = sorted(arr+1,n-1);

//     // Now we are comparing the element at the 0th posi to the element at posi 1 and return the rest Array

//     return(arr[0]<arr[1]&&restarray);
    
// }

// int main()
// {
//     int arr[]={1,4,2,3,8,6};
//     cout<<sorted(arr,6)<<endl;

