/* sizeof.c -- progrtam to tell the size of the C variable */

#include <stdio.h>

int main(void)
{
    printf("\n A char is %d byetes", sizeof( char ));
    printf("\n An int is %d bytes", sizeof( int ));
    printf("\nA short is %d bytes", sizeof( short ));
    printf("\nA long is %d bytes", sizeof( long ));
    printf("\n long long is %d bytes", sizeof( long long ));
    printf("\n An unsigned char is %d bytes", sizeof( unsigned char ));
    printf("\n An unsigned int is %d bytes", sizeof( unsigned int ));
    printf("\n An unsigned short is %d bytes", sizeof( unsigned short ));
    printf("\n An unsigned long is %d bytes", sizeof( unsigned long ));
    printf("\n An unsigned long long  is %d bytes", sizeof( unsigned long long ));
    printf("\n A float is %d bytes", sizeof( float ));
    printf("\n A double is %d bytes\n", sizeof( double ));
    printf("\n A long double is %d bytes\n", sizeof( long double ));

    return 0;

    

    
    
}