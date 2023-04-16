#include <iostream>
using namespace std;
int Max(int arr[], int size);
int Min(int arr[], int size);
int main()
{

    int i, j, max, min, size;
    cout << "Enter the size of array :" << endl;
    cin >> size;
    int array[size];
    cout << "Enter the values in array :" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    max = Max(array, size);
    min = Min(array, size);
    cout << "MAximum is = " << max << endl;
    cout << "Minimum is = " << min << endl;
    return 0;
}
int Max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int Min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
