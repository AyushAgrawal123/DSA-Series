#include <iostream>
using namespace std;
int main()
{

    int a[30], size;
    int maxi = 0, i, j;

    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the " << size << " elements in array " << endl;
    // taking user input;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int majority = a[0];

    for (i = 0; i < size; i++)
    {
        int cnt = 0;
        for (j = 0; j < size; j++)
        {
            if (a[i] == a[j])
                cnt++;
        }
        if (cnt > maxi)
            maxi = cnt;
        majority = a[i];
    }
    cout << "The majority element is " << majority << endl
         << "his frequency is " << maxi;

    return 0;
}
