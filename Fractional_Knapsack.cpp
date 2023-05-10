#include <iostream>
using namespace std;
void knapSack(int nObj,float p[],float w[],float pw[],int capacity){
    float x[20];
    int i;
    float cp=capacity, tp=0;
    for( i=0;i<nObj;i++){
        x[i]=0.0;
    }
    for( i=0;i<nObj;i++){
        if(w[i]>cp){
             x[i]=cp/w[i];
        tp=tp+(p[i]*x[i]);
            break;
        }
        else{
            x[i]=1.0;
            tp=tp+p[i];
            cp=cp-w[i];
        }
    }
  
    cout<<"The Solution vector is "<<endl;
    for(int i=0;i<nObj;i++){
        cout<<x[i]<<"\t";
    }
    cout<<endl;
    cout<<"The total profit is "<<tp<<endl;
    
}
int main()
{
    float p[20],w[20],pw[20];
    int n;
    float capacity;
    cout<<"how many objects "<<endl;
    cin>>n;
    
    cout<<"Enter the profit and weights of the objects respectively"<<endl;
    
    for(int i=0;i<n;i++){
    cin>>p[i]>>w[i];    
    }
    
    cout<<"Enter capacity of the knapSack"<<endl;
    cin>>capacity;
       
    for(int i=0;i<n;i++){
        pw[i]=(p[i])/(w[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(pw[j]<pw[j+1]){
                swap(pw[j],pw[j+1]);
                swap(p[j],p[j+1]);
                swap(w[j],w[j+1]);
            }
        }
    }
    knapSack( n,p,w,pw ,capacity);
    
    for(int i=0;i<n;i++){
        cout<<pw[i]<<" ";
    }
    return 0;
}
