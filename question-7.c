/*
pattern using nested for loop in c language 

100
81 81 
64 64 64
49 49 49 49 
36 36 36 36 36 

in c language 

*/

#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", (rows - i + 1) * (rows - i + 1));
        }
        printf("\n");
    }

    return 0;
}