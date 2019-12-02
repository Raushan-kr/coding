/*** Implementation of the Pagh–Rodler Cuckoo Hashing Algorithm (2001)       ***/
/*** This version is slightly different from what is asked in the assignment ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_T 3
#define MAX_ITER_CNT 10
#define MAX_REC_LEVEL 4
#define FAILURE 0
#define SUCCESS 1
#define PRESENT 2
#define DOUBLE_SIZE 3
#define CHANGE_PARAMS 4

typedef struct {
   unsigned int s;     /* Allocation size */
   unsigned int t;     /* log2(s) */
   unsigned int n;     /* Number of elements stored */
   unsigned int a, b;  /* Parameters for generating two hash values */
   char **data;        /* One-dimensional table of strings */
} htbl;

/* Function prototypes. Needed only for insert() and rehash() which call
   each other. */
htbl init ( );
unsigned int hash ( char *, unsigned int, unsigned int );





/* Return an empty table with s = 8, t = 3, n = 0, a = 1, and b = 3 */
htbl init ( )
{
   htbl T;
   unsigned int i;

   T.s = (1U << INIT_T); T.t = INIT_T; T.n = 0;
   T.a = 1; T.b= 3;
   T.data = (char **)malloc((T.s) * sizeof(char *));
   /* NULL pointer indicates empty location */
   for (i=0; i<T.s; ++i) T.data[i] = NULL;
   return T;
}

/* Return the hash of a string str governed by parameters a and t */
unsigned int hash ( char *str, unsigned int a, unsigned int t )
{
   unsigned int h = 0;

   if (!str) return h;

   /* First, convert str to a 32-bit unsigned integer */
   while (*str) {
      h = (h << 16) + (h << 8) - h + (unsigned int)(*str);
      ++str;
   }

   /* Multiplying by a gives a family of universal hash functions for integers */
   h *= a;

   return h >> (32 - t);
}



int main ( int argc, char *argv[] )
{
   htbl T;
   char *fname, str[1024];
   int n, status = SUCCESS;
   FILE *fp;

   if (argc >= 2) fname = argv[1];
   else {
      printf("Input file name: ");
      fname = (char *)malloc(1024 * sizeof(char));
      scanf("%s", fname);
   }

   /*** Initialize to empty table ***/
   T = init();

   fp = (FILE *)fopen(fname,"r");
   if (fp == NULL) exit(1);

   /*** Insert ***/
   fscanf(fp,"%d",&n); fscanf(fp,"%c",str);
   while (n--) {
      fgets(str,1024,fp);          /* Read an entire line */
      str[strlen(str)-1] = '\0';   /* Delete the trailing new line character */
      //T = insert(T,str,&status,0); /* Insert */
   }


  
   fclose(fp);

   exit(0);
}
