#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    char *iseven;
    if(a%2==0){
        iseven="even";
    }else{
        iseven="odd";
    }
    printf("%d is %s", a, iseven);
    return 0;
}