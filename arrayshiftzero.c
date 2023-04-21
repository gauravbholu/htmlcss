#include<stdio.h>
int main(){
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter your no :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==0 && a[j]!=0){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else if(a[i]>a[j] && a[i]>0 && a[j]>0){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("result\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}