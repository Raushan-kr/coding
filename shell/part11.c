#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//# define size 100 
char norepdecomp(char *str,int size)
{
//printf("%d",size);
//printf("%s",&str[3]);
int i=size;
char r,l;
//for(int i=0;i<size;i++)
while(i!=0)
{
	printf("%d",i);
	l= str.subset(i);
	r = str.substr(i+1);
	if(r==l)
	{
		
		printf("%s ,",r);
	}
	else
	{
		printf("%s",&str[i]);
	}
	i--;
}

	
}

int longestpalsubstr(char *str,int size)
{
printf("%d",size);
printf("%s",str);

	
}
 
  
int main()
{
	//int array[100],l=1,i=0;
	char s[100]; 
   gets(s); 
   //printf("%s", s);
    int sizestr = strlen(s);
    printf("%d",sizestr);
   
	//printf("please enter the numbers ");
	
	
	/*while(l==1)
	{
		scanf("%d",&array[i]);
		
		i++;
		printf("please enter 1 if u want to add more numnbers");
		scanf("%d",&l);
			
	}*/
	norepdecomp(s,sizestr);
	//longestpalsubstr(s,sizestr);
	//while(i-- !=0)
	//printf("%c",cg[i]);
}
//void norepdecomp(char s, int size);

