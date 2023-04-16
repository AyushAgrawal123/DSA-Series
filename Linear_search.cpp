#include <iostream>
using namespace std;
bool boolsearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}
int main()
{
    int i, j, key, max, min, size;
    cout << "Enter the Key for search :" << endl;
    cin >> key;
    cout << "Enter the size of array :" << endl;
    cin >> size;
    int array[size];
    cout << "Enter the values in array :" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int ans = boolsearch(array, size, key);
    if (ans == 1)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    return 0;
}