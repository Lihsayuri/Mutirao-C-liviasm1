int process_pixel(int level, int limiarizar) {
    int new_level;

    new_level = level*limiarizar;

    if (new_level > 255){
        new_level = 255;
    }


    return new_level;
}


// É necessário que a conferência seja feita, pois quando passa de 255 ele volta para o início. Pois a máquina elimina o bit menos significativo.
// Como se fosse 0,1,2,3 ... até a 10. Só que quando chega no 10, ele elimina o 1 e fica somente o 0.