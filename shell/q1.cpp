#include<iostream>
#include<fstream>
#include<string>
//#include "queue.h"
//#include "List.h"
using namespace std;
struct Node{
	
    int data;
    Node* next;
};
struct List{
    Node *head;
    Node *tail;
    List();
    void InsertInTail(int data);
    void InsertInHead(int data);
    int Remove();
};
List::List()
{
    head = NULL;
    tail = NULL;
}

void List::InsertInTail(int data)
{
    if(head==NULL)
    {
        head = tail = new Node;
        head->next = NULL;
        head->data = data;
    }
    else{
        Node *temp = new Node;
        temp->data = data;
        tail->next = temp;
        tail = tail->next;
        tail->next = NULL;
    }
}

void List::InsertInHead(int data)
{
    if(head==NULL)
    {
        head = tail = new Node;
        head->next = NULL;
        head->data = data;
    }
    else
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = head;
        head = temp;
    }
}

int List::Remove()
{
    if(head==NULL)
    {
        return -1;
    }
    Node *temp = head;
    if(head->next==NULL)
    {
        head = NULL;
        return temp->data;
    }
    head = head->next;
    int t = temp->data;
    delete temp;
    return t;
}

class Queue
{
    List *queue;
    public:
    Queue();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
};






void getDataFromFile(int *&arrivalTimes,int *&burstTimes,int *totalBurstTime,int *no_processes)
{
    ifstream processFile("processes.txt");
    int n = 0,b=0;
    while(!processFile.eof()){
        string temp;
        getline(processFile,temp);
        n++;
    }
    *no_processes = n;
    processFile.clear();
    processFile.seekg(0,ios::beg);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    arrivalTimes = new int[n];
    burstTimes = new int[n];

    for(int i=0;i<n;i++)
    {
        char temp;
        //cout<<temp<<endl;
        processFile>>temp;
        processFile>>temp;
        processFile>>temp;
        processFile>>arrivalTimes[i];
        processFile>>temp;
        processFile>>burstTimes[i];
        processFile>>temp;
        //processFile>>temp;cout<<temp<<endl;
        b+=burstTimes[i];
    }
    *totalBurstTime = b;
    //cout<<"file read complete"<<endl;
}



Queue::Queue()
{
    queue = new List;
    queue->head = NULL;
    queue->tail = NULL;
}

bool Queue::isEmpty()
{
    return queue->head ==NULL;
}

void Queue::enqueue(int data)
{
    queue->InsertInTail(data);
}

int Queue::dequeue()
{
    return queue->Remove();
}


void FCFS()
{
    cout<<"FCFS: "<<endl;
    Queue *FIFO = new Queue();
    int no_processes,totalBurstTime;
    int *np = &no_processes,*tbt=&totalBurstTime,*burstTimesLeft,*arrivalTimes;
    getDataFromFile(arrivalTimes,burstTimesLeft,tbt,np);
    int *executing = new int[no_processes](),*burstTimes = new int[no_processes](),*waitingTime = new int[no_processes],*turnaround = new int[no_processes];
    int time=0,topProcess,burstTimeLeft = totalBurstTime;
    bool idle=true;
    waitingTime[0] = 0;
    while(burstTimeLeft)
    {
        for(int i=0;i<no_processes;i++)
        {
            if(time==arrivalTimes[i]&&!executing[i])
            {
                FIFO->enqueue(i);
                executing[i]=1;
                
            }
        }
        if(idle&&!FIFO->isEmpty())
        {
            idle=false;
            topProcess=FIFO->dequeue();
        }
        time++;
        if(!idle)
        {
            cout<<"Process "<<topProcess<<" is executing from time "<<time-1<<" to "<<time<<endl;
            burstTimes[topProcess]++;
            if(!--burstTimesLeft[topProcess])
            {
                turnaround[topProcess] = time - arrivalTimes[topProcess];
                waitingTime[topProcess] = time-burstTimes[topProcess]-arrivalTimes[topProcess];
                if(!FIFO->isEmpty())
                {
                    topProcess = FIFO->dequeue();
                    executing[topProcess]=0;
                }
                else
                {
                    idle=true;
                }
            }
            
            burstTimeLeft--;
        }
        else
        {
            cout<<"The cpu is idle for time "<<time<<endl;
        }
        
    }
    
    for(int i=0;i<no_processes;i++)
    {
        cout<<"Process "<<i<<": Turnaround = "<<turnaround[i]<<" Waiting time = "<<waitingTime[i]<<" Penalty ratio = "<<(float)turnaround[i]/burstTimes[i]<<endl;
    }
    cout<<"System throughput = "<<(float)no_processes/time<<endl;
}

void SJF_pre_emptive()
{
    cout<<"SJF Pre-Emptive: "<<endl;
    int no_processes,totalBurstTime;
    int *np = &no_processes,*tbt=&totalBurstTime,*burstTimesLeft,*arrivalTimes;
    getDataFromFile(arrivalTimes,burstTimesLeft,tbt,np);
    int *burstTimes = new int[no_processes](),*waitingTime = new int[no_processes],*turnaround = new int[no_processes];
    int time=0,executing,burstTimeLeft=totalBurstTime;
    bool idle=true;
    while(burstTimeLeft)
    {
        int minBurst=10000;
        for(int i=0;i<no_processes;i++)
        {
            if(burstTimesLeft[i]>0&&burstTimesLeft[i]<minBurst&&arrivalTimes[i]<=time)
            {
                minBurst = burstTimesLeft[i];
                executing=i;
                idle=false;
            }
        }
        if(minBurst==10000)
        {
            idle=true;
        }
        time++;
        if(!idle)
        {
            burstTimes[executing]++;
            cout<<"Process "<<executing<<" is executing from time "<<time-1<<" to "<<time<<endl;
            if(!--burstTimesLeft[executing])
            {
                turnaround[executing] = time-arrivalTimes[executing];
                //cout<<executing<<" "<<time<<endl;
                waitingTime[executing] = time-burstTimes[executing]-arrivalTimes[executing];
            }  
            burstTimeLeft--;   
        }
        else
        {
            cout<<"CPU is idle from time "<<time-1<<" to "<<time<<endl;
        }
        
    }
    for(int i=0;i<no_processes;i++)
    {
        cout<<"Process "<<i<<": Turnaround = "<<turnaround[i]<<" Waiting time = "<<waitingTime[i]<<" Penalty ratio = "<<(float)turnaround[i]/burstTimes[i]<<endl;
    }
    cout<<"System throughput = "<<(float)no_processes/time<<endl;

}

void SFJ_non_pre_emptive()
{
    cout<<"SJF Non Pre-Emptive:"<<endl;
    int no_processes,totalBurstTime;
    int *np = &no_processes,*tbt=&totalBurstTime,*burstTimesLeft,*arrivalTimes;
    getDataFromFile(arrivalTimes,burstTimesLeft,tbt,np);
    int *turnaround = new int[no_processes](),*waitingTime = new int[no_processes],*burstTimes = new int[no_processes];
    int time=0,executing=-1,burstTimeLeft=totalBurstTime;
    bool idle=true;
    while(burstTimeLeft)
    {
        if(executing==-1||!burstTimesLeft[executing])
        {
            int minBurst=10000;
            for(int i=0;i<no_processes;i++)
            {
            if(burstTimesLeft[i]>0&&burstTimesLeft[i]<minBurst&&arrivalTimes[i]<=time)
            {
                minBurst = burstTimesLeft[i];
                executing=i;
                idle=false;
            }
            }
            if(minBurst==10000)
            {
                idle=true;
            }
        }
        time++;
        if(!idle)
        {
            burstTimes[executing]++;
            cout<<"Process "<<executing<<" is executing from time "<<time-1<<" to "<<time<<endl;
            if(!--burstTimesLeft[executing])
            {
                turnaround[executing] = time - arrivalTimes[executing];
                waitingTime[executing] = time-burstTimes[executing]-arrivalTimes[executing];
                //cout<<burstTimes[executing]<<" "<<arrivalTimes[executing]<<endl;
            }  
            
            burstTimeLeft--;   
        }
        else
        {
            cout<<"CPU is idle from time "<<time-1<<" to "<<time<<endl;
        }
        
    }
    for(int i=0;i<no_processes;i++)
    {
        cout<<"Process "<<i<<": Turnaround = "<<turnaround[i]<<" Waiting time = "<<waitingTime[i]<<" Penalty ratio = "<<(float)turnaround[i]/burstTimes[i]<<endl;
    }
    cout<<"System throughput = "<<(float)no_processes/time<<endl;


}

void RoundRobin()
{
    cout<<"Round Robin:"<<endl;
    Queue *FIFO = new Queue();
    int no_processes,totalBurstTime;
    int *np = &no_processes,*tbt=&totalBurstTime,*burstTimesLeft,*arrivalTimes;
    getDataFromFile(arrivalTimes,burstTimesLeft,tbt,np);
    int *turnaround = new int[no_processes](),*waitingTime = new int[no_processes],*burstTimes = new int[no_processes];
    int time=0,timeInQuantum=0,timeQuantum=5,topProcess=-1,burstTimeLeft = totalBurstTime;
    bool idle=true;
    while(burstTimeLeft)
    {
        for(int i=0;i<no_processes;i++)
        {
            if(time == arrivalTimes[i])
            {
                idle=false;
                FIFO->enqueue(i);
                if(topProcess==-1)
                    topProcess = FIFO->dequeue();
            }
        }
        if(timeInQuantum == timeQuantum)
        {
            timeInQuantum=0;
            if(FIFO->isEmpty())
            {
                if(!burstTimesLeft[topProcess])
                {
                    topProcess=-1;
                    idle=true;
                }
            }
            else
            {
                FIFO->enqueue(topProcess);
                topProcess = FIFO->dequeue();
            }
        }
        time++,timeInQuantum++;
        if(idle)
        {
            cout<<"CPU is idle from time "<<time-1<<" to "<<time<<endl;
        }
        else
        {
            burstTimes[topProcess]++;
            cout<<"Process "<<topProcess<<" executing from time "<<time-1<<" to "<<time<<endl;
            if(!--burstTimesLeft[topProcess])
            {
                turnaround[topProcess] = time-arrivalTimes[topProcess];
                waitingTime[topProcess] = time - burstTimes[topProcess]-arrivalTimes[topProcess];
                timeInQuantum=0;
                if(!FIFO->isEmpty())
                    topProcess = FIFO->dequeue();
                else
                {
                    topProcess=-1;
                    idle=true;
                }
            }
            burstTimeLeft--;
        }
    }
    for(int i=0;i<no_processes;i++)
    {
        cout<<"Process "<<i<<": Turnaround = "<<turnaround[i]<<" Waiting time = "<<waitingTime[i]<<" Penalty ratio = "<<(float)turnaround[i]/burstTimes[i]<<endl;
    }
    cout<<"System Throughput = "<<(float)no_processes/time<<endl;
    
}
int main()
{
    FCFS();
    SJF_pre_emptive();
    SFJ_non_pre_emptive();
    RoundRobin();
    
    return 0;
}
