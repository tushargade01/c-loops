#include<stdio.h>
int main()
{
    for(int z=0;z<=10;z++){
        if(z==7){
            continue;
        }
        printf("%d",z);
    }
    return 0;
}