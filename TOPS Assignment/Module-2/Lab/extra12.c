
#include<stdio.h>

int main() {
    int i, j;
    int matric1[2][2], matric2[2][2], sum[2][2];

    printf("Please enter your first matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element matric1[%d][%d]: ", i, j);
            scanf("%d", &matric1[i][j]);
        }
    }

    printf("Please enter your second matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter element matric2[%d][%d]: ", i, j);
            scanf("%d", &matric2[i][j]);
        }
    }

 
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matric1[i][j] + matric2[i][j];
        }
    }

   
    printf("\nThe sum of both matrices is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

