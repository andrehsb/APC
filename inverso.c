#include <stdio.h>
    int main(){
        char str[1000], inv[1000];
        scanf("%s", str);
        int i;
        for(i = 0; str[i] != '\0'; i++);
        i--;
        for(; i >= 0; i--){           
           printf("%c", str[i]);
        }
        printf("\n");
        return 0;
    }
