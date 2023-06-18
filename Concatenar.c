//
// Created by Administrador on 18/6/2023.
//

#include "Concatenar.h"
#include <stdio.h>
#include <stdlib.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }else{
        aux->data = data;
        aux->next = NULL;
        return aux;
    }
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }else{
        aux->header = NULL;
        return aux;
    }


}

void enlist(List *list, Node * nodeInsert) {
    if(list->header == NULL){
        list->header = nodeInsert;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodeInsert;
    }
}

void print(List *list) {
    if (list->header == NULL){
        printf("Empty list\n");
    }else{
        Node * aux = list->header;
        while(aux != NULL){
            printf("%d -> ", aux->data);
            aux = aux->next;
        }
        printf("NULL\n");
    }
}

/*void concatenarOrdenado(List *list1, List *list2, List * list3) {
    Node *aux1 = list1->header;
    Node *aux2 = list2->header;
    while(aux1 != NULL || aux2 != NULL){
        if(list3->header == NULL){
            if(aux1-> data < aux2->data){
                aux1->next = list3->header;
                list3->header = aux1;
                aux1 = aux1->next;
            }else{
                if(aux1->data > aux2->data){
                    list3->header = aux2;
                    aux2 = aux2->next;
                }else{
                    list3->header = aux1;
                    aux1 = aux1->next;
                    aux2 = aux2->next;
                }
            }
        }else{
            Node * aux3 = list3->header;
            Node * ant3 = aux3;
            while(aux3 != NULL){
                while(aux3->data < aux1->data || aux3->data < aux2->data){
                    ant3 = aux3;
                    aux3 = aux3->next;
                }
                if(aux1->data < aux3->data){
                    aux1->next = aux3;
                    ant3->next = aux1;
                    aux1 = aux1->next;
                }else{
                    if(aux2->data < aux3->data){
                        aux2->next = aux3;
                        ant3->next = aux2;
                        aux2 = aux2->next;
                    }
                }
            }
        }
    }

}
 */