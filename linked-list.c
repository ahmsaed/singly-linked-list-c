#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int main(void){
    struct Node *nodeOne = malloc(sizeof(struct Node));
    struct Node *nodeTwo = malloc(sizeof(struct Node));
    nodeOne->value = 3;
    nodeOne->next = nodeTwo;
    nodeTwo->value = 5;
    nodeTwo->next=NULL;
    free(nodeOne);
    free(nodeTwo);
    return 0;
}
