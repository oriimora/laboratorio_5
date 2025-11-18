#include <stdio.h>
#include <stdlib.h>
#include "../include/lista.h"

// Insertar al inicio
Node* insert_at_beginning(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Insertar al final
Node* insert_at_end(Node *head, int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) return newNode;

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Insertar en posición específica (0 = inicio)
Node* insert_at_position(Node *head, int data, int position) {
    if (position == 0)
        return insert_at_beginning(head, data);

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    Node *temp = head;

    for (int i = 0; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Posición fuera de rango, insertando al final.\n");
        return insert_at_end(head, data);
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Eliminar nodo por valor
Node* delete_node(Node *head, int data) {
    if (head == NULL) return NULL;

    if (head->data == data) {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *current = head;
    while (current->next != NULL && current->next->data != data)
        current = current->next;

    if (current->next != NULL) {
        Node *temp = current->next;
        current->next = temp->next;
        free(temp);
    }

    return head;
}

// Buscar nodo
Node* search(Node *head, int data) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp->data == data)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Imprimir lista
void print_list(Node *head) {
    Node *temp = head;
    printf("Lista: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Liberar memoria
void free_list(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
