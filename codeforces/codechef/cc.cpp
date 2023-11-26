#include <stdio.h> 
int main() {
    int i = 1028; 
    int *ptr = &i;
    ptr--;
    printf("%p\n", *ptr);
    return 0;
}