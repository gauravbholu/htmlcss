#include<stdio.h>
void reverse(int a){
    int rem;
    int rev=0;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
        printf("%d",rev);
    
}
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    reverse(n);
    return 0;
}