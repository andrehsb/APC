#include <stdio.h>
int main(){
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    while(n != 0 && m != 0 && s != 0){
        char mapa[n][m];
        char inst[s];
        int sentido = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf(" %c", mapa[i][j]);
            }
        }   
        scanf(" %s", inst);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mapa[i][j] == 'S'){
                    sentido = 3;
                    break;
                }else if(mapa[i][j] == 'L'){
                    sentido = 'L';
                    break;
                }else if(mapa[i][j] == 'O'){
                    sentido = 'O';
                    break;
                }
            }
        }


        scanf("%d %d %d", &n, &m, &s);
    }
    return 0;
}