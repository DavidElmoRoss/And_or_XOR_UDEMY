/*
Program that uses AND/OR/XOR
*/

#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{
    char a,b,c,d,e;
   a = 0b10111110;
   b = 0b11101101;
   c = a & b ;
   d = a | b ;
   e = c ^ d ;
  
   printf("a=%X\tb=%X\tc=%X\td=%X\te=%C",a,b,c,d,e);
   for(;;);

}

