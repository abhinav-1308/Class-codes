/*Q5. Write a program in C to check whether a no is palindrome or not.*/

#include<stdio.h>

int check(int n){
    int rev=0,f,x;
    x=n;
    while(x>0){
        f=x%10;
        rev=f+rev*10;
        x=x/10;
    }

    if(n==rev)
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
        printf("\nIts a palindrome");
    else    
        printf("\nNot a palindrome");
    
    return 0;
}