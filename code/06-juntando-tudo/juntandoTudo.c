#include <stdio.h>
#include <stdlib.h>

// global
int img[640][480];



typedef struct {
    char tipo[32]; 
    int largura;
    int altura;
    int luminosidade; 
    long matriz[640][480];
} imagem;

typedef struct {
    int x;
    int y;
} ponto;


void le_imagem(int mat[640][480], imagem *imagemp){
    // imagem image;
    char str[32];
    int width;
    int height;
    int brightness;
    scanf("%s", (*imagemp).tipo);
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%d", &brightness);

    (*imagemp).altura = height;
    (*imagemp).largura = width;
    (*imagemp).luminosidade = brightness;

}

void escreve_imagem(int mat[640][480], imagem *imagemp){
    char str[32];
    // printf("%s\n", (*imagemp).tipo);
    // printf("%d ", (*imagemp).largura);
    // printf("%d\n", (*imagemp).altura);
    // printf("%d\n", (*imagemp).luminosidade);

    for (int i = 0; i < (*imagemp).altura; i++){
        for(int j = 0;  j < (*imagemp).largura; j++){
            scanf("%d", &mat[i][j]);
            // printf("%d ", mat[i][j]);
        } 
        // printf("\n");
    }

    for (int i = 0; i < 640; i++){
        for (int j = 0; j < 480; j++){
            (*imagemp).matriz[i][j] = mat[i][j];
        }
    }

}

void limiarizar(imagem *imagemp){
    printf("%s\n", (*imagemp).tipo);
    printf("%d ", (*imagemp).largura);
    printf("%d\n", (*imagemp).altura);
    printf("%d\n", (*imagemp).luminosidade);

    for (int i = 0; i < (*imagemp).altura; ++i){
        for (int j = 0; j < (*imagemp).largura; ++j){
            if ((*imagemp).matriz[i][j] > 127){
                (*imagemp).matriz[i][j] = 255;
                printf("%d ", (*imagemp).matriz[i][j]);
            } else{
                (*imagemp).matriz[i][j] = 0;
                printf("%d ", (*imagemp).matriz[i][j]);
            }
        }
    }
}

void crop(imagem *imagemp, imagem *crop, ponto p1, ponto p2){
    (*crop).altura = p2.y - p1.y;
    (*crop).largura = p2.x - p1.x;
    (*crop).luminosidade = (*imagemp).luminosidade;
    // (*crop).tipo[32] = "P2";

    printf("%s\n", "P2");
    printf("%d ", (*crop).largura);
    printf("%d\n", (*crop).altura);
    printf("%d\n", (*crop).luminosidade);

    for (int i = 0; i < (*crop).altura; i ++){
        for (int j = 0; j < (*crop).largura; j++){
            (*crop).matriz[i][j] = (*imagemp).matriz[p1.x + i][p1.y + j];
            printf("%ld ", (*crop).matriz[i][j]);
        }
    }

}

int modulo(int num){
    int new_num;
    if (num < 0){
        new_num = -1*num;
    }
    else{
        new_num = num;
    }
    return new_num;
}


void blur(imagem *imagemp, imagem *blur){
    (*blur).altura = (*imagemp).altura;
    (*blur).largura = (*imagemp).largura;
    (*blur).luminosidade = (*imagemp).luminosidade;
    
    printf("%s\n", "P2");
    printf("%d ", (*blur).largura);
    printf("%d\n", (*blur).altura);
    printf("%d\n", (*blur).luminosidade);

    for (int i = 0; i < ((*blur).altura); i ++){
        for (int j = 0; j < ((*blur).largura); j++){
            if (i == 0 || j == 0 || i == (*blur).altura-1 || j == (*blur).largura-1){
                (*blur).matriz[i][j] = (*imagemp).matriz[i][j];
            } else{
                (*blur).matriz[i][j] = ((*imagemp).matriz[i][j] + (*imagemp).matriz[i][j-1] + (*imagemp).matriz[i][j+1] + (*imagemp).matriz[i-1][j] 
                + (*imagemp).matriz[i+1][j] + (*imagemp).matriz[i-1][j-1] + (*imagemp).matriz[i-1][j+1] + (*imagemp).matriz[i+1][j-1]
                + (*imagemp).matriz[i+1][j+1])/9;
            }  
            printf("%ld ", (*blur).matriz[i][j]);

        }
    }
}

void bordaContorno(imagem *imagemp, imagem *borda){
    (*borda).altura = (*imagemp).altura;
    (*borda).largura = (*imagemp).largura;
    (*borda).luminosidade = (*imagemp).luminosidade;
    
    printf("%s\n", "P2");
    printf("%d ", (*borda).largura);
    printf("%d\n", (*borda).altura);
    printf("%d\n", (*borda).luminosidade);

    for (int i = 0; i < ((*borda).altura); i ++){
        for (int j = 0; j < ((*borda).largura); j++){
            (*borda).matriz[i][j] = modulo(4*((*imagemp).matriz[i][j]) - ((*imagemp).matriz[i][j-1] + (*imagemp).matriz[i][j+1] + (*imagemp).matriz[i-1][j] 
                + (*imagemp).matriz[i+1][j]));
            
            printf("%ld ", (*borda).matriz[i][j]);
        }
    }
}


int main(){

    imagem *imagemp;
    imagem *cropp;
    imagem *blurp;
    imagem *borda;

    imagem imagemProperties;
    imagem croppProperties;
    imagem blurProperties;
    imagem bordaProperties;

    ponto p1;
    ponto p2;
    
    p1.x = 20;
    p1.y = 30;
    p2.x = 60; 
    p2.y = 62;

    imagemp = &imagemProperties; 
    cropp = &croppProperties;
    blurp = &blurProperties;
    borda = &bordaProperties;

 //   le_imagem(&img[0][0]);

    le_imagem(img, imagemp);
    escreve_imagem(img, imagemp);
    // limiarizar(imagemp);
    // crop(imagemp, cropp, p1, p2);
    // blur(imagemp, blurp);
    bordaContorno(imagemp, borda);


}