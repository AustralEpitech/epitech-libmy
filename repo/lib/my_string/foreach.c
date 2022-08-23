/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** foreach
*/

void *foreach(void *ptr)
{
    static void **save_ptr = NULL;

    if (ptr) {
        save_ptr = ptr;
    }
    if (*save_ptr) {
        ptr = *save_ptr;
        save_ptr++;
    }
    return ptr;
}
