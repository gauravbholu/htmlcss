#include<stdio.h>
int evenodd(int a){
   if(a%2==0){
    return 1;
   }
    else{
        return 2;
    }
}
int prime(int a){
    int i=2;
    while(i<a){
   if(a%i==0){
    return 0;
   }
   break;
   i=i+1;
   if(a==i){
    return 1;
   }
    }
} 
int main(){
    int a;
    printf("Enter Array Size");
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
   printf("Check Even No. :");
   for(int i=0;i<a;i++){
    if(n[i]%2==0 || n[i]%2!=0){
    int c=evenodd(n[i]);
    printf("%d\n",c);
    }
    else{
        int d= prime(n[i]);
        printf("%d",d);
    }
   }
   int sum=0; int s=0;
   for(int i=0;i<a;i++){
    if(n[i]%2==0){
        sum=sum+1;
    }
    else{
        s=s+2;
    }
   }
   printf("%d\n",sum+s);

}