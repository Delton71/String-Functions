#ifndef _STRING_FUNCTIONS_
#define _STRING_FUNCTIONS_

int puts_(const char* str);
int getchr_(char* str, int symbol);
int strlen_(const char* start);
int strcpy_(char *str1, const char *str2);
char strncpy_(char *str1, const char *str2, size_t count);
char* strcat_(char* str1, const char* str2);
char strncat_(char *str1, const char *str2, size_t count);
char* fgets_(char* str, int count, FILE* stream);
char *strdup_(const char *str);
int getline_(char* str, size_t streamsize, const char separator);

#endif /* _STRING_FUNCTIONS_ */