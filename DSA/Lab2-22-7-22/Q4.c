 /*Write a program to swap the biggest and smallest no in the array.
	Example:
	Input : 4 3 0 5 9 7 3
	Output : 4 3 9 5 0 7 3*/

    #include<stdio.h>

void swap(int n[],int a){

    int max,min,temp,Maxindex,Minindex;
    max=n[0];
    min=n[a-1];
    for (int i = 0; i < a; i++)
    {
        if(n[i]>max){
            max=n[i];
            Maxindex=i;
            }
        if(n[i]<min)
        {
            min=n[i];
            Minindex=i;

        }
            
    }
    

    temp=n[Maxindex];
    n[Maxindex]=n[Minindex];
    n[Minindex]=temp;
    

    for (int i = 0; i < 7; i++)
    {
        printf("%d",n[i]);
        
    }
}

int main()
{
    int n[7];
    for (int i = 0; i < 7; i++)
    {
        printf("\nenter element at index %d: ",i);
        scanf("%d",&n[i]);
    }

    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        printf("%d",n[i]);
        
    }

    printf("\nAfter Swap: \n");

    swap(n,5);

    
    
    return 0;
}