//Jogo da velha
/*desenhar o tabuleiro (matriz 3x3), limitar para 9 jogadas, impor condiçoes de vitoria
pedir as coordenadas para o jogador, salvar a jogada e impedir que o proximo jogador jogue 
no mesmo espaço
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

char tab[3][3];
int x,y,l,c,jog,res,turno,opcao;

do{
    turno = 0;
    res = 0;
    //criar estrutura do jogo
    for(x = 0; x < 3; x++){
        for(y = 0;y < 3; y++){
            tab[x][y] = ' ';
        }
    }


    do{
        //imprimir o tabuleiro
        printf(" 0   1   2  \n");
        for(x = 0 ;x < 3; x++){
            for(y = 0; y < 3; y++){
                printf(" %c ",tab[x][y]);
                if(y < 2){
                    printf("|");
                }
                if(y == 2){
                    printf(" %d",x);
                }
            }
                    if(x < 2){
                    printf("\n-------------\n");
                    }
        }

        //pedir para o jogador entrar com as coordenadas
        do{
            printf("\nEntre com as coordenadas de onde você deseja jogar:\n");
            scanf("%d%d",&l,&c);
        }while(l < 0 || l > 2 || c < 0 || c > 2 || tab[l][c] != ' ');

        //salvar coordenadas
        if(jog == 1){
            tab[l][c] = 'O';
            jog++;
        }
        else{
            tab[l][c] = 'X';
            jog = 1;
        }
        turno++;

        //condiçoes de vitoria por linha
        if(tab[0][0] == 'O' && tab[0][1] == 'O' && tab[0][2] =='O' ||
        tab[1][0] == 'O' && tab[1][1] == 'O' && tab[1][2] =='O' ||
        tab[2][0] == 'O' && tab[2][1] == 'O' && tab[2][2] =='O'){
            printf("\nO jogador O venceu!");
            res = 1;
        }
        if(tab[0][0] == 'X' && tab[0][1] == 'X' && tab[0][2] =='X' ||
        tab[1][0] == 'X' && tab[1][1] == 'X' && tab[1][2] =='X' ||
        tab[2][0] == 'X' && tab[2][1] == 'X' && tab[2][2] =='X'){
            printf("\nO jogador X venceu!");
            res = 1;
        }

        //condiçoes de vitoria por coluna
        if(tab[0][0] == 'O' && tab[1][0] == 'O' && tab[2][0] =='O' ||
        tab[0][1] == 'O' && tab[1][1] == 'O' && tab[2][1] =='O' ||
        tab[0][2] == 'O' && tab[1][2] == 'O' && tab[2][2] =='O'){
            printf("\nO jogador O venceu!");
            res = 1;
        }
        if(tab[0][0] == 'X' && tab[1][0] == 'X' && tab[2][0] =='X' ||
        tab[0][1] == 'X' && tab[1][1] == 'X' && tab[2][1] =='X' ||
        tab[0][2] == 'X' && tab[1][2] == 'X' && tab[2][2] =='X'){
            printf("\nO jogador X venceu!");
            res = 1;
        }

        //condiçoes de vitoria por diagonal
        if(tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O' ||
        tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0] == 'O'){
            printf("\nO jogador O venceu!");
            res = 1;
        }
        if(tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X' ||
        tab[0][2] == 'X' && tab[1][1] == 'X' && tab[2][0] == 'X'){
            printf("\nO jogador X venceu!");
            res = 1;
        }   
    }while(res == 0 && turno < 9);
    if(res == 0){
        printf("\nDeu velha!\n");
    }
    printf("\nDigite 1 para jogar novamente.");
    scanf("%d",opcao);
}while(opcao == 1);
return 0;
}