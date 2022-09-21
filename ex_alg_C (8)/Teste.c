#include <stdio.h>

int main ()
{
    int A[4][2] = 
    {
        {-1, 6}, 
        {4, 0}, 
        {2, -3}, 
        {7, 8}
    };
    int B[2][3] =
    {
        {5, 3, -4},
        {-2, 6, 4}
    };
    int C[4][3]; // C vai ter linhas N de a, e colunas N de b;

    // c[0][0] tem que ser igual á = -1 * 5 + 6 * -2 = -17;
    // c[0][1] tem que ser igual á = -1 * 3 + 6 * 6  = 33;
    // c[0][2] tem que ser igual á = -1 * -4 + 6 * 4  = 28;
    // c[1][0] tem que ser igual á = 4 * 5 + 0 * -2  = 20;



    int i3, i2, i = i2 = i3 = 0; //igualando iniciadores a 0;
    int chouse = 0;

    for (; i < 4; i++) //pega linhas de A;
    {
        int AtualA1 = A[i][0];
        int AtualA2 = A[i][1];
        for (i3 = 0; i3 < 3; i3++)
        {
            int AtualB1 = B[0][i3];
            int AtualB2 = B[1][i3];
            C[i][chouse++] = AtualA1 * AtualB1 + AtualB2 * AtualA2; //inclementa chouse após o uso
            chouse%=3; //evita que chouse passe a coluna 2;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (i2 = 0; i2 < 3; i2++)
        {
            printf ("%3d ", C[i][i2]);
        }
        printf("\n");
    }
}