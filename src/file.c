#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "include/file.h"

char* filecontent(char* filename) {
    FILE *fp;
    static char str[3];
    static char text[5000];
    
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Couldn't open file %s\n", filename);
        return 1;
    }

    while (fgets(str, 10, fp) != NULL)
        int i = 1;
        i++;
        strncpy(text, str, i);
    fclose(fp);

    return text;
}