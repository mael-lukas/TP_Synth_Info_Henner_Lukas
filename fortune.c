#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 128

int main() {
    char buf[BUFSIZE] = "Today is what happened to yesterday\n";
    ssize_t ret;

    ret = write(STDOUT_FILENO,buf,BUFSIZE);
    if(ret == -1){perror("error");exit(EXIT_FAILURE);}

    exit(EXIT_SUCCESS);
}