// Given an array arr[] of size N, the task is to find the largest element in the given array.

// Examples:

// Input: arr[] = {10, 20, 4}
// Output: 20
// Explanation: Among 10, 20 and 4, 20 is the largest.

// Input : arr[] = {20, 10, 20, 4, 100}
// Output : 100

#include <iostream>
using namespace std;
int main()
{
    int max, size;
    cout << "Enter the size of an array ";
    cin >> size;
    int arr[size];
    cout << "Enter the element " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];

    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }

    cout<<endl<<"The largest element is "<<max;
    return 0;

}