#include <stdio.h>
int main()
{
    int lin, col, cont = 0;
    scanf("%d %d", &lin, &col);
    int mapa[lin][col];
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &mapa[i][j]);
        }
    }
    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
            if(j != 0 || j != col - 1 || i != lin - 1 || i != 0){ 
                if (mapa[i][j] == '#' && mapa[i- 1][j] == '.' || mapa[i + 1][j] == '.' || mapa[i][j - 1] == '.' || mapa[i][j + 1] == '.'){
                    cont++;
                }
            }
            else if (mapa[i][j] == '#')
            {
                cont++;
            }
        }
    }
    printf("%d\n", cont);
    return 0;
}