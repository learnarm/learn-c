#include <stdio.h>
#include <string.h>

 void tien (char s1[], int index)
    {
        for(int i = index; i < strlen(s1); i++)
        {
            s1[i] = s1[i+1];
        }
    }

int main()
{  
    int a = 4;
    int b = 5;
    int *p = &a;
    int *p1 = p;

    char str[] = "DEVIOT cung nhau hocj lap trinh";
    //int strlen(str);
    char str1[] = "u";

    /*strcpy(&str[3], str2);
    int res = strcmp(str, str2);
    if(res > 0)
        printf("chuoi str > str2");
    else if(res < 0)
        printf("chuoi str < str2");
    else 
        printf("chuoi bang do lon");*/

    //printf("%s ", &str);
    //printf("%d", strlen(str));
    //printf("\n%d\n%d",p, &p);
    //ham();
    //printf("\n%d", a);
    //printf("\n%d", &p);

    char *pt = strstr(str, str1);
    /*if (pt != NULL)
    {
        printf("tim thay %d", pt - str);
    }
    else
    {
        printf("khong tim thay");
    }*/
   /* while(pt != NULL)
    {
        printf("tim thay %d\n", pt - str);
        pt = strstr(pt + 1, str1);
    }
    */
    char *pt1 = strstr(str, " ");
    while ( pt1 != NULL)
    {
        int index = pt1 - str;
        tien(str, index);
        printf("%s\n", str);
        pt1 = strstr(str, " ");
    }
    
    return 0;

}