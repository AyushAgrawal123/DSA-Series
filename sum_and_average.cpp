#include <iostream>
using namespace std;
int main()
{
int a[5],size=5;
float sum=0,avg=0;
for(int i=0;i<size;i++)
{
    cin>>a[i];
}

for(int i=0;i<size;i++)
{
    cout<<"Elements in array is = "<<a[i]<<" "<<endl;
    sum+=a[i];
}
avg=sum/size;
cout<<"sum= "<<sum<<endl;
cout<<"avg= "<<avg<<endl;
return 0;
}