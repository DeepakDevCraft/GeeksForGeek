// Given an array of integers, find the sum of its elements.

// Examples:

// Input : arr[] = {1, 2, 3}
// Output : 6
// Explanation: 1 + 2 + 3 = 6

// Input : arr[] = {15, 12, 13, 10}
// Output : 50

#include <iostream>
using namespace std;
int main(){
    int sum =0,size;
    cout<<"Enter the value of size"<<" ";
    cin>>size;
    int arr[size];
    cout<<endl<<"Enter the element"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int j=0;j<size;j++)
    {
        sum+=arr[j];
    }
    cout<<"The sum is "<<sum;
    return 0;
}