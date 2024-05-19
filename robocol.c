#include <stdio.h>
int main(){
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    
    while(n != 0 && m != 0 && s != 0){
        char mapa[n][m];
        char inst;
        int sentido;
        int x = 0, y = 0, fig = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf(" %c", &mapa[i][j]);
            }
        }         
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mapa[i][j] == 'N'){
                    sentido = 1;
                    x = j;
                    y = i;
                    break;
                }else if(mapa[i][j] == 'S'){
                    sentido = 3;
                    x = j;
                    y = i;
                    break;
                }else if(mapa[i][j] == 'L'){
                    sentido = 2;
                    x = j;
                    y = i;
                    break;
                }else if(mapa[i][j] == 'O'){
                    sentido = 4;
                    x = j;
                    y = i;
                    break;
                }
            }
        }
        for(int i = 0; i < s; i++){
            scanf(" %c", &inst);
            //printf("sentido :%d\n", sentido);
            //printf("%d, %d\n", x, y);
            if (mapa[x][y] == '*'){
                fig++;
                mapa[x][y] = '.';
            }   
            if (inst == 'D'){
                if(sentido == 4){
                    sentido = 1;
                } else {
                sentido++;
                }
            }else if (inst == 'E'){
                if (sentido == 1){
                    sentido = 4;
                } else{
                sentido--;
                }
            }else if (inst == 'F'){
               
                if (mapa[x][y - 1] != '#' && sentido == 1){
                    y--;
                }else if (mapa[x + 1][y] != '#' && sentido == 2){
                    x++;
                }else if (mapa[x][y + 1] != '#' && sentido == 3){
                    y++;
                }else if (mapa[x - 1][y] != '#' && sentido == 4){
                    x--;
                }
            }
            printf("%d, %d  >%c#\n",x, y, mapa[x][y]);
                     
        }
        printf("%d\n", fig);
        scanf("%d %d %d", &n, &m, &s);
    }
    return 0;
}
