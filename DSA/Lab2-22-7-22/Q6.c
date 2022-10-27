/*Q6. Write a program in C to check whether a no is armstrong or not.*/
#include<stdio.h>

int check(int n){

    int sum=0,d,temp;
    temp=n;

    while(temp>0){
        d=temp%10;
        sum=sum+d*d*d;
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else    

        return 0;

}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int ans=check(n);
    if(ans==1)
        printf("\nIts a amstrong number");
    else    
        printf("\nIts not an amstrong number");
    return 0;
}