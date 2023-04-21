#include<stdio.h>
int main(){
    int n;
    printf("How many students :");
    scanf("%d",&n);
    int gaurav=75;
    int ravi=70;
    int abhishek=80;
    printf("Enter your marks\n");
    for(int i=100;i>0;i--){
        if(abhishek==i){
            printf("abhishek\n");
        }
        else if(gaurav==i){
            printf("gaurav\n");
        }
        else if(ravi==i){
            printf("ravi\n");
        }
        else{
            printf("result is not available\n");
        }
    }
    return 0;
}