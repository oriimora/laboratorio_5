#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Funciones para la lista
Node* insert_at_beginning(Node *head, int data);
Node* insert_at_end(Node *head, int data);
Node* insert_at_position(Node *head, int data, int position);
Node* delete_node(Node *head, int data);
Node* search(Node *head, int data);
void print_list(Node *head);
void free_list(Node *head);

#endif
