#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ( "\nAddress[0] = %d\n", *address);

    printf ( "\nAddress[1] = %d\n", *(address+1));

    printf ("\n Address[2] = %d\n", *(address+2));
    // this print the first 3 elements in the array : 11, 13, 17
    // it prints what is stored in the addresses 
    // a better way in writing this part: *(address) is: address [0], address[1], address [2]
    

}