#include<stdio.h>
int main(){
    int a;
    int i=1;
    printf("Enter your no");
    scanf("%d",&a);
    while(i<=a){
    int j=1;
    while(j<=i){
    printf("*");
    j=j+1;    
    }    
    printf("\n");
    i=i+1;
    a=a-1;
    }
    int c=1;
    while(c<=a){
    int d=a;
    while(d>=c){
    printf("*");
    d=d-1;    
    }    
    printf("\n");
    c=c+1;
    }
    return 0;
}