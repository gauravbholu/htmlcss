#include<stdio.h>
int main(){
    int n;
    printf("Enter your no :");
    scanf("%d",&n);
    int a[n];
    int b[100]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]=b[a[i]]+1;
    }
    int c;
    printf("Which No you want to check :\n");
    scanf("%d",&c);
        
    printf("%d is %d time\n",c,b[c]);
    
    
    return 0;
}