#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], c[10], d[30];
    int i, k;
    int m, n, p;
    cout << "How many element in a " << endl;
    cin >> m;
    cout << "Enter " << m << "  " << endl;
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << "How many element in b " << endl;
    cin >> n;
    cout << "Enter " << n << " elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "How many element in c " << endl;
    cin >> p;
    cout << "Enter " << p << " elements" << endl;
    for (i = 0; i < p; i++)
    {
        cin >> c[i];
    }
    for (i = 0, k = 0; i < n; i++, k++)
    {
        d[k] = b[i];
    }
    for (i = 0; i < m; i++, k++)
    {
        d[k] = a[i];
    }
    for (i = 0; i < p; i++, k++)
    {
        d[k] = c[i];
    }
    cout << "Now concatenated array is " << endl;
    for (i = 0; i < m + n + p; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}