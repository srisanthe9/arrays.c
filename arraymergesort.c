#include<stdio.h>

void main(){
    int a,b,i,j;
    printf("enter a and b:");//reading arrays
    scanf("%d %d",&a,&b);
    int arr1[a],arr3[a+b];
    printf("enter elements of arr1:");
for(i=0;i<a;i++){
    scanf("%d",&arr1[i]);
    arr3[i]=arr1[i];//storing arr1 elements in arr3
}
int arr2[b];
printf("enter elements in arr2:");
for(j=0;j<b;j++){
    scanf("%d",&arr2[j]);
    if(i<a+b){        //storing arr2 elements in arr3
        arr3[i]=arr2[j];
        i++;
    }
}

//sorting arr3
int k;
for(i=0;i<a+b;i++){
    for(j=i+1;j<a+b;j++){
        if(arr3[i]>arr3[j]){
            //swaping 
            k=arr3[i];
            arr3[i]=arr3[j];
            arr3[j]=k;

        }
    }
}
printf("the array formed merging and sorting two arrrays is");
for(i=0;i<a+b;i++){
    printf("%d ",arr3[i]);
}
}