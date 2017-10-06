#include <stdio.h>
#include <string.h>
#include "string.h"
int main(){
    
    printf("Testing mystrlen:\n");
    char mystry[50] = "DW is the best CS teacher";
    printf("My string length: %d\n",mystrlen(mystry));
    printf("real string length: %lu\n", strlen(mystry));
   
    printf("\n\nTesting mystrcat: \n");
    char mystrcat1[200]="The best math teacher";
    char mystrcat2[200]= "Mr.Kats is ";
    char strcat1[200]="The best math teacher";
    char strcat2[200]="Mr.Kats is ";
    printf("source: %s\n", mystrcat1);
    printf("dest: %s\n", mystrcat2);
    
    printf("concatonation (built in/Expected): %s\n", strcat(strcat2,strcat1));
    printf("MY concatonation: %s\n", mystrcat(mystrcat2,mystrcat1));

    printf("\n\ntesting mystrncpy:\n");
    char mystrcpy1[200]="Its Monday! Noo!";
    char mystrcpy2[200]= "Its Friday! Yay!";
    char strcpy1[200]="Its Monday! Noo!";
    char strcpy2[200]="Its Friday! Yay!";
    printf("source: %s\n", mystrcpy1);
    printf("dest: %s\n", mystrcpy2);
    
    printf("ncopy (built in/Expected): %s\n", strncpy(strcpy2,strcpy1,7));
    printf("MY ncopy: %s\n", mystrncpy(mystrcpy2,mystrcpy1,7));

      printf("\n\ntesting mystrcmp:\n");
     char s1[200]= "let's search this string";
     char s2[200]= "abcdefghik";
         
     printf("strcmp (built in/Expected): %d\n", strcmp(s1,s2));
     printf("MY strcmp: %d\n", mystrcmp(s1,s2));

     printf("\n\ntesting mystrchr:\n");
     char search[200]= "let's search this string";
     char item= 's';
     printf("string to search: %s\n", search);
    
     printf("strchr (built in/Expected): %p\n", strchr(search,item));
     printf("MY strchr: %p\n", mystrchr(search,item));

    
    return 0;
}
