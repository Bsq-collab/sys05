#include <stdio.h>
#include <string.h>

int mystrlen(char *);
char * mystrcpy( char *dest, char *source );
char * mystrncpy( char *dest, char *source,int n );
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
   
    printf("Testing mystrcat: \n");
    char mystrcat1[200]="The best math teacher";
    char mystrcat2[200]= "Mr.Kats is ";
    char strcat1[200]="The best math teacher";
    char strcat2[200]="Mr.Kats is ";
    printf("source: %s\n", mystrcat1);
    printf("dest: %s\n", mystrcat2);
    
    printf("concatonation: %s\n", strcat(strcat2,strcat1));
    printf("MY concatonation: %s\n", mystrcat(mystrcat2,mystrcat1));

    printf("testing mystrncpy:\n\n");
    char mystrcpy1[200]="Rihui";
    char mystrcpy2[200]= "Sucks ";
    char strcpy1[200]="Rihui";
    char strcpy2[200]="Sucks ";
    printf("source: %s\n", mystrcpy1);
    printf("dest: %s\n", mystrcpy2);
    
    printf("ncopy: %s\n", strncpy(strcpy2,strcpy1,2));
    printf("MY ncopy: %s\n", mystrncpy(mystrcpy2,mystrcpy1,2));

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
  int s1end= mystrlen(s1);
  int s2end= mystrlen(s2);
  int ctr=0;
  while(s1[ctr]!=0){
    if(s2[ctr]==0){
      return 1;
    }
    else if (s2[ctr]==s1[ctr]){
      ctr++;
    }
    else if(s2[ctr]>s1[ctr])
  } 
} 
