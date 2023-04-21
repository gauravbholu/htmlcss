#include<stdio.h>
void even(int a){
    if(a%2==0){
    printf ("even");
    }
    else{
    printf("Odd");
    }
}
int prime(int n){
 int i=2;
 while(i<n){
    if(n%i==0){
        return 0;
    }
    break;
    i=i+1;
    if(n==i){
        return 1;
    }
 }

}
int factorial(int j){
    int product =1;
    for(int i=1;i<=j;i++){
    product=product*i;
    }
    return product;
}
void marks(int k,int l){
    printf("your marks:\n %d\n",(k*l)/100);
}
int main(){
    printf("Enter Your No. :");
    int b;
    scanf("%d",&b);
    even(b);

    printf("Check Prime No :");
    int c;
    scanf("%d",&c);
    int d=prime(c);
    printf("%d",d);
    printf("Check Factorial :");
    int e;
    scanf("%d",&e);
    int f=factorial(e);
    printf("%d",f);
    printf("Marks\n");
    int k,l;
    printf("percentage%%\n");
    scanf("%d",&k);
    printf("percentage%%\n");
    scanf("%d",&l);
    marks(k,l);
    return 0;
}