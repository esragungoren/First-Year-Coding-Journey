#include <stdio.h>

int main()
{
    int satir, sutun;

    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &satir);

    printf("Matrisin sutun sayisini girin: ");
    scanf("%d", &sutun);

    int matris[satir][sutun];

    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("\n[%d][%d] ---> ", i + 1, j + 1);
            scanf("%d", &matris[i][j]);
        }
    }

    printf("\n\nOlusan Matris:\n");
    for (int k = 0; k < satir; k++)
    {
        for (int n = 0; n < sutun; n++)
        {
            printf("%d ", matris[k][n]);
        }
        printf("\n");
    }

    return 0;
}
