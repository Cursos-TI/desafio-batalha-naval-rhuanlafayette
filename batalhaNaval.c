#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHA 10 //definicao do numero de linhas para caso precise mudar não precise procurar por todo o codigo
#define COLUNA 10 //mesma logica da linha acima

void CONE(){ // criacao de um void para que seja chamado posteriormente no codigo no momento certo
    int tabuleiro[LINHA][COLUNA]; // criacao do tabuleiro do zero dentro do void

for ( int i = 0; i < LINHA; i++){ //utilizando for para criacao do tabuleiro 10x10
    for (int j = 0; j < COLUNA; j++){
       if (tabuleiro[i][j] != 0) // criacao do if para que todos os numeros caso nao sejam 0 se tornem 0, deixando o tabuleiro 'limpo'
       {
            tabuleiro[i][j] = 0;
       };
        printf("%d", tabuleiro[i][j]); // printf para imprimir o tabuleiro apenas com agua
    }
        printf("\n");
};

for (int i = 0; i < LINHA; i++){ // utilizacao do for aninhado para a alteração no tabuleiro
    for (int j = 0; j < COLUNA; j++){
        if (i == 2 && j == 2 || // utilizando if para que esses campos dentro da matriz sejam alterados para 1, pois foram atingidos 
            i == 3 && j >= 1 && j <= 3 ||
            i == 4 && j >= 0 && j <= 4) {
            tabuleiro[i][j] = 1;
            }
        } 

    } 

printf("\n"); // printf para pular uma linha
for ( int i = 0; i < LINHA; i++){ // for para imrprimir a matriz com as novas alterações
    for (int j = 0; j < COLUNA; j++){
        printf("%d", tabuleiro[i][j]);
    }
        printf("\n");
    };
    };


void cruz(){ // void criado para quando o campo que ativar e ltera os campos formando uma cruz
    int tabuleiro[LINHA][COLUNA]; // criação do tabuleiro do 0, tudo é água

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0) // transformar todos os numeros da matriz em 0
           {
                tabuleiro[i][j] = 0;
           };
            printf("%d", tabuleiro[i][j]); // imprimir tabuleiro 'limpo'
        }
            printf("\n");
    };
    
    for (int i = 0; i < LINHA; i++){ // for para as alterações
        for (int j = 0; j < COLUNA; j++){
            if (i >= 2 && i <= 8 && j >= 2 && j <=7 ||  // if para as alteraçõees dos campos atigidos formando a cruz, a modificação é feito linha por linha, limitando o tamanho correto
                i >= 3 && i < 5 && j >= 0 && j <=9) {
                tabuleiro[i][j] = 1;}
                
            }  
        };

printf("\n"); // impressão de uma linha + impressão da matriz atualizada
for ( int i = 0; i < LINHA; i++){
    for (int j = 0; j < COLUNA; j++){
        printf("%d", tabuleiro[i][j]);
    }
        printf("\n");
    };

};

void octaedro(){ // void para quando o campo for atingido e varios campos mudarem formando um octaedro (losango)
    int tabuleiro[LINHA][COLUNA]; //mesma logica inicial dos outros voids

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0)
           {
                tabuleiro[i][j] = 0;
           };
            printf("%d", tabuleiro[i][j]);
        }
            printf("\n");
    };
    
    for (int i = 0; i < LINHA; i++){ // mesma logica de alteração dos outros voids
        for (int j = 0; j < COLUNA; j++){
            if (tabuleiro[i][j] <= tabuleiro[5][5]){ // limitacao da mudança por linha e coluna, para que fiquem dentro da matriz
            if (i == 2 && j == 4 ||
                i == 3 && j >= 3 && j <= 5 ||
                i == 4 && j >= 2 && j <= 6 ||
                i == 5 && j >= 1 && j <= 7 ||
                i == 6 && j >= 2 && j <= 6 ||
                i == 7 && j >= 3 && j <= 5 ||
                i == 8 && j == 4) {
                tabuleiro[i][j] = 1;
                }}
            } 
    
        }

printf("\n"); // impressão da linha + da matriz atualizada com campos agora formando um losango (octaedro)
for ( int i = 0; i < LINHA; i++){
    for (int j = 0; j < COLUNA; j++){
        printf("%d", tabuleiro[i][j]);
    }
        printf("\n");
    };  

}

int main() {
//criação do tabuleiro 10x10, todos os valores 0 conforme solicitado
    int tabuleiro[LINHA][COLUNA] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
    };
        
    printf("         Tabuleiro: \n"); //printf titulo 'Tabuleiro' 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'}; // criação de Array para que cada coluna seja denominada por uma letra
        for (int c = 0; c < COLUNA; c++) { // criação do for para que o sistema imprima cada letra sem precisar criar 10 linhas de codigo
         printf("  %c", linhacoluna[c]); // coloquei um espaço antes do %c para que cada letra ficasse separada e organizada
        };
        printf("\n"); //printf com \n para pular uma linha assim que as colunas forem definidas

    int numerolinha[LINHA] = {1,2,3,4,5,6,7,8,9,0}; //array para enumerar as linhas e dar sequência ao jogo
        for (int l = 0; l < LINHA; l++) { // for externo para imprimir cada número de linha
        printf("%d", numerolinha[l]);
        for(int j = 0; j < LINHA; j++){ // for interno para imprimir o tabuleiro linha por linha
            printf("%3d", tabuleiro[j][l]); //Utilizei o %3d para dar uma distância de modo que os valores ficassem embaixo de cada letra da coluna
        }
        printf("\n"); // printf para pular uma linha
    };


    int naviovertical[1] = {3}; // array criado para atualizar o tabuleiro com o navio vertical
    int naviohorizontal[1] = {3}; // array criado para atualizar o tabuleiro com o navio horizontal
    for (int n = 2; n < 5; n++) // for criado para atualizar os numeros no tabuleiro
    { // Com a intenção de mudar C7,D7 e E7, o for alterou os campos 3,4 e 5 da linha 7 para 3
        tabuleiro[n][6]= naviovertical[0];
    };
    for(int v = 1;v < 4; v++){ //Seguindo a mesma lógica, o for alterou os campos F2,F3 e F4 para 3, criando o navio horizontal
        tabuleiro[5][v] = naviohorizontal[0];
    };

  //INICIO DESAFIO AVENTUREIRO NAVIO DIAGOLNAL
    for(int d = 0; d < 1; d++){ //utilização do for para alterar os elementos das linhas e colunas
        for (int di = 0; di < 3; di++) //campo [0][0] será o primeiro a mudar, depois [1][1] e [2][2]
        {
            tabuleiro[d][di] = 3; //codigo para que onde antes fosse 0 agora se torne 3
            d++;}; // A linha e a coluna precisam aumentar em conjunto, então coloqquei o for externo para rodar apenas 1 vez, e o interno para aumentar a coluna em conjunto
        };

        for(int d = 0; d < 1; d++){ //mesma logica do for acima. 
            for (int di = 9; di > 6; di--) // dessa vez para que o barco ficasse na dioganal embaixo [9][0],[8][1],[7][2] alterei a posição inicial e fui diminuindo
            {
                tabuleiro[d][di] = 3;
                d++;};
            };
    
    
    printf("\n"); //printf para pular uma linha
    printf("Tabuleiro Atualizado com navios: \n"); // inicio da impressão do novo tabuleiro com os navios

    
    for (int c = 0; c < LINHA; c++) { // repeti o código que imprime as colunas definidas no array ' linhacoluna'
         printf("  %c", linhacoluna[c]);
        };
        printf("\n");
    
    
    for (int l = 0; l < LINHA; l++) { //repeti o codigo que imprime o número das linhas e o tabuleiro linha por linha
        printf("%d", numerolinha[l]);
        for(int j = 0; j < COLUNA; j++){
            printf("%3d", tabuleiro[j][l]);
        } // como os valores já foram alterados internamente no codigo, a repetir o código ele imprime o tabuleiro atualizado
        printf("\n"); //pular linha
    
    CONE();

    
    };
    
    
        
        
   
    
    
    
    











    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
