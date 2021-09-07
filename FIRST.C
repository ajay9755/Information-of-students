#include <stdio.h>
#include <conio.h>
struct student
{
   char name[50];
   int roll;
  int marks;
};
void main()
{
   struct student s[10];
   int i;
   clrscr();
   printf("Enter information of students;\n");
   for(i=0;i<10;++i)
   {
      s[i].roll=i+1;
      printf("\nfor roll number %d\n",s[i].roll);
      printf("Enter name;");
      scanf("%s",s[i].name);
      printf("Enter marks;");
      scanf("%d",&s[i].marks);
      printf("\n");
   }
   printf("Displaying information of students;\n\n");
   for(i=0;i<10;++i)
   {
    printf("\nInformation for roll number %d;\n",i+1);
    printf("Name;");
    puts(s[i].name);
    printf("Marks; %d",s[i].marks);
   }
   getch();
}