#include <fcntl.h>
#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
    int fd;
    int result;
    char *line;

    if (ac != 2)
        return (0);
    if ((fd = open(av[1], O_RDONLY)) == -1)
        return (0);
    while ((result = get_next_line(fd, &line)))
    {
        if (result == -1)
        {
            free(line);
            return (0);
        }
        free(line);
    }
    return (0);
}
