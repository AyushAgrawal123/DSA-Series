#include <iostream>
using namespace std;
int main()
{
    int a[10],b[10],c[20];
    int i,k;
    int m,n;
    cout<<"How many element in a "<<endl;
    cin>>m;
    cout<<"Enter "<<m<<"  "<<endl;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"How many element in b "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements"<<endl;
    for(i=0;i<n;i++){
        cin>>b[i];
    } 
       for(i=0,k=0;i<n;i++,k++ ){
           c[k]=b[i];
       }
              for(i=0;i<m;i++,k++ ){
           c[k]=a[i];
       }
        cout<<"Now concatenated array is "<<endl;
for(i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}