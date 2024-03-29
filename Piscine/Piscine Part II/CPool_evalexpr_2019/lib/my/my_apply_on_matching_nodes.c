/*
** EPITECH PROJECT, 2019
** my_apply_on_matching_nodes
** File description:
** my_apply_on_matching_nodes~
*/

#include "my.h"
#include "mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f)(void *),
void const *data_ref, int (*cmp)())
{
    while (begin) {
        if (cmp(begin->data, data_ref) == 0)
            (f)(begin->data);
        begin = begin->next;
    }
    return (0);
}
