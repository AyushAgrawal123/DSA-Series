#include <iostream>
using namespace std;
int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cin >> size;
    int array[size];
    cout << "Enter the values in array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int ans = unique(array, size);
    cout << "unique element is " << ans;

    return 0;
}