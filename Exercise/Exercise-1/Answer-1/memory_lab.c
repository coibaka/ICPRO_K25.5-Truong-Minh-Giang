#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cause_stack_overflow() {
    char buffer[1024]; // bi?n c?c b? l?n
    printf("Stack frame at %p\n", &buffer);
    cause_stack_overflow(); // d? quy vô h?n
}

void cause_memory_leak() {
    for (int i = 0; i < 1000000; i++) {
        int *leak = malloc(1024); // c?p phát nhung không gi?i phóng
        if (leak == NULL) {
            printf("Malloc failed at iteration %d\n", i);
            break;
        }
    }
    printf("Memory leak simulated.\n");
}

void cause_out_of_memory() {
    size_t size = 1024 * 1024 * 1024; // 1 GB
    while (1) {
        void *ptr = malloc(size);
        if (ptr == NULL) {
            perror("Out of memory");
            break;
        }
        printf("Allocated 1GB at %p\n", ptr);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s [stack_overflow | memory_leak | out_of_memory]\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "stack_overflow") == 0) {
        cause_stack_overflow();
    } else if (strcmp(argv[1], "memory_leak") == 0) {
        cause_memory_leak();
    } else if (strcmp(argv[1], "out_of_memory") == 0) {
        cause_out_of_memory();
    } else {
        printf("Unknown option: %s\n", argv[1]);
        return 1;
    }

    return 0;
}
