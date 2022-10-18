//include preprocessor directive
#include <stdio.h>

//declare two global static variables
static int i = 17;
static double j = 17.55;
//declare functions
void printAddress(void);
int *getAddress(void);
int getDataAtAddress(void);
double storeDataAddress(void);
int getDoubleBytes(void);
int getPointertoDoubleBytes(void);
void pointerToNull(void);