#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter a no\n");
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j){
  printf("max.no is %d\n",a);  
}
else if(b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j){
  printf("max.no is %d\n",b);  
}
else if(c>d && c>e && c>f && c>g && c>h && c>i && c>j){
  printf("max.no is %d\n",c);  
}
else if(d>e && d>f && d>g && d>h && d>i && d>j){
  printf("max.no is %d\n",d);  
}
else if(e>f && e>g && e>h && e>i && e>j){
  printf("max.no is %d\n",e);  
}
else if(f>g && f>h && f>i && f>j){
  printf("max.no is %d\n",f);  
}
else if(g>h && g>i && g>j){
  printf("max.no is %d\n",g);  
}
else if(h>i && h>j){
  printf("max.no is %d\n",h);  
}
else if(i>j){
  printf("max.no is %d\n",i);  
}
else{
  printf("max.no is %d\n",j);  
}
if(a<b && a<c && a<d && a<e && a<f && a<g && a<h && a<i && a<j){
  printf("min.no is %d\n",a);  
}
else if(b<c && b<d && b<e && b<f && b<g && b<h && b<i && b<j){
  printf("min.no is %d\n",b);  
}
else if(c<d && c<e && c<f && c<g && c<h && c<i && c<j){
  printf("min.no is %d\n",c);  
}
else if(d<e && d<f && d<g && d<h && d<i && d<j){
  printf("min.no is %d\n",d);  
}
else if(e<f && e<g && e<h && e<i && e<j){
  printf("min.no is %d\n",e);  
}
else if(f<g && f<h && f<i && f<j){
  printf("min.no is %d\n",f);  
}
else if(g<h && g<i && g<j){
  printf("min.no is %d\n",g);  
}
else if(h<i && h<j){
  printf("min.no is %d\n",h);  
}
else if(i<j){
  printf("min.no is %d\n",i);  
}
else{
  printf("min.no is %d\n",j);  
}
int z=((a+b+c+d+e+f+g+h+i+j)/10);
printf("avg.marks is %d\n",z);
}