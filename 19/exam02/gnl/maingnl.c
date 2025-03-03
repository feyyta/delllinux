#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "gnl.h"
int main()
{
    int fd;
    char *line;

    fd = open("testgnl.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Erreur d'ouverture du fichier");
        return (1);
    }
    if((line = gnl(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
	}
    close(fd);
    return (0);
}
