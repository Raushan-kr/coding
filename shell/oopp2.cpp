
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

void First_Card(void);void Second_Card(void);
void Third_Card(void);void Fourth_Card(void);
void Fifth_Card(void);void Sixth_Card(void);
void Analyze(void); Check(void);
void main(void)
{  int ans=0,in=0;
   clrscr();
   _setcursortype(_NOCURSOR);
   First_Card();
     in=Check(); if (in==0) ans+=1;
   Second_Card();
     in=Check(); if (in==0) ans+=2;
   Third_Card();
     in=Check(); if (in==0) ans+=4;
   Fourth_Card();
     in=Check(); if (in==0) ans+=8;
   Fifth_Card();
     in=Check(); if (in==0) ans+=16;
   Sixth_Card();
     in=Check(); if (in==0) ans+=32;
     textcolor(WHITE);textbackground(BLACK);
     clrscr(); Analyze();     clrscr();
   if(ans>60) {gotoxy(20,12);printf("You Entered Incorrect Information.");}
   else
   {gotoxy(28,13);printf("Your No Is : "%d"",ans);}

}

void First_Card(void)
{
gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(25,7);  printf("º  C O M P U T E R   G A M E  º");
gotoxy(25,8);  printf("ÌÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍ¹");
gotoxy(25,9);  printf("º 1  º 3  º 5  º 7  º 9  º 11 º");
gotoxy(25,10); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,11); printf("º 13 º 15 º 17 º 19 º 21 º 23 º");
gotoxy(25,12); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,13); printf("º 25 º 27 º 29 º 31 º 33 º 35 º");
gotoxy(25,14); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,15); printf("º 37 º 39 º 41 º 43 º 45 º 47 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 49 º 51 º 53 º 55 º 57 º 59 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}

void Second_Card(void)
{
gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(25,7);  printf("º  C O M P U T E R   G A M E  º");
gotoxy(25,8);  printf("ÌÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍ¹");
gotoxy(25,9);  printf("º 2  º 3  º 6  º 7  º 10 º 11 º");
gotoxy(25,10); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,11); printf("º 14 º 15 º 18 º 19 º 22 º 23 º");
gotoxy(25,12); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,13); printf("º 25 º 27 º 30 º 31 º 34 º 35 º");
gotoxy(25,14); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,15); printf("º 38 º 39 º 42 º 43 º 46 º 47 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 50 º 51 º 54 º 55 º 58 º 59 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}

void Third_Card(void)
{
gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(25,7);  printf("º  C O M P U T E R   G A M E  º");
gotoxy(25,8);  printf("ÌÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍ¹");
gotoxy(25,9);  printf("º 4  º 5  º 6  º 7  º 12 º 13 º");
gotoxy(25,10); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,11); printf("º 14 º 15 º 20 º 21 º 22 º 23 º");
gotoxy(25,12); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,13); printf("º 28 º 29 º 30 º 31 º 36 º 37 º");
gotoxy(25,14); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,15); printf("º 38 º 39 º 44 º 45 º 46 º 47 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 52 º 53 º 54 º 55 º 60 º 60 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}

void Fourth_Card(void)
{
gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(25,7);  printf("º  C O M P U T E R   G A M E  º");
gotoxy(25,8);  printf("ÌÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍ¹");
gotoxy(25,9);  printf("º 8  º 9  º 10 º 11 º 12 º 13 º");
gotoxy(25,10); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,11); printf("º 14 º 15 º 24 º 25 º 26 º 27 º");
gotoxy(25,12); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,13); printf("º 28 º 29 º 30 º 31 º 40 º 41 º");
gotoxy(25,14); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,15); printf("º 42 º 43 º 44 º 45 º 46 º 47 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 56 º 57 º 58 º 59 º 60 º 60 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}

void Fifth_Card(void)
{
gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
gotoxy(25,7);  printf("º  C O M P U T E R   G A M E  º");
gotoxy(25,8);  printf("ÌÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍËÍÍÍÍ¹");
gotoxy(25,9);  printf("º 16 º 17 º 18 º 19 º 20 º 21 º");
gotoxy(25,10); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,11); printf("º 22 º 23 º 24 º 25 º 26 º 27 º");
gotoxy(25,12); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,13); printf("º 28 º 29 º 30 º 31 º 48 º 49 º");
gotoxy(25,14); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,15); printf("º 50 º 51 º 52 º 53 º 54 º 55 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 56 º 57 º 58 º 59 º 60 º 60 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}
void Sixth_Card(void)
{
    gotoxy(25,6);  printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»
52 º 53 º 54 º 55 º");
gotoxy(25,16); printf("ÌÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍÎÍÍÍÍ¹");
gotoxy(25,17); printf("º 56 º 57 º 58 º 59 º 60 º 60 º");
gotoxy(25,18); printf("ÈÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍÊÍÍÍÍ¼");
}
Check(void)
{
  int loop,key,index=0;
  char *menu[]={" Yes "," No "};
  textcolor(WHITE);
  textbackground(CYAN);
  while(1)
  { for (loop=0;loop<2;loop++)
    { if (loop==index)
	textbackground(YELLOW);
      else
	textbackground(CYAN);
      gotoxy(33+loop*10,20);cprintf("%s",menu[loop]);
    }
    key=getch();
    switch(key)
    { case 75:
	index--;if (index<0) index=1;break;
      case 77:
	index++;if (index>1) index=0;break;
      case 13: return index;
    }
  }
}
void Analyze(void)
{
 gotoxy(30,10); printf("Analyzing Result...");
 gotoxy(25,11); printf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
 gotoxy(25,12); printf("º °°°°°°°°°°°°°°°°°°°°°°°°°°° º");
 gotoxy(25,13); printf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
 for(int a=27;a<=53;a++)
 { delay(100);
   gotoxy(a,12);printf("%c",219);
 }
}
