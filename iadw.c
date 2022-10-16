#include<stdio.h>
int main(){
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    for(int i=1;i<=10;i++){
        printf("%d\n",x*i);

    }
    return 0;
}