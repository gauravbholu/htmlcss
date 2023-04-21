#include<stdio.h>
int main(){
    int a;
    printf("Size of Array :");
    scanf("%d",&a);
    int n[a];
    printf("Enter Number :");
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    int b;
    printf("User will give no :");
    scanf("%d",&b);
    int sum; int count=0;
    for(int i=0;i<a;i++){
      for(int j=i+1;j<a;j++){
        sum=n[i]+n[j];
        int s=sum+n[j+1];
        int k=sum+s;
        if(b==s || b==sum || b==k){
        count=1;
        }
      }
      }  
      if(count==1){
        printf("No. is Present in array\n");
      }
      else{
        printf("No. is not Present In Array\n");
      }
    
    return 0;
}