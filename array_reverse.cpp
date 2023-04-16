#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], c[20];
    int i, k;
    int m, n;
    cout << "How many element in array " << endl;
    cin >> m;
    cout << "Enter " << m << "  " << endl;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    int e = m - 1;
    while (s <= e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    cout << "Now array printing " << endl;
    for (i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
}