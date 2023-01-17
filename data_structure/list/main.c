//
// Created by Developer on 2023/1/8.
//

#include <stdio.h>
#include "list.h"



int main() {
    printf("Hello, World!\n");

    linked_list *list= list_init();
    list->destroy(list);

    return 0;
}