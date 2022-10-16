#include<stdio.h>
int main(){
    for(int a=1;a<=7;a++){
        if(a==5){
            break;
        }
        printf("%d",a);
    }
    return 0;
}