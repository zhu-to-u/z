#include<stdio.h>
#include<stdlib.h>
#define X 100
int main(){
   int N,m=1;
   int i,j,k,z,c;
   int a[X][X]={0};
   scanf("%d",&N);
   for(c=0;c<=N/2+1;c++){
        for(i=c;i<=N-c-1;i++){
            a[c][i]=m++;
        }
        for(j=c+1;j<N-c;j++){
           a[j][N-c-1]=m++;
        }
        for(k=N-c-2;k>=c;k--){
            a[N-c-1][k]=m++;
        }
        for(z=N-c-2;z>=c+1;z--){
            a[z][c]=m++;
        }
   }
   for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        printf("%3d",a[i][j]);
    }
    printf("\n");
   }
 
}
//螺旋方阵