

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>
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
char arr[MAX];
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

sem_t semaphore;


void threadfunc() 

 {
    
        sem_wait(&semaphore);
       	sleep(1);
	//queue(char s) 
	pthread_t *mythread2,*mythread3;
	/*FILE *fptr; 

	char filename[100], c; 
	int i;
	printf("Enter the filename to open \n"); 
	scanf("%s", &filename); 
	printf("filename= %s\n",filename);

	// Open file 
	fptr = fopen(filename, "r"); 
	if (fptr == NULL) 
	{ 
		printf("Cannot open file \n"); 
		exit(0); 
	} */
		
	FILE *fptr; 

	char filename[100], c; 

	printf("Enter the filename to open \n"); 
	scanf("%s", &filename); 

	// Open file 
	fptr = fopen(filename, "r"); 
	if (fptr == NULL) 
	{ 
		printf("Cannot open file \n"); 
		exit(0); 
	} 

	// Read contents from file 
	c = fgetc(fptr); 	
	while (c != EOF) 
	{  insert(c,arr);
	
		//printf ("%c", c); 
		c = fgetc(fptr); 
	}
	

	fclose(fptr); 
        sem_post(&semaphore);
        sleep(1);
        
}



int main(void) {
    
    // initialize semaphore, only to be used with threads in this process, set value to 1
    sem_init(&semaphore, 0, 1);
    
    pthread_t *mythread1,*mythread2,*mythread3;
    
    mythread1 = (pthread_t *)malloc(sizeof(*mythread1));
    mythread2 = (pthread_t *)malloc(sizeof(*mythread2));
    mythread3 = (pthread_t *)malloc(sizeof(*mythread3));
    // start the thread
    //printf("Starting thread, semaphore is unlocked.\n");
    pthread_create(mythread1, NULL, (void*)threadfunc, NULL);
   // pthread_create(mythread1, NULL, myThreadFun, NULL); 
    
    getchar();
    
   sem_wait(&semaphore);
    printf("Semaphore locked.\n");
    char arr1;
	int i=1;
	if(isFull()) {
	 
      printf("Queue is full!\n");  
	  }
	//printf("Printing GeeksQuiz from Thread \n"); 

	 while(!isEmpty()) {
      char n = removeData(arr);           
      //insert(n,arr1);
      if(i%3==0)
      {
      	pthread_create(mythread2, NULL, (char*)consumer2, n);
      	i++;
      	
	  }
	  else{
      	pthread_create(mythread3, NULL, (char*)consumer1,n);
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
    
    // do stuff with whatever is shared between threads
    getchar();
    
    printf("Semaphore unlocked.\n");
    sem_post(&semaphore);
    
    getchar();
    
    return 0;
}
