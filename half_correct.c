#include <stdio.h>
#include <stdlib.h>

 typedef struct list {
    int data;
    struct list* next_element; // this is a pointer to a struct, storing an address
} list;


int main()
{
    list first_node; // we create an instance to create the node

    first_node.data = 5; // what is stored in the first node 

    first_node.next_element = (list*) malloc(sizeof(struct list)); //allocate some space for the second node and find the adress of the next node

    printf("first_node data = %d \n", first_node.data);
   
    printf("first_node next_element address = %p \n", first_node.next_element);

    //printf("first_node data = %d \n", first_node.next_element.data);

}