#include <stdio.h>
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int count=0,i,sum;
printf("enter the sum of pair :");
scanf("%d",&sum);
for(i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
        if(arr[i]+arr[j]==sum)
        count++;
    }
}
printf("NUMber of pairs is = %d",count);
return 0;
}