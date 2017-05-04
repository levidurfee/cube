#include <stdio.h>
#include <math.h>

void nl() {
    printf("\n");
}

void build_cube(int max, int cube[max][max][max]);

int main() {
    // cube [x] [y] [z];
    int cube[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    int numbers = {
         1,  2,  3,  4,  5,  6,  7,  8,  9,
        10, 11, 12, 13, 14, 15, 16, 17, 18,
        19, 20, 21, 22, 23, 24, 25, 26, 27
    };

    build_cube(3, cube);

}

void build_cube(int max, int cube[max][max][max]) {
    int i, j, k; // iterator
    for(i=0; i<max; i++) {
        for(j=0; j<max; j++) {
            for(k=0; k<max; k++) {
                printf("i: %i j: %i k: %i", i, j, k);
                cube[k][j][i] 
                nl();
            }
        }
    }
}

