// include header file
#include "./headers/Decisions.h"

// write the code for the functions defined in the header file
// this function will use the comparison operators, and the if, if-else, if-else-if statements
void decisions1(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    // use if statement
    if (num<40000.0){
        printf("Num (%.2f) is less than 400000.0\n",num); //displayed
    }

    num += num;
    // use if-else statement
    if (num<40000.0){
        printf("Num (%.2f) is less than 400000.0\n",num); //not displayed
    }else{
        printf("Num (%.2f) is not less than 400000.0\n",num); //displayed
    }

    num = 0.0;
    // use if-else-if-else statement
    if (num==0.0){
        printf("Num (%.2f) is equal to 0.0\n",num); //displayed
    }else if (num<40000.0){
        printf("Num (%.2f) is less than 400000.0\n",num); //not displayed
    }else{
        printf("Num (%.2f) is not less than 400000.0 and is not equal to 0.0\n",num); //not displayed
    }
}
    /* this function will use the logical operators(&&,||,!)*/
    void decisions2(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    //use the logical AND operator
    //most conditions must be true
    if(num>0.0 && num <40000.0){
        printf("Num (%.2f) is between 0.0 and 40000.0\n",num); //displayed
    }

    //use the logical OR operator
    //only one condition must be true
    if(num>0.0 || num <40000.0){
        printf("Num (%.2f) is greater than 0.0 or less than 40000.0\n",num); //displayed
    }

    //use the logical NOT operator
    //inverses the bool value 
    if(!num>0.0 && num <40000.0){
        printf("Num (%.2f) is not between 0.0 and 40000.0\n",num); //not displayed
    }
    }
    /*this function will a the bool variable*/
    void decisions3(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    //declare a bool variable and initialize it
    bool isNotBetween = !(num>0.0 && num <40000.0); //false

    //use bool variable in an if-else statement
    if (isNotBetween){
        printf("Num (%.2f) is not between 0.0 and 40000.0\n",num); //not displayed
    }else{
        printf("Num (%.2f) is between 0.0 and 40000.0\n",num); //displayed
    }
    }
    /*this function will use the ternary operator*/
    void decisions4(void){
    // declare a variable of type float
    // initialize it using constant defined in header file
    float num = NUM;

    //declare a bool variable and initialize it
    bool isNotBetween = !(num>0.0 && num <40000.0); //false

    //declare a float and initialize it
    //using the ternary operator
    //ternary operator is the only operator with three operands
    float extra = isNotBetween ? (num - 40000.0) : 0; //operand 3 will be returned

    //display the value in extra
    printf("Extra is %.2f\n",extra); //zero will be displayed
    }
    /*this function will use a switch statement*/
    void decisions5(void){
    //declare variable
    char operation;
    int num1;
    int num2;

    //input operation
    printf("Enter operation to be performed (+,-,*,/): ");
    scanf("%c",&operation);

    //input numbers
    printf("Input first number: ");
    scanf("%d",&num1); 
    printf("Input second number: ");
    scanf("%d",&num2);

    //use switch statement to evaluate operation
    switch(operation)
    {
    case '+':
            printf("%d + %d = %d\n",num1,num2,num1+num2);
            break;
    case '-':
            printf("%d - %d = %d\n",num1,num2,num1-num2);
            break;
    case '*':
            printf("%d * %d = %d\n",num1,num2,num1*num2);
            break;
    case '/':
            printf("%d / %d = %d\n",num1,num2,num1/num2);
            break;
    default:
            printf("Invalid operation\n");
            break;
    }
    }
    /*this function will evaluate short circuit evaluation
    the compiler skips the evaluation of sub-expressions in a logical expression*/
    void decisions6(void){
        //declare variables that will be used in logical expressions
        int x = 1;
        bool y = true;

    //since x==1 is true, the second expression is evaluated
    //short circuit evaluation will not take place
        if(x==1 && y){
            printf("if block executed\n"); //displayed
        }else{
            printf("else block executed\n");
        }

    //since x==2 is false, the second expression is not evaluated
    //short circuit evaluation will take place
        if(x==2 && y){
            printf("if block executed\n"); 
        }else{
            printf("else block executed\n"); //displayed
        }

    y = false;

    //since x!=1 is false, the second expression is evaluated
    //short circuit evaluation will not take place
        if(x!=1 || y){
            printf("if block executed\n"); 
        }else{
            printf("else block executed\n"); //displayed
        }

    //since x==1 is true, the second expression is not evaluated
    //short circuit evaluation will not take place
        if(x==1 || y){
            printf("if block executed\n"); //displayed
        }else{
            printf("else block executed\n"); 
        }

    }
