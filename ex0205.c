#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[256];

    printf("Enter your name and press <Enter>:\n");

    //gets( buffer );

    fgets( buffer, 256, stdin );

    printf("\nYour name has %d characters and spaces!\n", strlen( buffer ));

    return 0;
}
