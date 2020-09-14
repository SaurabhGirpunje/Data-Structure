/*
insert the number at certain position
*/

#include <iostream>
using namespace std;

int main()
{
    int size, pos, i, num;
    std::cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "Enter no position" << endl;
    std::cin >> pos;
    std::cout << "No you want to insert" << endl;
    std::cin >> num;
    if (pos <= 0 || pos > size + 1)
    {
        std::cout << "invalid position" << endl;
    }
    else
    {
        for (int i = size - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        size++;
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    return 0;
}