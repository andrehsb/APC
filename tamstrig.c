#include <stdio.h>
int main(){
    char palavra[1000];
    scanf("%s", palavra);
    int i;
    for(i = 0; palavra[i] != '\0'; i++);

    printf("%d\n", i);
    return 0;
}