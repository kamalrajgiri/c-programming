 // arithematic operation
#include<stdio.h>
#include<conio.h>
int main () 
{
    char ch ;
    int a,b,c ;
    printf("enter two operands");
    scanf("%d,%d", &a,&b);
    printf("\n enter an arithmetic operand to perform operation" );
    scanf(" %c", &ch);
    fflush(stdin);
    ch = getchar ();
    switch (ch)
    {
        case '+': c=a+b;
        printf("\n addition = %d",c);
        break;
        case '-': c=a-b;
        printf("\n subtraction = %d",c);
        break ;
        case '*' : c=a*b ;
        printf("\n multiplication = %d",c);
        break ;
        case '/' : c=a/b ;
        printf(" \n divison = %d",c);
        break ;
        default : printf(" \n invalid operator");
    }
      return 0; 
}