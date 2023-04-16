#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i, m,sum=0;
    cout << "How many element in array " << endl;
    cin >> m;
    cout << "Enter " << m << "elements  " << endl;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    cout << "Now sum of array is "<<sum;
    return 0;
}