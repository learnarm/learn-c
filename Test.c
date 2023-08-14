#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int *timSoLonNhat(int *x, int *y)
{
    if(*x > *y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void thaydoichuoi(char **chuoi)
{
    *chuoi = "Hello";
}

void capPhatConTro(uint8_t **pt)
{
    *pt = calloc(10, sizeof(uint8_t));
}
int main()
{
    /*int *result;
    int a = 11;
    int b = 15;
    result = timSoLonNhat(&a, &b);
    printf("So lon nhat = %d\r\n", *result);
    */
    char ten[20];
    //printf("nhap ten cua ban:");
    //scanf("%s", &ten);
    //printf("ten : %s", ten);
    /*int x = 100;
    int y = 100;
    if (x > y)
    {
        printf("x bang y");
    }
    */

    /*char string[50] = "Hello world";
    char *token = strtok(string, " ");
    printf("%s\n", token);
    */

    /*char str[] = "- this, a sample string";
    char *pch;
    pch = strtok(str, " ,.-");
    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok(NULL, " ,.-");
    }
    */
    /*
    char *chuoi1 = "Chuoi 1";
    char *chuoi2 = "Chuoi 2";
    thaydoichuoi(&chuoi1);
    printf("%s", chuoi1);
    */
    /*
    uint8_t *ptt;
    capPhatConTro(&ptt);
    ptt[0] = 1;
    printf("%d", ptt[0]);
    */
    /*
    char str2[] = "10/1050/65651/132151651";
    char *pointer = strtok(str2, "/");
    while(pointer) // or pointer != NULL
        {
            printf("%s\n", pointer);
            pointer = strtok(NULL, "/");
        }
    */

    // sprintf(str, "%02d/%02d/%04d", ngay, thang, nam);
    



    return 0;
}