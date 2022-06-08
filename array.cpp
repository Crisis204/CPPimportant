// #include <iostream>
// using namespace std;
// //Minimum 
// int getmin(int num[], int size)
// int mini = INT64_MAX
// for (int i = 0; i < num; i++)
// {
//     if (num[i]<mini)
//     {
//         min=num[i];
//     }
//     return mini;
//     }
// nt getmin(int num[], int size)
// int maxi = INT64_MIN
// for (int i = 0; i < num; i++)
// {
//     if (num[i]>maxi)
//     {
//         max=num[i];
//     }
//     return maxi;
// }



// int main () {
// //     int g[15];
// //     cout<<"Value of array at the position is:"<<g[5]<<endl;
// // int k[6] = {3,4,6,77,88,990};
// // cout<<"value at the position of :"<<k[3]<<endl;
// // int k [4]={3,5,67,88};
// // int n=7;
// // for (int i = 0; i < n; i++)
// // {
// //     cout << k[i] <<"   ";

// // }
// // Max min
// int size;
// cin>>size;
// int num[100];
// for (int i = 0; i < size; i++)
// {
//    cin>>num[i];

// }
// cout<<"maximum value is"<< getmax(num , size)<<endl;
// cout<<"minimum valueis:"<< getmin(num,size)<<endl;

    
//  } 
// #include<iostream>
// #include <climits>
// using namespace std;

// int getMin(int num[], int n) {

//     int mini = INT_MAX;
    
//     for(int i = 0; i<n; i++) {
        
//         mini = min( mini, num[i]);
        
//         //if(num[i] < min){
//         //    min = num[i];
//         //}
//     }

//     //returning min value
//     return mini;
// }

// int getMax(int num[], int n) {

//     int maxi = INT_MIN;
    
//     for(int i = 0; i<n; i++) {

//         maxi = max(maxi, num[i]);

//        // if(num[i] > max){
//          //   max = num[i];
//        // }
//     }

//     //returning max value
//     return maxi;
// }

// int main() {

//     int size;
//     cout<<"Enter the size of the array"<<endl;
//     cin >> size;

//     int num[100];

//     //taking input in array
//     for(int i = 0; i<size; i++) {
//         cin >> num[i];
//     }

//     cout << " Maximum value is " << getMax(num, size) << endl;
//     cout << " Minimum value is " << getMin(num, size) << endl;


//     return 0;
// }

// BINARY SEARCH 


#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    // DETERMINING THE STARTING AND ENDING POINT
    int s = 0;
    int e = n;
    while (s<=e)
    {
        
        //SETTING THE MID POINT 

        int mid =s+e/2;
        if (arr[mid]==key){
            return mid;
        }
        // iF THE VALUE OF KEY IS GREATER THE VALUES IN ARRAY SHIFT END TO MID -1 POSITION

        else if(arr[mid]>key)
        {
            e =mid-1;
        }
        else {
            s = mid+1;

        }
        


        }
return -1;

    
    

}

int main(){
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;

    // cODE TO WRITE OR TAKE A INPUT IN ARRAY
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
int key;
cout<<"Enter the key you need to find"<<endl;
cin>>key;
cout<<binarysearch(arr,n,key)<<endl;
}

