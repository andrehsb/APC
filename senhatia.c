#include <stdio.h>
int main()
{
    int n, m, a, k;
    int contm = 0, conta = 0, contk = 0;
    scanf("%d %d %d %d", &n, &m, &a, &k);
    char senha[1001];
    scanf("%s", senha);
    int i;
    for (i = 0; senha[i] != '\0'; i++)
    {
        if (senha[i] >= 48 && senha[i] <= 57)
        {
            contk++;
        }
        else if (senha[i] >= 65 && senha[i] <= 90)
        {
            conta++;
        }
        else if (senha[i] >= 97 && senha[i] <= 122)
        {
            contm++;
        }
    }
    if (conta == a && contk == k && contm == m && n <= i){
        printf("Ok =/\n");
    }else{
        printf("Ufa :)\n");
    }

    return 0;
}
/*
num - de 48 ate 57
mai - de 65 ate 90
min - de 97 ate 122
*/