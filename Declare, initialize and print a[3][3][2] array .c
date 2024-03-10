#include <stdio.h>

int main() {
    // Declare and initialize a 3x3x2 array
    int a[3][3][2] = {
        {{7, 3}, {7, 4}, {1, 6}},
        {{7, 8}, {9, 10}, {11, 12}},
        {{16, 14}, {13, 18}, {15, 10}}
    };

    // Print the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[");
            for (int k = 0; k < 2; k++) {
                printf("%d", a[i][j][k]);
                if (k < 1) printf(", ");
            }
            printf("] ");
        }
        printf("\n");
    }

    return 0;
}


    