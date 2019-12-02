#include<stdio.h>
//made by me  for allocation  of blocks
int Memory_size[5] = {50,50,50,50,50};
int array[5];
int alloc(int arr[],int size);
int dealloc(int arr[],int num);
//int realloc(int arr[],int num);
int realloc(int arr[],int num);

int main()
{
	
	int y=1,bl_num=0,x;
	while(y==1)
	{
	
	if (bl_num>4)
	{
		break;
	}
	else
	{
		printf("input the size of %d block",bl_num+1);
		scanf("%d",&x);
		if(x<=50){
		array[bl_num] = x;
		bl_num++;
		}
		else
		printf("\n%d cannot be allocated\n",x);
			
	}
	printf("\nwant to put  data in more block press 1 for input");
	scanf("%d",&y);
	}
	
	alloc(array,bl_num);
	dealloc(array,bl_num);
	int i = 0;

	realloc(array,bl_num);
		while( i<5){
	
	printf("\n%d\n",array[i]);
	i++;
	}
}
//implementing with first fit
int alloc(int arr[],int size)
{
	int mem_occ;
	
	int i=0;
	while(i<size)
	{
		if(arr[i] <= Memory_size[i])
		{
				printf("\nMemory block %d %dgot occupied\n",i+1,arr[i]);
		}
		else
		{
			printf("no memory block of size %d ",arr[i]);
		}
		//mem_occ +=arr
		i++;
	}
	//printf("\n%d",mem_occ);
	
}
int dealloc(int arr[] , int num)
{
	int bl,ar[5],i=0;
	printf("please enter the block number to deallocate");
	scanf("%d",&bl);
	while(i<num)
	{
		if (i==bl-1)
		{
			arr[i]=0;
		
		printf("\n%d block number got deallocated\n",i+1);
		
		}
		else
		printf("allocated space of block number %d and size allocated is %d",i,arr[i]);
		i++;
	 } 
	 
	
}
int realloc(int arr[],int num)
{
	int bl_size,i;
	printf("%d enter block size to reallocate ");
	scanf("%d",&bl_size);
	if(bl_size<=Memory_size[0])
	{
		
		while(i<5)
		{
		
			
			
				if (array[i]=='0')
				{
					
				array[i]=bl_size;
			
				}
			
			else
			{
				array[i]=bl_size;
				break;
				
			}
			i++;
		}
	}
	
}
