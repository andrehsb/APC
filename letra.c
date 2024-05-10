#include <stdio.h>
int main()
{
    char l;
    char frase[1001];
    float razao;
    int sinal = 0;
    float qnt = 1, frq = 0;
    scanf("%c", &l);
    scanf(" %1000[^\n]", frase);
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == ' '){
            sinal = 0;
            qnt++;
        }
        if(sinal == 0 && frase[i] == l){
            sinal = 1;
            frq++;
        }
    }
    printf(" qnt %f\n", qnt);
    printf("frq %f\n", frq);
    razao = (frq / qnt) * 100;
    printf("%.1f\n", razao);
    return 0;
}