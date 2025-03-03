#ifndef GNL_H
#define GNL_H

#include <stdlib.h>

char *gnl(int fd);
char *ftjoin(char *line, char *buffer, int size, int from, int to);

#endif
