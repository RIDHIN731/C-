#include<stdio.h>
int main(){
    int a=6;
    int b=10;
    int c=5;

    if(a>b&&a>c){
        printf("a is greater");
    }
    else if(b>a&&b>c){
        printf("b is greater");        
    }
    else{
        printf("cis greaer");
    }

}