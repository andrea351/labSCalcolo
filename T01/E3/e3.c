#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char * id;
    char * value;
    struct node * next;
} node_t;

static int count = 0;

node_t* add_node(node_t* l, char* value) {
    node_t* node = malloc(sizeof(node_t));

    /*char id[16];
    sprintf(id, "ID_%d", count++);
    node->id = id;
    node->value = value;

    if (l != NULL)
        node->next = l;
   
    return node;*/
    node->id = malloc(16 * sizeof(char));
    sprintf(node->id, "ID_%d", count++);

    node->value = malloc((strlen(value) + 1) * sizeof(char));
    strcpy(node->value, value);

    if (l != NULL) node->next = l;
    else return node;

}

void print_list(node_t* head) {
    node_t* current = NULL;

    while (current != NULL) {
        printf("%s\n", current->value);
        current = current->next;
    }
}

void delete_list(node_t * head) {
    node_t* current = NULL;
    if (head != NULL) {
        node_t* current = head;
    }
    node_t* next = NULL;

    while (current != NULL) {
        /*node_t* temp = current;
        current = current->next;*/
        /*free(current);
        free(current->value);*/
        free(current->value);
        free(current->id);
        next = current->next;
        free(current);
        current = next;
        // current = current->next;
    }
}

int main() {
    node_t* l;

    l = add_node(NULL, "Hello");
    l = add_node(l, " ");
    l = add_node(l, "World");
    l = add_node(l, "!");

    print_list(l);
    delete_list(l);

    printf("Risultato 1/1\n");
    return 0;
}