#include<stdio.h>

void main(){
int m,n,i,j;
printf("enter rows and coloumns of arr1:");
scanf("%d %d",&m,&n);
int arr1[m][n];
printf("enter elements in arr1:");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr1[i][j]);

    }
    printf("\n");
}
int a,b;
printf("enter rows and couloums of arr2:");
scanf("%d %d",&a,&b);
int arr2[a][b];
printf("enter elements in arr2:");
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        scanf("%d",&arr2[a][b]);

    }
    printf("\n");
}

int arr3[m][n];
if(m==a&&n==b){

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
else{
    printf(" matrix addition is not possible");
}

}