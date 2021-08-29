#include <stdio.h>
#include "StrFunc.h"


int main()
{
    // puts_
    puts_("puts_\n");
    char s [80] = "this is an example\n";
    puts_(s);
    puts_("\n");

    // getchr_
    puts_("getchr_\n");
    printf("%d\n", getchr_(s, 'a'));
    puts_("\n");

    // strlen_
    puts_("strlen_\n");
    printf("%d\n", strlen_(s));
    puts_("\n");

    // strcpy_
    puts_("strcpy_\n");
    char s1_cpy[80];
    strcpy_(s1_cpy, s);
    printf("%s", s1_cpy);
    puts_("\n");

    // strncpy_
    puts_("strncpy_\n");
    char str1[128] = "abcdefghijklmnopqrstuvwxyz", str2[26];
    strncpy_(str2, str1, 25);
    printf("%s\n", str2);
    puts_("\n");

    // strcat_
    puts_("strcat_\n");
    char s1_cat [80] = "hello";
    char s2_cat [80] = "there";
    strcat_(s1_cat, s2_cat);
    printf("%s\n", s1_cat);
    puts_("\n");

    // strncat_
    puts_("strncat_\n");
    char s1_ncat [80] = "hello";
    char s2_ncat [80] = "there";
    strncat_(s1_ncat, s2_ncat, 79 - strlen_(s1_ncat));
    printf("%s\n", s1_ncat);
    puts_("\n");

    // fgets_
    puts_("fgets_\n");
    char buffer[100];
    FILE * testFile = fopen("D:\\CLION\\TEST\\file.txt" , "r");
    if (testFile == NULL)
        perror("Error with open file");
    else
    {
        while (!feof(testFile))
            if (fgets_(buffer , 100 , testFile) != NULL)
                fputs(buffer, stdout);
        fclose (testFile);
    }
    puts_("\n\n");

    // strdup_
    puts_("strdup_\n");
    char str3 [80];
    strcpy_(str3, "this is a test\n");
    char* p = strdup_(str3);
    printf("%s", p);
    puts_("\n");
    //
    // getline_
    puts_("getline_\n");
    puts_("Input:");
    char str4 [50];
    getline_(str4, 20, '\n');
    printf("%s\n", str4);
    puts_("\n");

    return 0;
}