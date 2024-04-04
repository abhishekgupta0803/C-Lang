#include <stdio.h>
void printFloydsTriangle(int num) {
    int row = 1, count = 1;
    while (count <= num) {
        for (int i = 1; i <= row; i++) {
            printf("%d ", count);
            count++;
            if (count > num)
                break;
        }
        printf("\n");
        row++;
    }
}

int main() {
    int num;
    printf("Enter the number for Floyd's Triangle: ");
    scanf("%d", &num);
    printFloydsTriangle(num);
    return 0;
}
