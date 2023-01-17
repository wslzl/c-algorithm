//
// Created by Developer on 2023/1/8.
//

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

linked_list *list_init()
{
    linked_list *list = (linked_list *)malloc(sizeof(linked_list));
    if (!list) {
        perror("list init error");
    }
    list->head = NULL;
    list->size = 0;

    list->destroy = list_destroy;
}

void list_destroy(linked_list *list)
{
    printf("Destroy");
}
