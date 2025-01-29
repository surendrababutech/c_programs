#include <stdio.h>
#include <stdlib.h>

// Global variables (Stored in Data Segment)
int global_var = 10;   // Initialized global variable
int uninitialized_var; // Uninitialized global variable (BSS Segment)

// Static variable (Stored in Data Segment)
static int static_var = 20;

// Function to demonstrate stack memory
void function() {
    int local_var = 30; // Local variable (Stored in Stack)
    printf("Address of local_var (Stack)   : %p\n", (void*)&local_var);
}

int main() {
    // Dynamic memory allocation (Stored in Heap)
    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 40;

    // String literal (Stored in Text Segment - Read-Only Section)
    char *str = "Hello, World!";

    printf("Address of function (Text Segment): %p\n", (void*)function);
    printf("Address of global_var (Data Segment): %p\n", (void*)&global_var);
    printf("Address of uninitialized_var (BSS Segment): %p\n", (void*)&uninitialized_var);
    printf("Address of static_var (Data Segment): %p\n", (void*)&static_var);
    printf("Address of heap_var (Heap) : %p\n", (void*)heap_var);
    printf("Address of str (String Literal in Text Segment) : %p\n", (void*)str);

    // Calling function to check stack memory
    function();

    // Free allocated memory
    free(heap_var);

    return 0;
}

