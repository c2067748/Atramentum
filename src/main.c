#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

#include "config.h"

int main(int argc, char **argv) {

    if (argc <= 1) {
        printf("Usage: ...\n");
    }

    DIR *d;
    struct dirent *dir;
    d = opendir(CURRENT_DIR);
    if (d) {
        while ((dir = readdir(d)) != NULL) {
          printf("%s\n", dir->d_name);
          printf(DIR_FORMAT, dir->d_name, dir->d_name, dir->d_name, dir->d_name);
        }
        closedir(d);
    }
    return(0);
}


