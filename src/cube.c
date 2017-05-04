#include <stdio.h>
#include <math.h>

void nl() {
    printf("\n");
}

void build_cube(int max, int *numbers, int cube[max][max][max]);

int main() {
    int numbers[27] = {
         1,  2,  3,  4,  5,  6,  7,  8,  9,
        10, 11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 23, 24, 25, 26, 27
    };

    int cube[3][3][3];

    build_cube(3, numbers, cube);

    printf("%i\n", cube[2][2][0]);

}

void build_cube(int max, int *numbers, int cube[max][max][max]) {
    int i, j, k, c; // iterator
    c = 0;
    for(i=0; i<max; i++) {
        for(j=0; j<max; j++) {
            for(k=0; k<max; k++) {
                printf("i: %i j: %i k: %i", i, j, k);
                cube[k][j][i] = numbers[c];
                c++;
                nl();
            }
        }
    }
}

