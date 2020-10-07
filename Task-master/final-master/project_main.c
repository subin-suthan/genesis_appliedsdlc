#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, GREATER, PRIMENUM, PRIMENUM1, EVENODD, EVENODD1, POSNEG, POSNEG1,FACTORIAL, FACTORIAL1, SQUAREAREA, SQUAREPERI, SQUARE, SQUARE1,CUBE, CUBE1, REVERSE, REVERSE1, PALINDROME, PALINDROME1,GCD, LCM, MODULUS, KILOMETERTOMETER, KILOTOCENTIMETER, KILOTOMILLIMETER, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Greater\n6. Primenum\n7. Primenum1\n8. Evenodd\n9. Evenodd\n10. Posneg\n11. Posneg1\n12. Factorial\n13. Factorial1\n14. Squarearea\n15. Squareperi\n16. Square\n17. Square1\n18. Cube\n19. Cube1\n20. Reverse\n21. Reverse1\n22. Palindrome\n23. Palindrome1\n24. gcd\n25. Lcm\n26. Modulus\n27. Kilometertometer\n28. kilotocentimeter\n29. kilotomillimeter\n30.  Exit\n");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case GREATER:
            printf("\n\t Greater %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            greater1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM:
            printf("\n\t Primenum %d =%d\nEnter to continue", 
            calculator_operand1, 
            primenum1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case PRIMENUM1:
            printf("\n\t Primenum1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            primenum11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD:
            printf("\n\t evenodd %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
          case EVENODD1:
            printf("\n\t evenodd1 %d =%d\nEnter to continue", 
            calculator_operand1, 
            evenodd11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case POSNEG:
            printf("\n\t posneg %d =%d\nEnter to continue", 
            calculator_operand1, 
            posneg1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case POSNEG1:
            printf("\n\t posneg1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            posneg11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case FACTORIAL:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_operand1, 
            factorial1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
        case FACTORIAL1:
            printf("\n\t factorial %d =%d\nEnter to continue", 
            calculator_operand2, 
            factorial11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUAREAREA:
            printf("\n\t area %d =%d\nEnter to continue", 
            calculator_operand1, 
            squarearea1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUAREPERI:
            printf("\n\t peri %d =%d\nEnter to continue", 
            calculator_operand1, 
            squareperi1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUARE:
            printf("\n\t square %d =%d\nEnter to continue", 
            calculator_operand1, 
            square1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case SQUARE1:
            printf("\n\t square %d =%d\nEnter to continue", 
            calculator_operand2, 
            square11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case CUBE:
            printf("\n\t cube %d =%d\nEnter to continue", 
            calculator_operand1, 
            cube1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case CUBE1:
            printf("\n\t cube1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            cube11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case REVERSE:
            printf("\n\t reverse %d =%d\nEnter to continue", 
            calculator_operand1, 
            reverse1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case REVERSE1:
            printf("\n\t reverse1 %d =%d\nEnter to continue", 
            calculator_operand2, 
           reverse11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case PALINDROME:
            printf("\n\t palindrome %d =%d\nEnter to continue", 
            calculator_operand1, 
           palindrome1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case PALINDROME1:
            printf("\n\t palindrome1 %d =%d\nEnter to continue", 
            calculator_operand2, 
            palindrome11(calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case GCD:
            printf("\n\t gcd =%d\nEnter to continue", 
            gcd1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case LCM:
            printf("\n\t lcm  =%d\nEnter to continue", 
            
            lcm1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case MODULUS:
            printf("\n\t modulus  =%d\nEnter to continue", 
             
            modulus1(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOMETERTOMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilometertometer1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOTOCENTIMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilotocentimeter1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            case KILOTOMILLIMETER:
            printf("\n\t km %d =%d\nEnter to continue", 
            calculator_operand1, 
            kilotomillimeter1(calculator_operand1));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case 30:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
