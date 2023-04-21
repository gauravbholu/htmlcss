#include<stdio.h>
int main(){
    int a; int sum=0; float avg; int max=-999999; int min=999999;
    int marks;

    printf("How many students\n");
    scanf("%d",&a);
    int i;
    for(i=1;i<=a;i++){    
    printf("Enter your marks\n");
    scanf("%d",&marks);
    sum=sum+marks;
    avg=(sum/a);
    if(max<marks){
    max=marks;
    }
    if(min>marks){
    min=marks;    
    }

    }
    printf("%0.1f is avg.\n",avg);
    printf("%d is max\n",max);
    printf("%d is min\n",min);

    return 0;
}