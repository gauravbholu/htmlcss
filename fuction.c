#include<stdio.h>
int checknumber(int a){
    if(a==0){
        return 0;
    }
    else if(a>0){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int y=checknumber(x);
    printf("%d",y);
    return 0;
}