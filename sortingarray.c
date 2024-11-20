#include<stdio.h>

void main(){
    int n,i,j,k;
    printf("enter n:");
    scanf("%d",&n);
    //reading elements in array
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //sorting array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;

            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}