//include preprocessor directives
#include "./headers/Functions.h"

/*this function has 3 parameters, all having char * type
when you have a * in the type of parameter, it means the parameter is a pointer.
Pointers refer to memory locations instead of holding values. Char * means the parameters
refer to a memory location that would store a collection of characters. This is how C deals
with strings.There is no string type in C, only char * 
You could also have int *, float *,or double *
*/
void congratulate1(char*student,char*course,char*programmer){
    printf("%s has done as much as %s programming as %s\n",student,course,programmer);
    congratulate2(student,course,programmer);
}
/*this functions has 3 parameters and a local variable*/
void congratulate2(char*student,char*course,char*programmer){
    //declare and initialize a local variable by calling strlen function
    int days = strlen(programmer);
     printf("%s has done as much as %s programming as %s could fit into %d days\n",student,course,programmer,days);

}
/*this function has 1 parameter and it will have a return value.It will take a celcius
temperature, convert it to farenheit and return the farenheit temperature */
float farenheitFromCelcius(float celcius){
    //declare a local variable and initialize it uaing macro expression
    float farenheit = farenheit(celcius);
    //return value in local variable
    return farenheit;
}

