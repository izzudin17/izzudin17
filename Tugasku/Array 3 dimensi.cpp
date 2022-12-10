#include <stdio.h>

int main() {
    int x[2][3] = {{1, 2, 3}, {4, 5, 6}}; // insialisasi  data
    int i, j;

    for (i=0; i<2; i++) { // for yang pertama
        for (j=0; j<3; j++) { // for yang kedua
            printf("%d ", x[i][j]); // mencetak isi array
        }
        printf("\n"); // mencetak enter pada baris terakhir.
    }
    return 0;
}

