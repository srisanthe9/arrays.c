/*Write a C program to remove duplicate element from 
the given Array

sample input=1 2 3 4 4
sample output=1 2 3 4
*/
#include<stdio.h>

void main(){
    int i,j,k,n,max;
   
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    //finding max
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    //finding duplicate
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]+=max;
                
            }
        }
    }
    //sorting
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){k=a[i];
            a[i]=a[j];
            a[j]=k;
               }
        }
    }
    //printing without duplicates
     for(i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
    
}