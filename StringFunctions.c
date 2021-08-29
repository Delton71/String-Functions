#include <stdio.h>
#include <stdlib.h>
#include "StrFunc.h"

int strlen_(const char* start);

int puts_(const char* str)
{
    for (int i = 0; strlen_(str) > i; i++)
        printf("%c", str[i]);
    return 0;
}

int getchr_(char* str, int symbol)
{
    for (int i = 0; i < strlen_(str); i++)
        if (str[i] == symbol)
            return i + 1;
        return 0;
}

int strlen_(const char* start)
{
    const char* end = start;
    while (*end != '\0')
        end++;
    return end - start;
}

int strcpy_(char *str1, const char *str2)
{
    int pos = 0;
    while('\0' != str2[pos]) // нет проверки на переполнение str1
        {
        str1[pos] = str2[pos];
        pos++;
        }
    str1[pos] = '\0';
    return 0;
}

char strncpy_(char *str1, const char *str2, size_t count)
{
    int pos = 0;
    while('\0' != str2[pos] && pos < count) // нет проверки на переполнение str1
        {
        str1[pos] = str2[pos];
        pos++;
        }
    str1[pos] = '\0';
    return *str1;
}

char* strcat_(char* str1, const char* str2)
{
    int end_of_str1 = strlen_(str1);
    int pos = 0;
    while('\0' != str2[pos]) // нет проверки на переполнение str1
        {
        str1[end_of_str1 + pos] = str2[pos];
        pos++;
        }
    str1[end_of_str1 + pos] = '\0';
    return str1;
}

char strncat_(char *str1, const char *str2, size_t count)
{
    int end_of_str1 = strlen_(str1);
    int pos = 0;
    while('\0' != str2[pos] && pos < count) // нет проверки на переполнение str1
        {
        str1[end_of_str1 + pos] = str2[pos];
        pos++;
        }
    str1[end_of_str1 + pos] = '\0';
    return *str1;
}

char* fgets_(char* str, int count, FILE* stream)
{
    int pos = 0;
    char symbol = fgetc(stream);
    while ('\n' != symbol && EOF != symbol && pos < count-1) // считывает до (count - 1)
        {
        str[pos] = symbol;
        symbol = fgetc(stream);
        pos++;
        }
    str[pos] = symbol;
    str[++pos] = '\0';
    return str;
}

char *strdup_(const char *str)
{
    char *p = calloc(strlen_(str) + 1, sizeof(char));
    if (p == NULL)
        return NULL;
    strcpy_(p, str);
    return p;
}

int getline_(char* str, size_t streamsize, const char separator) // как сделать (separator = '\n') по умолчанию
{
    char symbol;
    int count = 0;
    while(count < streamsize && (symbol = getchar()) != separator) // streamsize-1 для возможности добавления '\0'
        {
        str[count] = symbol;
        count++;
        }
    str[count] = '\0';
    return 0;
}
