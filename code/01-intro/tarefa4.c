int process_pixel(int level, int limiarizar) {
    int new_level;

    new_level = level + limiarizar;
    if (new_level > 255){
        new_level = 255;
    }

    return new_level;
}
