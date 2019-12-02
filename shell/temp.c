#include <stdio.h>
int a ,b ,c =0;
void Fun_at_Google(void);
main ( )
{
      static int a=1 ;                //   Line1
      Fun_at_Google ( );
      a+=1; 
      Fun_at_Google ( );
      printf ( "%d  %d  \n " ,a ,b);
}

void Fun_at_Google(void)
{
      static int a=2;                //   Line 2
      int b=1;
      a += ++b;	        
	  Printf ( "%d  %d  \n " ,a ,b);
}


