#include <stdio.h>
void foo(){
        printf("Hello\n");
}
int main(){
        printf("Give me a number\n");
        int num = 0;
        scanf("%d",&num);
        if (num%2 == 0)
                foo();
        else
                printf("errore\n");
}
