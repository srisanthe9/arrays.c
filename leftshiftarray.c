#include<stdio.h>

void main(){
    int n,i,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter number of elements to be left shifted:");
    scanf("%d",&k);
    for(i=k;i<n;i++){
        printf("%d ",a[i]);}
        if(i==n){
            for(i=0;i<k;i++){
                printf("%d ",a[i]);
            }
        

}
}

