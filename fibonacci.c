#include<stdio.h>
  void fibonacci (int n){
    int a=0;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth fibbonacci is %d",n,sum);

  }
  int main(){
    int n;
    printf("Enter Your No :");
    scanf("%d",&n);
    fibonacci(n);
  
    return 0;
}