#include <stdio.h>
#include <math.h>

void nl() {
    printf("\n");
}

void print_cube(int size, int *cube);

int main() {
    int cube[27] = {
         1,  2,  3,  4,  5,  6,  7,  8,  9,
        10, 11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 23, 24, 25, 26, 27
    };

    print_cube(3, cube);
}

void print_cube(int size, int *cube) {
    int i, j, k;
    int index;
    for(i=0; i<size; i++) {
        for(j=0; j<size; j++) {
            for(k=0; k<size; k++) {
                index = (i * size * size) + (j * size) + k;
                printf("%i ", cube[index]);
            }
            nl();
        }
    }
}

