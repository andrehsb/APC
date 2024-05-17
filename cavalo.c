#include <stdio.h>
int main(){
    int n, jog;
    int x = 4, y = 3;
    scanf("%d", &n);
    int cont = 0;
    for (int i = 1; i <= n; i++){
        scanf("%d", &jog);
        cont++;       
        if (jog == 1){
            x++;
            y += 2;
        }else if (jog == 2){
            x += 2;
            y++;
        }else if (jog == 3){
            x += 2;
            y--;;
        }else if (jog == 4){
            x++;
            y -= 2;
        }else if (jog == 5){
            x--;
            y -= 2;
        }else if (jog == 6){
            x -= 2;
            y--;
        }else if (jog == 7){
            x -= 2;
            y++;
        }else {
            x--;
            y += 2;
        }
        if (x == 1 && y == 3 || x == 2 && y == 3 || x == 2 && y == 5 || x == 5 && y == 4){
            break;
        }
    }
    printf("%d\n", cont);
}