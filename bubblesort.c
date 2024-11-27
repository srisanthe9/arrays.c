/*Write a C Program to Sort the elements using Bubble sort
sample input=1 4 7 3
sample output=1 3 4 7
*/
#include<stdio.h>

void main(){
    int i,j,k;
    int arr[4];
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<4;j++){
    for(i=0;i<3;i++){
            if(arr[i]>arr[i+1]){k=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=k;
            }
        }
    }
    for(i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
}