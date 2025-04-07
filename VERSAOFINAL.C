#include <stdio.h>

#define LINHA 10
#define COLUNA 10

void navios(int tabuleiro[LINHA][COLUNA]){ //void para criar a posicao dos navios, visto que o codigo de criacao dos navios se repete bastante
   
    for (int n = 2; n < 5; n++){ // criando navio na horizontal
        tabuleiro[n][6]= 3; }; // posicao da coluna muda 3 vezes alterando de 0 para 3
    for(int v = 1;v < 4; v++){  // criando navio na vertical
        tabuleiro[5][v] = 3;}; // posicao da linha muda 3 vezes alterando de 0 para 3

    for(int d = 0; d < 1; d++){  //criando navio na horizontal
        for (int di = 0; di < 3; di++) { // horizontal superior o for externo ocorre apenaas uma vez
            tabuleiro[d][di] = 3; // alterando o valor de 0 para 3
            d++;}; // a linha cresce 1 dentro do for interno, fazendo com que o campo alterado seja na diagonal
     };

     for(int d = 0; d < 1; d++){  //criando navio na horizontal
        for (int di = 9; di > 6; di--) { // horizontal inferior 
            tabuleiro[d][di] = 3; // o for externo e interno seguem a mesma logica que o navio criado no codigo acima 
            d++;};
    }; 
};

void cone(int tabuleiro[LINHA][COLUNA]){ // criacao do void para afetar areas em formato de cone

    for (int i = 0; i < LINHA; i++){  // procedimento padrao ensinado para controlar e alterar matrizes
        for (int j = 0; j < COLUNA; j++){ // for interno
            if (j == 2 && i == 2 || // utilização do if para informar ao codigo qual campo da matriz quero que altere de 0 para 1
                j == 3 && i >= 1 && i <= 3 ||
                j == 4 && i >= 0 && i <= 4) {
                tabuleiro[i][j] = 1;} // campos agora em 1 significa que foram afetadas 
            } 
        };
}

void cruz(int tabuleiro[LINHA][COLUNA]){ // criação de void para afetar areas em formato de cruz

    for (int i = 0; i < LINHA; i++){  // for interno e externo para alteracao da matriz
        for (int j = 0; j < COLUNA; j++){
            if (j >= 1 && j <= 8 && i >= 3 && i <=5 ||  // campos horizontais e diagonais que vao ser alterados usando if
                j >= 3 && j < 5 && i >= 0 && i <=9) {
                tabuleiro[i][j] = 1;} // os campos possuem agora valor de 1, mostrando que foram afetados
            }  
        };
};

void octaedro(int tabuleiro[LINHA][COLUNA]){ // criação void octaedro para afetar areas em formato de losango

    for (int i = 0; i < LINHA; i++){  // for interno e externo aninhado para alteração de matriz
        for (int j = 0; j < COLUNA; j++){
            if (i == 2 && j == 4 || // if para informar os campos que eu quero que mudem para 1
                i == 3 && j >= 3 && j <= 5 ||
                i == 4 && j >= 2 && j <= 6 ||
                i == 5 && j >= 1 && j <= 7 ||
                i == 6 && j >= 2 && j <= 6 ||
                i == 7 && j >= 3 && j <= 5 ||
                i == 8 && j == 4) {
                tabuleiro[i][j] = 1; // campos = 1 são campos afetados
                };
            };
        };
};

void areamarcada(int tabuleiro[LINHA][COLUNA]){ // criação de void para área marcada visto que esse código se repete muito
// criar o void ajudou a diminuir o numero de linhas do codigo, não sendo necessário repetir as areas possiveis de serem afetadas toda vez
    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){ // for aninhado par alteração da matriz
            if (j == 2 && i == 2 || // if para alterar os campos desejados
                j == 3 && i >= 1 && i <= 3 ||
                j == 4 && i >= 0 && i <= 4) { tabuleiro[i][j] = 7;}; // campos que serão afetados em formato de cone recebem 7
            if (j >= 1 && j <= 8 && i >= 3 && i <=5 ||  
                j >= 3 && j < 5 && i >= 0 && i <=9) { tabuleiro[i][j] = 9;}; // campos que podem ser afetados em formato de cruz recebem 9
            if (i == 2 && j == 4 ||
                i == 3 && j >= 3 && j <= 5 ||
                i == 4 && j >= 2 && j <= 6 ||
                i == 5 && j >= 1 && j <= 7 ||
                i == 6 && j >= 2 && j <= 6 ||
                i == 7 && j >= 3 && j <= 5 ||
                i == 8 && j == 4) { tabuleiro[i][j] = 5;}; // campos que podem ser afetados em formato de losango recebem 5
        }  printf("\n");
    }; // lembrando que quando são atingidos, o campo é mostrado como 1
};

void impressao(int tabuleiro[LINHA][COLUNA]){ // void para impressão do tabuleiro. Visto qque a cada alteração o tabuleiro seria reimpresso, foi melhor criar um void do que repetir o codigo sempre 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'}; // criação das letras para cada coluna
    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; // criação do numero de cada linha do campo
    
    for (int c = 0; c < LINHA; c++) {  // usando for para a impressão ser certinha de acordo com a matriz
        printf("  %c", linhacoluna[c]); };
        printf("\n");
   
   
   for (int l = 0; l < LINHA; l++) { // usando for aninhado para imprimir corretamente a matriz, as linhas  e colunas
       printf("%d", numerolinha[l]);
        for(int j = 0; j < COLUNA; j++){
           printf("%3d", tabuleiro[j][l]); }; // utilizei o %3d para dar um espaço maior entre os valores da matriz, organizando ainda mais o tabuleiro
       printf("\n"); }
};

int main (){ // chegamos no int principal
    int tabuleiro[LINHA][COLUNA]; // repetir as variaveis para que sejam aplicaveis aqui
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; 

    for ( int i = 0; i < LINHA; i++){ // iniciação do tabuleiro todo em 0 representando água
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0){
                tabuleiro[i][j] = 0;};
        }
            printf("\n");
    };

    printf("Tabuleiro Original: \n"); // printf do titulo de qual estagio do tabuleiro iremos ver na impressão
    impressao(tabuleiro); // chamando a função que imprime linhas colunas e tabuleiros

    printf("Tabuleiro destacando as partes que são afetadas por Superpoderes: \n"); //printf proximo estagio tabuleiro
    areamarcada(tabuleiro); // chamando funcao que contem as partes marcadas
    impressao(tabuleiro); // função que imprime

    printf("Tabuleiro versão áreas marcadas e navios: \n"); // printf titulo do próximo estágio
    areamarcada(tabuleiro); // função que chama as áreas marcadas 
    navios(tabuleiro); // função que cria os navios 
    impressao(tabuleiro); // função de impressões

    for ( int i = 0; i < LINHA; i++){ // criação do for e IF para declarar que o ataque que cria um Cone só será iniciado se o campo 1,1 ou B2 for escolhida
        for (int j = 0; j < COLUNA; j++){
            if (i == 1 && j == 1 && tabuleiro[i][j] == tabuleiro[1][1])
            {
                printf("Tabuleiro atingido no formato Cone: \n"); //printf estágio 
                areamarcada(tabuleiro); // função área marcada
                navios(tabuleiro); // função criação dos navios 
                cone(tabuleiro); // função que altera os campos atingidos em formato de cone para 1
                impressao(tabuleiro); // função imprime

            };};};

    for ( int i = 0; i < LINHA; i++){ /// for aninhado e if para que o ataque de Cruz só ocorra quando o campo 4,4 ou E4 seja escolhida
        for (int j = 0; j < COLUNA; j++){
                if (i == 4 && j == 4 && tabuleiro[i][j] == tabuleiro[4][4])
                {
                    printf("Tabuleiro atingido no formato Cruz: \n"); // printf titulo
                    areamarcada(tabuleiro); // função area de cada superpoder marcada
                    navios(tabuleiro); // função criação de navios
                    cruz(tabuleiro); // função mostra quais campos foram afetados, alterando os campos para 1
                    impressao(tabuleiro); // função impressão

                };};};

    for ( int i = 0; i < LINHA; i++){ // for aninhado e if para ativação do super poder no campo 5,5 ou F5
        for (int j = 0; j < COLUNA; j++){
            if (i == 5 && j == 5 && tabuleiro[i][j] == tabuleiro[5][5])
                {
                    printf("Tabuleiro atingido no formato Octaedro: \n"); // titulo 
                    areamarcada(tabuleiro); // áreas marcadas
                    navios(tabuleiro); // navios criados
                    octaedro(tabuleiro); // campos alterados para 1, formando um losango no tabuleiro
                    impressao(tabuleiro); // impressão 
                };};};


                //OBS. É perceptivel um certo atraso no codigo ao efetuar o RUN, mas acredito que seja ao grande número de 'FOR' existentes no código, como pede na atividade.
return 0;

}