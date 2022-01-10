#include <stdio.h>

void soma(int array[], int qtd, int* total) {
    for(int i = 0; i < qtd; i++) {
        *total = *total + array[i];
    }
}

int main() {
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;

    int total = 0;
    soma(nums, 3, &total);
    printf("%d\n", total);
}