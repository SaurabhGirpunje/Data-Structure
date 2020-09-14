/*
Time complexity : O(n * d)
Auxiliary Space : O(1)
*/

#include <iostream>
using namespace std;

void leftrotatebyone(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[i] = temp;
}

void leftrotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftrotatebyone(arr, n);
    }
    
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}

int main()
{
    int d;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cin>>d;
    leftrotate(arr, d, n);
    printarray(arr, n);
    return 0;
}