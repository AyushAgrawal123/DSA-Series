//User function Template for C


//Function to rotate matrix anticlockwise by 90 degrees.
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void rotateby90(int n, int matrix[][n]) 
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
        
    }
    for(int j=0;j<n;j++){
        int s=0;
        int e=n-1;
        while(s<e){
            swap(&matrix[s++][j],&matrix[e--][j]);
            
        }
     
    }
} 
