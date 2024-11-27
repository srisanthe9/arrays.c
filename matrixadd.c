/*Write C program to find the transpose of a matrix
Sample input=
rows=3
columns=3
1 2 3 4 5 6 7 8 9

Sample output=
1 4 7 2 5 8 3 6 9
*/
#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("rows=");
    scanf("%d",&m);
    printf("columns=");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            printf("%d ",arr[i][j]);
        }
    }
}