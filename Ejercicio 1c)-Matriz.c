#include <stdio.h>

int main() {
    int tabla[4][4];
    int i;

    for (i=0; i<4; i++) {
        tabla[i][0] = i / 2;                       
        tabla[i][1] = i % 2;                        
        tabla[i][2] = tabla[i][0] && tabla[i][1];   
        tabla[i][3] = tabla[i][0] || tabla[i][1];   
    }
    printf(".--------------------------.\n");
    printf("| A | B | A AND B | A OR B |\n");
    printf(".--------------------------.\n");
    for (i=0; i<4; i++) {
        printf("| %d | %d |    %d    |   %d    |\n",
               tabla[i][0], tabla[i][1], tabla[i][2], tabla[i][3]);
    }
    printf(".--------------------------.\n");
    return 0;
}
