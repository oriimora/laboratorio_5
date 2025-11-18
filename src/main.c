#include <stdio.h>
#include "../include/lista.h"

int main() {
    Node *head = NULL;

    printf("Insertando al inicio:\n");
    head = insert_at_beginning(head, 10);
    head = insert_at_beginning(head, 20);
    print_list(head);

    printf("\nInsertando al final:\n");
    head = insert_at_end(head, 30);
    head = insert_at_end(head, 40);
    print_list(head);

    printf("\nInsertar en posicion específica (pos 2):\n");
    head = insert_at_position(head, 25, 2);
    print_list(head);

    printf("\nEliminando el elemento 30:\n");
    head = delete_node(head, 30);
    print_list(head);

    printf("\nBuscando el elemento 25:\n");
    Node *found = search(head, 25);
    if (found != NULL)
        printf("Elemento 25 encontrado!\n");
    else
        printf("No se encontró.\n");

    // Liberar memoria
    free_list(head);

    return 0;
}
