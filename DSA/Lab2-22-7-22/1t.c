#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch(a >b && a > c){
        case 1:
        printf("A");
        case 0:
        break;
    }
        switch(b >c && b > a){
        case 1:
        printf("B");
        case 0:
        break;
        }
     switch(c >a && c > b){
        case 1:
        printf("c");
        case 0:
        break;
     }
        
    return 0;
}
