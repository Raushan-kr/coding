#include<stdio.h>
# define size 100 
void norepdecomp(char);
int main()
{
	int array[size],s=1,i=0;
	char str[size]; 
   gets(str); 
    
   
	printf("please enter the numbers ");
	
	while(s==1)
	{
		scanf("%d",&array[i]);
		
		i++;
		printf("please enter 1 if u want to add more numnbers");
		scanf("%d",&s);
			
	}
//	norepdecomp(s);
	//while(i-- !=0)
	//printf("%c",cg[i]);
}
/*void norepdecomp(char s, int size);
{

printf("%s",s);

	
}/*
