#include<stdio.h>
int main(){
    int d;
    printf("enter num:\n");
    scanf("%d", &d);
    switch (d)
    {
    case 1:printf("wen");
        break;
    case 2:printf("sun");
        break;    
    
    default:printf("choose ");
        break;
    }
    return 0;
}