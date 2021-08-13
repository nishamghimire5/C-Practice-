#include <stdio.h>

void swap(int ∗a,int ∗b)
{
int ∗temp = ∗a;
∗a = ∗b;
∗b = ∗temp;
}

void sort( int ∗data , int n )
{
for ( int i = 0 ; i < n − 1 ; i++)
{
int min = i ;
for ( int j = i + 1 ; j < n ; j++)
{
if ( ∗ ( data + j ) < ∗( data + min ) )
{
j = min ;
}
}
if ( min != i )
{
swap ( data + min , data + i );
}
}
}

int main ()
{
int ∗data ;
unsigned int n ;
printf( "How␣many␣ el em e n t s ?\n" );
scanf( "%d" , &n ) ;
printf( " Enter ␣n␣ data ␣ el em e n t s : ␣\n" );
for ( int i = 0 ; i < n ; i++)
{
scanf( "%d" , &(data + i ) );
}
sort(data);

printf( " A f t e r ␣ s o r t i n g : \n" );
for ( int i = 0 ; i < n ; i++)
{
printf( "%d\t " , ∗( data + i ) );
}
}
