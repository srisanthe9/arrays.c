//reading and printing elements in 2d array
#include<stdio.h>

void main(){
    int m,n,i,j;
    printf("enter rows and columns");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
            printf("\n");    
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

