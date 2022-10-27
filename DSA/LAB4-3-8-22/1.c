/*WAP to store n employee’s data such as employee name, gender, designation, department, basic pay. Calculate the gross pay of each employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/

#include<stdio.h>
struct employee{
    char name[30];
    char des[20];
    int gen;
    float basic;
};
int main(){
    int n;
    printf("Enter number of employees \n");
    scanf("%d",&n);
    struct employee arr[100];
    for(int i=0;i<n;i++){
        printf("Enter %dth employee details \n",i+1);
        printf("Enter first name \n");
        scanf("%s",arr[i].name);
        printf("Enter designation \n");
        scanf("%s",arr[i].des);
        printf("Enter gender(1==F/0==M) \n");
        scanf("%d",&arr[i].gen);
        printf("Enter baisc salary \n");
        scanf("%f",&arr[i].basic);
    }
    float x,gross;
    for(int i=0;i<n;i++){
        x=arr[i].basic;
        gross=x+(x*0.25)+(x*0.75);
        printf("Name: %s\n",arr[i].name);
        printf("Designation: %s\n",arr[i].des);
        printf("Gender: %s\n",(arr[i].gen==1 ? "Female":"Male"));
        printf("Gross: %f\n",gross);
    }
}