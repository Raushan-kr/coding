
#include <stdio.h> 
#include <stdlib.h> // For exit() 
#include <unistd.h> //Header file for sleep(). man 3 sleep for details. 
#include <pthread.h> 


#include <string.h>

#include <stdbool.h>

#define MAX 999999


//char intArray[MAX];
char array1[MAX];
int pointer1=0;
char array2[MAX];
int pointer2=0;
int front = 0;
int rear = -1;
int itemCount = 0;

/*int peek() {
   return intArray[front];
}*/
int consumer1(char data){
	array1[pointer1]=data;
	pointer1++;
	
	



}
int consumer2(char data){
	array2[pointer2]=data;
	pointer2++;
	
	



}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}  

void insert(char data,char intArray[]) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }   
	  //printf("%c",data);    

      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData(char intArray[]) {
   char data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}
void *myThreadFun(void *vargp) 
{ 
	//sleep(1);
	//queue(char s) 
	
	FILE *fptr; 

	char filename[100], c; 

	printf("Enter the filename to open \n"); 
	scanf("%s", filename); 

	// Open file 
	fptr = fopen(filename, "r"); 
	if (fptr == NULL) 
	{ 
		printf("Cannot open file \n"); 
		exit(0); 
	} 
char arr[MAX];
	// Read contents from file 
	c = fgetc(fptr); 	
	while (c != EOF) 
	{  insert(c,arr);
	
		//printf ("%c", c); 
		c = fgetc(fptr); 
	}
	char arr1;
	int i=1;

	fclose(fptr); 

	 if(isFull()) {
	 
      printf("Queue is full!\n");  
	  }
	//printf("Printing GeeksQuiz from Thread \n"); 

	 while(!isEmpty()) {
      char n = removeData(arr);           
      //insert(n,arr1);
      if(i%3==0)
      {
      	consumer2(n);
      	i++;
      	
	  }
	  else{
	  	consumer1(n);
	  	i++;
	  }
	  //printf("%c ",n);
	  }
	  printf("thread1 =");
	  for(i=0;i<pointer1;i++)
	  printf("%c",array1[i]);
	  printf("\n");
	  printf("thread2 =");
	   for(i=0;i<pointer2;i++)
	  printf("%c",array2[i]);
	  
	
      /*while(!isEmpty()) {
       char n = removeData(arr1);           
      //insert(n,arr1);
	  printf("%c ",n);
	  }*/
   	 
      
   }   











int main() 
{ 
	pthread_t thread_id; 
	//printf("Before Thread\n"); 
	pthread_create(&thread_id, NULL, myThreadFun, NULL); 
	pthread_join(thread_id, NULL); 
	//printf("After Thread\n"); 
	exit(0); 
		return 0;  
}
   	
  


