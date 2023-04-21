/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** readfile
*/

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

char *readfile(const char *name)
{
    int fd = open(name, O_RDONLY);
    struct stat sb;
    char *buf;

    if (!fd || stat(name, &sb)) {
        close(fd);
        return NULL;
    }
    buf = malloc((sb.st_size + 1) * sizeof *buf);
    if (!buf) {
        close(fd);
        return NULL;
    }
    read(fd, buf, sb.st_size);
    close(fd);
    buf[sb.st_size] = '\0';
    return buf;
}
