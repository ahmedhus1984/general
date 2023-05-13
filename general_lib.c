#include "general_header.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

 char get_char(char blah[])
{
    char mychar;
    printf("%s", blah);
    scanf(" %c", &mychar);
    return mychar;
}

int get_int(char blah[])
{
    int number;
    printf("%s", blah);
    scanf(" %d", &number);
    return number;
}

long long get_lli(char blah[])
{
    long long number;
    printf("%s", blah);
    scanf("%lli", &number);
    return number;
}

float get_float(char blah[])
{
    float myfloat;
    printf("%s", blah);
    scanf("%f", &myfloat);
    return myfloat;
}

string get_string(string a)
{
  int b=get_int("enter string length: ");
  int size=b+1;
  string temp=(string)malloc(size);
  if (temp==NULL)
  {
	printf("library function fails in allocating memory for temp value.\n");
	return NULL;
  }
  string perm=(string)malloc(b+1);
  if (perm==NULL)
  {
	printf("library function fails in allocating memory for perm value.\n");
	return NULL;
  }
  printf("memory allocated for string: %d bytes\n", size);
    printf("%s", a);
  scanf("%s", temp);
  for(int i=0; i<size; i++)
  {
	*(perm+i)=*(temp+i);
  }
  free(temp);
  return perm;
}

int ilen(int p1)
{
    int a=p1;
    int b=0;
    for (int i=0; (a%10)>0; i++)
    {
        b++;
        a=a/10;
    }
    return b;
}

int llilen(long long p1)
{
    long long a=p1;
    int b=0;
    for (int i=0; (a%10)>0; i++)
    {
        b++;
        a=a/10;
    }
    return b;
}

void graceful_exit(void)
{
    int a=1;
    char b;
    while(a==1)
    {
        printf("please enter 'x' to exit program: ");
        scanf(" %c", &b);
        if (b=='x')
	  {
            a=0;
        }
    }
}

int ptrvalsz(char *a)
{
  int counter=0;
  while (*a!='\0')
  {
    counter++;
    a++;
  }
  return ++counter;
}

void file_size(string a)
{
  FILE *fp=fopen(a, "r");
  if (fp==NULL)
  {
    printf("unable to open %s, no such file\n", a);
    return;
  }
  fseek(fp, 0L, SEEK_END);
  printf("file: %s\nsize: %ld bytes\n", a, ftell(fp));
}