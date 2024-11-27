#include<stdio.h>

int fun(int num){
    int count=0;
    while(num!=0){
        count++;
        num>>=1;
    }
    return (count);
}
int main(){
    int c=fun(435);
    printf("%d",c);

}
