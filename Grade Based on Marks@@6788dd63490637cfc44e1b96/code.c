// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("A");
    }
    else if(a>=80 and <90){
        printf("B");
    }
    else if(a>=70 and a<80){
        printf("C");
    }
    else if(a>=60 and a<70){
        printf("D");
    }
    else{
        printf("F");
    }

}