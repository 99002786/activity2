#include<function.h>

int main()
{
	
int num1, num2, choice;
int factin,factout,primein,primeout;

printf("[1] Add\v[2] Subtract\v[3] Multiply\v[4] Divide\v[5] Factorial\v[6] Prime Number");
scanf("%d", &choice);

switch(choice){
    
    case 1:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", add(num1,num2));
        break;
    case 2:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d ", sub(num1,num2));
        break;
    case 3:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", mul(num1,num2));
        break;
    case 4:
        printf("Enter 1st number:\n");
        scanf("%d", &num1);
        printf("Enter 2nd number:\n");
        scanf("%d", &num2);
        printf("%d", Div(num1,num2));
        break;
    case 5:
            printf("\nEnter the number to get factorial\n");
            scanf("%d",&factin);
            factout = factorial_func(factout);
            printf("The factorial is %d",factout);
            break;

     case 6:
            printf("\nEnter the number to check whether its prime number or not.\n");
            scanf("%d",&primein);
            primeout = prime_func(primeout);
            if(primeout==1)
            {
                printf("\nIt's a prime number\n");
            }
            else
            {
                printf("\nIt's not a prime number");
            }
            break;
       
    default:
        printf("That is not a valid choice.");
        break;
}

    
}
