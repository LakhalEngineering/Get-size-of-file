#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>



int main(int argc, char** argv){
    char *filename = argv[1];

    struct stat sb;

    if(stat(filename, &sb) != -1)
    {
        printf("%s is %ld bytes long.\n", filename, sb.st_size);
    }
}