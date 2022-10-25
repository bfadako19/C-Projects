// include pre-processor directive
#include "./headers/AssignmentB.h"
/* write function for question 1 */
int genFactorial(int n){
    int x;
    for(n;repeat(n);n--){
        x = n*n;
       
    }
    printf("Factorial-Normal Variables\n");
    printf("Factorial of %d is %d\n",n,x);
}


/* write function for question 2 */
int genFactorialReference(int *n){
     int x;
    for(*n;repeat(*n);*n--){
        x = *n * *n;
       
    }
    printf("Factorial-Pointer Variables\n");
    printf("Factorial of %d is %d\n",n,x);

}