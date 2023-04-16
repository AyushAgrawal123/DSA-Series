#include<iostream>
using namespace std;
int main()
{

    int a[7]= {2,4,3,6,7,9,8};
    int b[7],c[7],j=0,k=0;
    int n=7,i;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }


    }
    cout<<"even elements are : "<<endl;
    for(i=0; i<j; i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<"odd elements are : "<<endl;
    for(i=0; i<k; i++)
    {
        cout<<c[i]<<endl;
    }


}

