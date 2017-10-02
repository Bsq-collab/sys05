
#include <stdio.h>
#include <string.h>

int mystrlen(char *);
char * mystrcpy( char *dest, char *source );
char * mystrncpy( char *dest, char *source );
char * mystrcat( char *dest, char *source);
char * mystrncat( char *dest, char *source);
int mystrcmp( char *s1, char *s2);
char *mystrchr( char *s, char c);

char * mystrstr( char *s1, char *s2);

int main(){
    
    printf("Testing mystrlen:\n");
    char mystry[50] = "DW is the best CS teacher";
    printf("My string length: %d\n",mystrlen(mystry));
    printf("real string length: %d\n ", strlen(mystry));
    
    printf("Testing mystrcpy:\n");
    
    return 0;
}

int mystrlen(char * str){
    
    int ctr = 0;
    
    while(*str){
        ctr+=1;
        str++;
        
    }
    
    return ctr;
}

char * mystrcat( char *dest, char *source ){
    
    int lenctr = mystlen(dest);
    int srcctr = 0;
    
    while (*source){
        dest[lenctr] = source[srcctr];
    }
    return dest;
    
}

