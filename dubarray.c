//finding duplicates in array
#include<stdio.h>

void main(){
    int i,n,k,dub;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Duplicates elements in array are:");
    for(i=0;i<n;i++){  dub=a[i];   
     
        for(k=i+1;k<n;k++){
            if(dub==a[k]){
                printf("%d ",dub);
            }
        }
    }

    
}