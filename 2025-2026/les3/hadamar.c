#include <stdio.h>

#define N 3

int main(void)
{

    // twee arrays element gewijs vermenigvuldigen
    //  3 parameters: 2 arrays, 1 resultaat array
    //  N floats -> N is const

    int arr1[N] = {1, 2, 3};
    int arr2[N] = {4, 5, 6};
    // int resul[N] = {4,10,18}
    int resul[N];
    for (int x = 0; x < N; x++)
    {
        resul[x] = arr1[x] * arr2[x];
        printf("%d ", resul[x]);
    }

    return 0;
}