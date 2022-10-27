/*WAP to store n employee’s data such as employee name, gender, designation, department, basic pay. Calculate the gross pay of each employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/

#include<stdio.h>

struct employee{
char name[30];
char gender[1];
char des[40];
char dept[40];
float basePay;

};
int main(int argc, char const *argv[])
{
    int  n;
    printf("Enter the no. of employee \n");
    scanf("%d ",&n);
    struct employee arr[100];
    
    for (int i = 0; i < n; i++)
    {
        printf("gen \n");
        scanf("%c ", &arr[i].gender);

        printf("Name \n");
        scanf("%c ", &arr[i].name);

        printf("des \n");
        scanf("%c ", &arr[i].des);

        printf("dept \n");
        scanf("%c ", &arr[i].dept);

        printf("base \n");
        scanf("%d ", &arr[i].basePay);

    }

    float x,gross;
    for (int i = 0; i < n; i++)
    {
        x = arr[i].basePay;
        gross =  x + (0.25*x) + (0.75*x);
        printf("Name: %c\n", arr[i].name);
        printf("gen: %c\n", arr[i].gender);
        printf("des: %c\n", arr[i].des);
        printf("dept: %c\n", arr[i].dept);
        printf("base: %f\n", arr[i].basePay);
        printf("gross: %f\n", gross);

    }
    
    
    return 0;
}
