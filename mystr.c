#include <stdio.h>
#include <string.h>
#include "string.h"
int mystrlen(char * str){
    
    int ctr = 0;
    
    while(*str){
        ctr+=1;
        str++;
        
    }
    
    return ctr;
}
char * mystrncpy( char *dest, char *source, int n ){
  int ctr=0;
  while (n>ctr){
    dest[ctr]= source[ctr];
    ctr++;
  }
  return dest;
}
char * mystrcat( char *dest, char *source ){
    
    int lenctr = mystrlen(dest);
    int srcctr = 0;
    
    while (*source){
        dest[lenctr] = source[srcctr];
	source++;
	lenctr++;
    }
    return dest;
    
}

int mystrcmp( char *s1, char *s2){
  int ctr=0;
  while(s1[ctr]){
    if(s2[ctr]==0){
      return s2[ctr]-s1[ctr];
    }
    else if (s2[ctr]==s1[ctr]){
      ctr++;
    }
    else{
      return s2[ctr]-s1[ctr];
    }}}

char * mystrchr(char *s, char c){
  int ctr=0;
  while (ctr<mystrlen(s)){
    if(s[ctr]== c){
      return &s[ctr];
    }
    ctr+=1;
  }
  return NULL;
    
}
