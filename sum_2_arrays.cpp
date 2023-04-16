#include <iostream>
using namespace std;
int main()
{
int a[5],b[5],c[5],size=5;
float sum=0,avg=0;
cout<<"Enter elements in first array :"<<endl;
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"Enter elements in second  array :"<<endl;
for(int i=0;i<size;i++)
{
    cin>>b[i];

}
cout<<"Printing the c array "<<endl;
for(int i=0;i<size;i++)
{
    c[i]=a[i]+b[i];
    cout<<c[i]<<" ";
    
}
return 0;
}