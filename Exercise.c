#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void translational (char *string, int index)
{
    for (int i = index; i < strlen(string); i++)
    {
        string[i] = string[i+1];
    }
    printf("%s\n", string);
}

void upper_string (char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (( *(string +i) >= 'a') && ( *(string + i) <= 'z'))
            {
                *(string + i) = *(string + i) - ('a' - 'A');
            }   
    }
}

void lower_string (char *string)
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (( *(string +i) >= 'A') && ( *(string + i) <= 'Z'))
            {
                *(string + i) = *(string + i) + ('a' - 'A');
            }   
    }
}

void upper (char *c)
{
    if (( *c >= 'A') && ( *c <= 'Z'))
        {
            *c = *c + ('a' - 'A');
        }   
}

void lower (char *c)
{
    if (( *c >= 'A') && ( *c <= 'Z'))
        {
            *c = *c + ('a' - 'A');
        }   
}
// Nhập tên vào mảng 2 chiều
void enter_name (char name[][50], int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("Enter name %d : \n", i);
        gets(name[i]);
    }
}

// Hoán vị 2 hàng trong mảng 2 chiều
void row_permutation (char name[][50], int row1, int row2)
{
    char temporary[50];
    strcpy(temporary, name[row1]);
    strcpy(name[row1], name[row2]);
    strcpy(name[row2], temporary);
}
// Sắp xếp thứ tự a - z
void sort_names (char name[][50], int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1 ; j < number; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                row_permutation(name, i, j);

            }
        }
    } 
}

// Xuat kết quả
void print_name (char name[][50], int number)
{
    for (int i = 0; i < number; i++)
    {
        printf("%s\n", name[i]);
    }
    
}


int main()
{
    
    //1. Tìm ký tự ‘t’ và trả về vị trí của nó trong chuỗi ‘Deviot.vn’
#if 0
    char string[] = "Deviot.vtn";
    char *pointer = strstr(string, "t");
    int index = 1;
    while (pointer)
    {
        printf("Vi tri t[%d]: %d\n", index++, pointer - string);
        pointer = strstr(pointer + 1, "t");
    }

#endif

    //2. Viết chương trình nhập vào 1 chuỗi và nhập vào ký tự cần tìm đồng thời trả về các vị trí của ký tự đó trong chuỗi.
#if 0
    char string[50];
    char find[50];
    char *pointer;
    gets(string);
    scanf("%s", find);
    pointer = strstr(string, find);
    int index = 1;
    
    while (pointer)
    {
        printf("Vi tri %s[%d]: %d\n", find, index++, pointer - string);
        pointer = strstr(pointer + 1, find);
    }
#endif

    //3. Cắt tham số ngày, tháng, năm ra từ chuỗi “20/03/2021” và lưu vào 3 biến ngày, tháng, năm tương ứng.
#if 0
    int date, month, year;
    int number[50];
    char day[50];
    int i = 0;
    
    scanf("%s", day);
    char *result = strtok(day, "/-");
    while (result)
    {
        number[i++] = atoi(result);
        printf("%d", number[i++]);
        result = strtok(NULL, "/-");
    }
#endif

//4. Xóa bỏ khoảng trắng trong chuỗi “Deviot hoc that lam that dao tao that” và in ra chuỗi liền.
#if 0
    char string[] = "Deviot hoc that lam that dao tao that";
    char *find = strstr(string, " ");
    
    while (find)
    {
        translational(string, find - string);
        find = strstr(string + 1, " ");
    }
    
#endif


//5. Nhập 1 chuỗi và đếm số lần xuất hiện trong chuỗi của 1 ký tự nhập từ bàn phím.
#if 0
    char string[50];
    char string1[50];
    char *find;
    int i = 0;

    gets(string);
    scanf("%s", string1);
    find = strstr(string, string1);

    while (find)
    {
        i = i+1;
        find = strstr(find + 1, string1);
    }

    printf("%d", i);
#endif

//6. Nhập vào 1 chuỗi, thay đổi các ký tự thường → ký tự hoa và ngược lại.
#if 0
    char string[50];
    gets(string);
    upper_string(string);
    printf("%s\n", string);
#endif

//7. Viết chương trình nhập vào 5 tên và sắp xếp tên theo thứ tự a-z và hiển thị ra ngoài màn hình.
#if 0
    char names[5][50];
    enter_name(names, 5);
    sort_names(names, 5);
    print_name(names, 5);
#endif
}
