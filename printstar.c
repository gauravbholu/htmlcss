#include<stdio.h>
int main(){
 int a;
 int i;
 printf("Enter your no");
 scanf("%d",&a);
for(i=1;i<=a;i=i+2){

 int k;
 for(k=a;k>i;k--){
 printf(" ");  
 } 
 int j;
 for(j=1;j<=i;j++){
  printf(" *");  
 } 
 printf("\n");
 }   
 return 0;
}