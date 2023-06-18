#include <stdio.h>
#include "Concatenar.h"

int main() {
    List * list1 = newList();
    List * list2 = newList();
    List * list3 = newList();

    enlist(list1, newNode(1));
    enlist(list2, newNode(2));
    enlist(list1, newNode(3));
    enlist(list2, newNode(4));


    printf("List 1\n");
    print(list1);
    printf("List 2\n");
    print(list2);

    printf("Concatenada\n");
    concatenarOrdenado(list1, list2, list3);

    print(list3);


    return 0;
}
