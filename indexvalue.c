#include<stdio.h>
int main(){
    int a[7] ={1,2,3,7,5,6,5};
    for(int i=0;i<=6;i++){
        if(i%2!=0){
          a[i]=a[i]*2;  
        }
        else{
            a[i]=a[i]+10;
        }
    }
        for(int i=0;i<=6;i++){
            printf("%d\n",a[i]);
        }
    
    return 0;
}