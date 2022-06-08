#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the size of the array" << endl;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         // Implying the condition that if if arrof j is gretaer than array of i then swap there positions 

    //         if (arr[j]<arr[i])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }
    // // To print the array;
    
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }




//Bubble Sort
int n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[n];
    
}
int counter =1;
while (counter<n)
{
    for (int i = 0; i < n- counter; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
        
        
    }
    
  counter++;
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";

}cout<<endl;



}
