int process_pixel(int level, int limiarizar) {
    int new_level;


    if (level >= limiarizar){
        new_level = 255;
    }
    else{
        new_level = 0;
    }

    return new_level;
}