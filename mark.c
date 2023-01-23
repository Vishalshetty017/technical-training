#include<stdio.h>
int main()
{
   int size;
   scanf("%d",&size);
   int rollno[size];
   char name[size][30];
   float marks[size][30];
   for(int i=0;i<size;i++)
    scanf("%d %s %f %f %f",&rollno[i],name[i],&marks[i][0],&marks[i][1],&marks[i][2]);
      for(int i=1;i<61;i++)
      {
          printf("*");
      }
      printf("\nrollno %-25s dsa co ade total average\n","student name");
         for(int i=1;i<61;i++)
           printf("*");
     for(int i=0;i<size;i++)
    { float total,avg;
     total=marks[i][0]+marks[i][1]+marks[i][2];
     avg=total/3;
     printf("\n%d %-25s %4.1f %4.1f %4.1f %5.1f %7.1f",rollno[i],name[i],marks[i][0],marks[i][1],marks[i][2],total,avg);}
          
}
