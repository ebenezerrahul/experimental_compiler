#include "wrapper.h"

void* myMalloc(size_t size) {
    void *new_ptr = malloc(size);
    if(new_ptr != NULL)
        return new_ptr;

    printf("Malloc Failed No free Stroage on Heap!");
    exit(1);
} 

