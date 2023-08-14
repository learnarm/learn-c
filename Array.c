#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
void sort(int *array, int *number)
{
    int tempoary;
    printf("So phan tu của mang: ");
    scanf("%d", number);

    for (int i = 0; i < *number; i++)
    {
        printf("array[%d] ", i);
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < *number; i++)
    {
        for (int j = i + 1; j < *number ; j++)
        {
            if( *(array + i) > *(array + j))
            {
                tempoary = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = tempoary;
            }
        }
    }

    for (int i = 0; i < *number; i++)
    {
        printf("array[%d] %d \n", i, *(array + i));
    }
}

int laSoNguyenTo1(int n)
{
    if (n < 2)
    {
        return false;
    }       

    int squareRoot = (int) sqrt(n);
    for (int i = 2; i <= squareRoot; i++) 
    {
        if (n % i == 0) {
            return 0;
        }
    }

    return true;
}

int main()
{
    int mang[10];
    int a;
    char *pt;

    // printf("%d", sizeof(pt));
    // sort(mang, &a);


if( laSoNguyenTo1(59) == 1)
{
    printf("la so nguyen to");
}else
{
    printf("khong phai so nguyen to");
}

}