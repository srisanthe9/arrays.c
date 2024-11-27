/*Write C program to find matrix addition
Sample input=
1 2 3 4
5 6 7 8
Sample output=
6 8 10 12
*/
#include<stdio.h>

void main(){
   int i,j;
   int arr1[2][2],arr2[2][2],arr3[2][2];
   for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           scanf("%d",&arr1[i][j]);
       }
   }
    for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           scanf("%d",&arr2[i][j]);
       }
   }
    for(i=0;i<2;i++){
       for(j=0;j<2;j++){
           arr3[i][j]=arr1[i][j]+arr2[i][j];
       }
   }
    for(i=0;i<2;i++){
       for(j=0;j<2;j++){
          printf("%d ",arr3[i][j]);
       }
   }
   
   
}