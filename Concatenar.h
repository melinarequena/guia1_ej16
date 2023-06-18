//
// Created by Administrador on 18/6/2023.
//

#ifndef GUIA1_EJ16_CONCATENAR_H
#define GUIA1_EJ16_CONCATENAR_H

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct list{
    Node * header;
}List;

Node * newNode(int data);
List * newList();
void enlist(List * list, Node * nodeInsert);
void print(List * list);
void concatenarOrdenado(List * list1, List * list2, List * list3);



#endif //GUIA1_EJ16_CONCATENAR_H
