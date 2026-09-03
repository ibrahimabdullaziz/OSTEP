#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <io.h>
#include <assert.h>

int main(int argc, char *argv[]) {
   
    int fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IREAD | S_IWRITE);
    assert(fd > -1);

    int rc = write(fd, "hello world\n", 12);
    assert(rc == 12);

    close(fd);

    printf("File created and written successfully!\n");
    return 0;
}