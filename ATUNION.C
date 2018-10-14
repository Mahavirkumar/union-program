#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,k,p,flag,ch;
char A[10],B[10],c[10];
clrscr();



printf("enter the element of set A in string format:");
gets(A);
 for(i=0;A[i]!='\0';i++)
 {
  printf("%c",A[i]);
  printf("\n");
   }
printf("enter the element of set B in string format:");
gets(B);
 for(i=0;B[i]!='\0';i++)
 {
  printf("%c",B[i]);
  printf("\n");
   }
   k=0;
   for(i=0;A[i]!='\0';i++)
   {
   c[k]=A[i];
   k++;
   }
for(j=0;B[j]!='\0';j++)
{
 flag=1;
 for(i=0;A[i]!='\0';i++)
 {
  if(A[i]==B[j])
  {
  flag=0;
  break;
  }
  }
  if(flag==1)
  {
  c[k]=B[j];
  k++;
  }
  }
  p=k;
  printf("UNION  OF set A & B is {}=");
  for(k=0;k<p;k++)
  {
  printf(" %c\t",c[k]);
  }
  getch();

  }

