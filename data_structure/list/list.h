//
// Created by Developer on 2023/1/8.
//

#ifndef C_ALGORITHM_LIST_H
#define C_ALGORITHM_LIST_H

#include <stdio.h>

typedef struct list_node_ list_node;
typedef struct linked_list_ linked_list;

typedef struct list_node_ {
    void *data;
    struct list_node_ *next;
};

struct linked_list_ {
    list_node *head;
    size_t size;
    void (* destroy)(linked_list *);
};

linked_list *list_init();
void list_destroy(linked_list *list);
size_t list_size(linked_list *list);

#endif //C_ALGORITHM_LIST_H
