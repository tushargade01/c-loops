#include<stdio.h>
int main(){
    int m;
    printf("Enter number");
    scanf("%d", &m);
    for(int c=10;c>=1;c--){
        printf("%d",m*c);
    }
    return 0;
}