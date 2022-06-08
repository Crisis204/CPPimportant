#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s = 0;
    int e = n;
    while (s>e)
    {
        int mid =s+e/2;
        if (arr[mid]==key){
            return mid;
        }
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
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
int key;
cout<<"Enter the key you need to find"<<endl;
cin>>key;
cout<<binarysearch(arr,n,key)<<endl;

}
