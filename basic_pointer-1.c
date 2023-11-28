#include <stdio.h>

int main()
{
    int var=10;

    int* var_address=&var;
    // define a variable and the & var stores the address of the variable + it identifies the data type of the var
    printf("\n");
    printf("The content of \"var\" = %d\n",var);
    // print the content of the variable and the content of the address of the variable 
    printf ("The content \"var_address\" = %p\n", var_address);

    printf ("Now the magic ! Content of \"*var_address\" = %d\n", *var_address);
    
    printf("\n");
}