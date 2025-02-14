// Your code here...
#include<stdio.h>
int main(){
    scanf("%d %d",&a,&b);
    printf(((a>0 && b<0)||(a<0 && b>0))?"True":"False");
    return 0;
}