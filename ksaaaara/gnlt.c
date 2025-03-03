#include <stdlib.h>
#include <unistd.h>

char *ftjoin(char *line,char *buffer, int size, int start, int pos)
{
	int i = 0;
	char *res;
	if(!line)
		return NULL;
	res = malloc(sizeof(char)*size +start+1);
	if(!res)
	{
		free(line);
		return NULL;
	}
	while(i < size)
	{
		res[i]= line[i];
		i++;
	}
	while(start < pos)
	{
		res[i] = buffer[start];
 		i++;
		start++;
	}
	res[i] = '\0';
	free(line);
	return res;
}

char *gnl(int fd)
{
	int size;
	int start;
	char *line = NULL;
	static int pos = 0;
	static int byterd = -1;
	static char buffer [BUFFER_SIZE];

	if(fd < 0 || BUFFER_SIZE < 1)
		return NULL;
	if(pos >= byterd)
	{
		byterd = read(fd,buffer,BUFFER_SIZE);
		pos = 0;
	}
	if(!byterd || byterd == -1)
	{
		pos = 0;
		return NULL;
	}
	line = malloc(1);
	size = 0;
	while(byterd > 0 && line);
	{
		start = pos;
		while(pos < byterd && byterd[pos] != '\n')
			pos++;
		if(pos >= byterd)
		{
			line = ftjoin(line,buffer,size,start,pos);
			byterd = read(fd,buffer,BUFFER_SIZE);
			size += (pos = start);
			pos = 0;
		}
		else if (buffer[pos] == '\n')
		{
			pos++;
			return(ftjoin(line,buffer,size,start,pos));
		}
	}
	if (byterd == -1)
	{
		if(Line)
			free(line);
		return NULL;
	}
	return line;
}
