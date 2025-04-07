#include <stdio.h>

#define LINHA 10
#define COLUNA 10

void CONE(){ 
    int tabuleiro[LINHA][COLUNA]; 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; 

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0){
                tabuleiro[i][j] = 0;};
        }
            printf("\n");
    };

    for (int i = 0; i < LINHA; i++){ 
        for (int j = 0; j < COLUNA; j++){
    if (j >= 1 && j <= 8 && i >= 3 && i <=5 ||  
        j >= 3 && j < 5 && i >= 0 && i <=9||
        j == 2 && i == 4 ||
        j == 3 && i >= 3 && i <= 5 ||
        j == 4 && i >= 2 && i <= 6 ||
        j == 5 && i >= 1 && i <= 7 ||
        j == 6 && i >= 2 && i <= 6 ||
        j == 7 && i >= 3 && i <= 5 ||                   
        j == 8 && i == 4) {
        tabuleiro[i][j] = 5;};
        };
    };

    for (int n = 2; n < 5; n++){ 
        tabuleiro[n][6]= 3; };
    for(int v = 1;v < 4; v++){ 
        tabuleiro[5][v] = 3;};

    for(int d = 0; d < 1; d++){ 
        for (int di = 0; di < 3; di++) {
            tabuleiro[d][di] = 3; 
            d++;}; 
     };

     for(int d = 0; d < 1; d++){  
        for (int di = 9; di > 6; di--) {
            tabuleiro[d][di] = 3;
            d++;};
    };

    for (int i = 0; i < LINHA; i++){ 
        for (int j = 0; j < COLUNA; j++){
            if (j == 2 && i == 2 || 
                j == 3 && i >= 1 && i <= 3 ||
                j == 4 && i >= 0 && i <= 4) {
                tabuleiro[i][j] = 1;}
            } 
        } 

    for (int c = 0; c < LINHA; c++) { 
        printf("  %c", linhacoluna[c]); };
        printf("\n");
   
   
   for (int l = 0; l < LINHA; l++) { 
       printf("%d", numerolinha[l]);
        for(int j = 0; j < COLUNA; j++){
           printf("%3d", tabuleiro[j][l]); };
       printf("\n"); }
};

void cruz(){ 
    int tabuleiro[LINHA][COLUNA]; 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; 

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0){
                tabuleiro[i][j] = 0;};
        }
            printf("\n");
    };

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (j == 2 && i == 2 ||
                j == 3 && i >= 1 && i <= 3 ||
                j == 4 && i >= 0 && i <= 4 ||
                j == 2 && i == 4 ||
                j == 3 && i >= 3 && i <= 5 ||
                j == 4 && i >= 2 && i <= 6 ||
                j == 5 && i >= 1 && i <= 7 ||
                j == 6 && i >= 2 && i <= 6 ||
                j == 7 && i >= 3 && i <= 5 ||                   
                j == 8 && i == 4) {
                tabuleiro[i][j] = 5;};
        }  printf("\n");
    };

    for (int n = 2; n < 5; n++){ 
        tabuleiro[n][6]= 3; };
    for(int v = 1;v < 4; v++){ 
        tabuleiro[5][v] = 3;};

    for(int d = 0; d < 1; d++){ 
        for (int di = 0; di < 3; di++) {
            tabuleiro[d][di] = 3; 
            d++;}; 
     };

     for(int d = 0; d < 1; d++){  
        for (int di = 9; di > 6; di--) {
            tabuleiro[d][di] = 3;
            d++;};
    };
    
    for (int i = 0; i < LINHA; i++){ 
        for (int j = 0; j < COLUNA; j++){
            if (j >= 1 && j <= 8 && i >= 3 && i <=5 ||  
                j >= 3 && j < 5 && i >= 0 && i <=9) {
                tabuleiro[i][j] = 1;}
            }  
        };

        printf("\n"); 

        for (int c = 0; c < LINHA; c++) { 
            printf("  %c", linhacoluna[c]); };
            printf("\n");
       
       
       for (int l = 0; l < LINHA; l++) { 
           printf("%d", numerolinha[l]);
            for(int j = 0; j < COLUNA; j++){
               printf("%3d", tabuleiro[j][l]); };
           printf("\n"); }
};

void octaedro(){ 
    int tabuleiro[LINHA][COLUNA]; 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'};
    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; 

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0){
                tabuleiro[i][j] = 0;};
        }
            printf("\n");
    };
    
    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (j == 2 && i == 2 ||
                j == 3 && i >= 1 && i <= 3 ||
                j == 4 && i >= 0 && i <= 4 ||
                j >= 1 && j <= 8 && i >= 3 && i <=5 ||  
                j >= 3 && j < 5 && i >= 0 && i <=9) {
                tabuleiro[i][j] = 5;};
        }  printf("\n");
    };

    for (int n = 2; n < 5; n++){ 
        tabuleiro[n][6]= 3; };
    for(int v = 1;v < 4; v++){ 
        tabuleiro[5][v] = 3;};

    for(int d = 0; d < 1; d++){ 
        for (int di = 0; di < 3; di++) {
            tabuleiro[d][di] = 3; 
            d++;}; 
     };

     for(int d = 0; d < 1; d++){  
        for (int di = 9; di > 6; di--) {
            tabuleiro[d][di] = 3;
            d++;};
    };

    for (int i = 0; i < LINHA; i++){ 
        for (int j = 0; j < COLUNA; j++){
            if (i == 2 && j == 4 ||
                i == 3 && j >= 3 && j <= 5 ||
                i == 4 && j >= 2 && j <= 6 ||
                i == 5 && j >= 1 && j <= 7 ||
                i == 6 && j >= 2 && j <= 6 ||
                i == 7 && j >= 3 && j <= 5 ||
                i == 8 && j == 4) {
                tabuleiro[i][j] = 1;
                }
            } 
        }

        printf("\n"); 

        for (int c = 0; c < LINHA; c++) { 
            printf("  %c", linhacoluna[c]); };
            printf("\n");
       
       
       for (int l = 0; l < LINHA; l++) { 
           printf("%d", numerolinha[l]);
            for(int j = 0; j < COLUNA; j++){
               printf("%3d", tabuleiro[j][l]); };
           printf("\n"); }
}


int main(){
    int tabuleiro[LINHA][COLUNA];

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
           if (tabuleiro[i][j] != 0){
                tabuleiro[i][j] = 0;};
        }
            printf("\n");
    };

    printf("         Tabuleiro: \n"); 
    char linhacoluna[COLUNA] = {'A','B','C','D','E','F','G','H','I','J'}; 
        for (int c = 0; c < COLUNA; c++) { 
         printf("  %c", linhacoluna[c]); };
         printf("\n");
         

    int numerolinha[LINHA] = {0,1,2,3,4,5,6,7,8,9}; 
        for (int l = 0; l < LINHA; l++) { 
        printf("%d", numerolinha[l]);
        for(int j = 0; j < LINHA; j++){ 
            printf("%3d", tabuleiro[j][l]); }
        printf("\n"); 
    };

    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (i == 2 && j == 2 ||
                i == 3 && j >= 1 && j <= 3 ||
                i == 4 && j >= 0 && j <= 4 ||
                i >= 2 && i <= 8 && j >= 2 && j <=7 || 
                i >= 3 && i < 5 && j >= 0 && j <=9||
                i == 2 && j == 4 ||
                i == 3 && j >= 3 && j <= 5 ||
                i == 4 && j >= 2 && j <= 6 ||
                i == 5 && j >= 1 && j <= 7 ||
                i == 6 && j >= 2 && j <= 6 ||
                i == 7 && j >= 3 && j <= 5 ||                   
                i == 8 && j == 4) {
                tabuleiro[i][j] = 5;};
        }  printf("\n");
    };

    printf("Tabuleiro após mudanças para identificar as partes que serão possivelmente atingidas\n");

    for (int c = 0; c < LINHA; c++) { 
        printf("  %c", linhacoluna[c]); };
        printf("\n");
   
   
   for (int l = 0; l < LINHA; l++) { 
       printf("%d", numerolinha[l]);
        for(int j = 0; j < COLUNA; j++){
           printf("%3d", tabuleiro[j][l]); };
       printf("\n"); }

    for (int n = 2; n < 5; n++){ 
        tabuleiro[n][6]= 3; };
    for(int v = 1;v < 4; v++){ 
        tabuleiro[5][v] = 3;};

    for(int d = 0; d < 1; d++){ 
        for (int di = 0; di < 3; di++) {
            tabuleiro[d][di] = 3; 
            d++;}; 
     };

     for(int d = 0; d < 1; d++){  
        for (int di = 9; di > 6; di--) {
            tabuleiro[d][di] = 3;
            d++;};
    };

    printf("\n"); 
    printf("Tabuleiro Atualizado com navios: \n"); 

    for (int c = 0; c < LINHA; c++) { 
        printf("  %c", linhacoluna[c]); };
       
        printf("\n");
   
   
   for (int l = 0; l < LINHA; l++) { 
       printf("%d", numerolinha[l]);
        for(int j = 0; j < COLUNA; j++){
           printf("%3d", tabuleiro[j][l]); };
       printf("\n"); 
};

    printf("Agora veremos como ficaria o tabuleiro caso o campo [1][1] seja acertado. As áreas atingidas formarão um Cone \n");
    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (tabuleiro[i][j] == tabuleiro[1][1])
            {
                CONE();
            };
            break;
        };
    };

        printf("Agora veremos como ficaria o tabuleiro caso o campo [1][1] seja acertado. As áreas atingidas formarão uma Cruz \n");
    
    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
                if (i == 4 && j == 4 && tabuleiro[i][j] == tabuleiro[4][4])
                {
                    cruz();
                };
    
            };
        };

            printf("Agora veremos como ficaria o tabuleiro caso o campo [1][1] seja acertado. As áreas atingidas formarão um losango (octaedro) \n");
    
    for ( int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (i == 5 && j == 5 && tabuleiro[i][j] == tabuleiro[5][5])
                {
                     octaedro();

                    
                 };
                   
        };
    
    };
    

}