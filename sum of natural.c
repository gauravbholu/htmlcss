#include<stdio.h>
int main(){
    int a;
    int sum=0;
    int i=1;
    printf("Enter your no");
    scanf("%d",&a);
    while(i<=a){
    sum=sum+i;
    i=i+1;    
    }
    printf("sum of natural no is %d\n",sum);
    return 0;
}