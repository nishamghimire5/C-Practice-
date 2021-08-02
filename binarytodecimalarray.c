#include <stdio.h>
#include <math.h>

int todecimal(char binary[],int length){
    int decimal = 0;
    for (int i = length - 1; i >= 0; --i){
        if (binary [i] == '1')
            decimal += pow (2, i);
    }
    return decimal;
}

void main ()
{
    char binary [20];
    int x;
    printf ("Input the binary number:  "); //take binary num as string
    scanf ("%s", binary);

    int length = 0;
    while (binary [length] != '\0')  //calculate binary num length
    ++length;

    x = todecimal(binary, length);
    printf ("%s to decimal = %d\n",binary,x);
}