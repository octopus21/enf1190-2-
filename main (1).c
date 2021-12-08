/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int key = 2;
    char sifre[4] = {'a', 'i', 'l', 'e'};
    for(int i = 0; i < 4; i = i + 2) {
        sifre[i] = sifre[i] + key;
    }
    for(int j = 1; j < 4; j = j + 2) {
        sifre[j] = sifre[j] - key;
    }
    printf("%s", sifre);
   // printf("\n%s", sifre + 1);
    //printf("\n%c", sifre[0] + 1);
    
    /*
        OUTPUT
            cgnc
    */
    return 0;
}
