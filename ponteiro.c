#include <stdio.h>

void calcula(int num1, int num2, int* resultado) {
    *resultado = num1 + num2;
}

int main() {
    int a, b;
     int num = 0;

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    calcula(a, b, &num);

    printf("%d\n", num);
}