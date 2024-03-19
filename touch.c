#include <stdio.h>
#include <stdlib.h>

void make_file(const char* filname){
    FILE* file = fopen(filname, "w");
    if(file == NULL){
        printf("Failed to make file: %s\n", filname);
        exit(1);
    }
    fclose(file);
}

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Usage: ./touch.exe <filename>\n");
        return 0;
    }

    make_file(argv[1]);
    return 0;
}
