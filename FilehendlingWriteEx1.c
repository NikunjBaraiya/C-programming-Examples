#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    FILE *p;
    char a[40];
    p=fopen("nikunj.txt","w");
    printf("Enter something : \n");
    // scanf("%s",a);
    // printf("%d",strlen(a));
    gets(a);
    if(p==NULL)
    {
        printf("File cannot open");
        exit(1);
    }
    for (int i=0; i<strlen(a); i++)
    {
        fputc(a[i],p);
    }
    fclose(p);
    return 0;
}

//file mode write (w)
#include<stdio.h>
#include<string.h>
int main ()
{
    char c[100];
    FILE *p;
    p=fopen("nikunj.txt","w+");
    for(int i=0; i<10; i++)
    {
    printf("Enter string : ");
    gets(c);
    if(p==NULL)
    {
        return 1;
    }
    for(int j=0; j<strlen(c); j++)
    {
    fputc(c[j],p);
    }
    }
    fclose(p);
    return 0;
}

// file mode read (r)
#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    FILE *p;
    p = fopen("Nikunj.txt", "r");
    if (p == NULL)
    {
        return 1;
    }
    c = fgetc(p);
    while (!feof(p))
    {
        printf("%c", c);
        c = fgetc(p);
    }
    fclose(p);
    return 0;
}

//file mode read (r)with fgets
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    FILE *p;
    p = fopen("nikunj.txt", "r");
    if (p == NULL)
    {
        return 1;
    }
    while(fgets(c,2,p) != NULL)
    {
        printf("%s",c);
    }
    fclose(p);
    return 0;
}

//file mode write (w)with fputs
#include<stdio.h>
#include<string.h>
int main ()
{
    // char a[]="Nikunj is a good boy";
    FILE *p;
    p= fopen("nikunj.txt","w+");
    if(p==NULL)
    {
        printf("Error");
        return 1;
    }
    fputs("How are you",p);
    // for(int i=0; i<strlen(a); i++)
    // {
    //     fputs(a[i],p);
    // }
    fclose(p);
    return 0;
}

// file mode write (w)with fwrite with binary
#include<stdio.h>
#include<string.h>
struct data
{
    char name[100];
    int age;
};
int main ()
{
  struct data d1;
  FILE *p;
  p=fopen("nik.txt","wb");
  printf("Enter your name : \n");
  fflush(stdin);
  gets(d1.name);
  printf("Enter your age : \n");
  scanf("%d",&d1.age);
  fwrite(&d1,sizeof(d1),1,p);
  fclose(p);
  return 0;
}

// file mode read (r)with fread with binary
#include<stdio.h>
#include<string.h>
struct data
{
    char name[100];
    int age;
};
int main ()
{
  struct data d1;
  FILE *p;
  p=fopen("nik.txt","rb");
  if (p==NULL)
  {
    printf("Error");
    return 1;
  }
  fread(&d1,sizeof(d1),1,p);
  printf("%s %d",d1.name,d1.age);
  fclose(p);
  return 0;
}

//file mode write (w)with fprintf
#include<stdio.h>
#include<string.h>
struct data
{
    char name[100];
    int age;
};
int main ()
{
  struct data d1;
  FILE *p;
  p=fopen("nik.txt","w");
  printf("Enter your name : \n");
  fflush(stdin);
  gets(d1.name);
  printf("Enter your age : \n");
  scanf("%d",&d1.age);
  fprintf(p,"name of student : %s, age of student : %d",d1.name,d1.age);
  fclose(p);
  return 0;
}

//file mode read (r)with fscanf
#include<stdio.h>
#include<string.h>
struct data
{
    char name[100];
    int age;
};
int main ()
{
  struct data d1;
  FILE *p;
  p=fopen("nik.txt","r");
  if(p==NULL)
  {
    printf("Error");
    return 1;
  }
  fscanf(p,"%s\n%d",d1.name,&d1.age);
  printf("%s %d",d1.name,d1.age);
  fclose(p);
  return 0;
}