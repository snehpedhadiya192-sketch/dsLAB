#include <stdio.h>
int main() {
    int arr1[2][2], arr2[2][2], res[2][2], i, j;

    printf("Enter first array:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++){
        scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second array:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
        scanf("%d", &arr2[i][j]);
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
