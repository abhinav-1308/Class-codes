/*1.Take one dimensional array of n numbers. Write down the C program to find out
minimum, maximum, summation and average of the element present in the array.*/

#include <stdio.h>
int main()
{
     int a[100],i,s=0,g,l,n;
     float avg;
     printf("Enter no.of Numbers:\n");
     scanf("%d",&n);
     printf("---ENTER THE NUMBERS:---\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          s=s+a[i];
          avg=s/n;
     }
     printf("Sum of Array Elements = %d\n",s);
     printf("Average of Elements = %.2f\n",avg);
     g=a[0];
     for(i=0;i<n;i++)
          if(a[i]>g)
               g=a[i];
     printf("Greatest Element = %d\n",g);
     l=a[0];
     for(i=0;i<n;i++)
          if(a[i]<l)
               l=a[i];
     printf("Lowest Element = %d",l);
     return 0;
}