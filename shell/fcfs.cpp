
#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

 
void findWaitingTime(int processes[], int n, 
						int bt[], int cd[],int wt[]) 
{ 
	 
	wt[0] = 0; 

	 
	for (int i = 1; i < n ; i++ ) 
		if (cd[i]>bt[i-1]){
		wt[i] = bt[i-1] + wt[i-1]-cd[i] ;			
		}
		else{
		
		wt[i] = bt[i-1] + wt[i-1]-cd[i] ; 
}
} 


void findTurnAroundTime( int processes[], int n, int cd[],
				int bt[], int wt[], int tat[]) 
{ 
	
	for (int i = 0; i < n ; i++) 
		tat[i] = bt[i] + wt[i]-cd[i]; 
} 

 
void findavgTime( int processes[], int n,int cd[], int bt[]) 
{ 
	int wt[n], tat[n], total_wt = 0, total_tat = 0; 

	 
	findWaitingTime(processes, n, bt,cd, wt); 

	
	findTurnAroundTime(processes, n,cd, bt, wt, tat); 

	 
		cout << "Processes "<<" arrival time " <<" Burst time "
		<< " Waiting time " << " Turn around time"<<" penalty ratio\n"; 

 
	for (int i=0; i<n; i++) 
	{ 
		total_wt = total_wt + wt[i]; 
		total_tat = total_tat + tat[i]; 
		cout << " " << i+1 << "\t\t"<< cd[i]<<"\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<"\t\t "<<(float)tat[i]/(float)bt[i]<<endl; 
	} 

	cout << "Average waiting time = "
		<< (float)total_wt / (float)n; 
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n; 
} 

 
int main() 
{ 
	
	int processes[] = { 1, 2, 3}; 
	int n = sizeof processes / sizeof processes[0]; 
	/*
	int Arrival_time[] = {0,2,3};
	int burst_time[] = {60, 18, 25}; 
*/
int bt_s=0,at_s=0;
int bt[100],at[100];
ifstream burst_fin("bt.txt",ios::in);

if (burst_fin.is_open()){
	while(true)
	{
		int x1;
		burst_fin>>x1;
		if (burst_fin.eof())
		break;
		bt[bt_s++]  = x1;
	}
	burst_fin.close();
}
ifstream arrival_fin("at.txt",ios::in);


if (arrival_fin.is_open()){
	while(true)
	{
		int x1;
		arrival_fin>>x1;
		if (arrival_fin.eof())
		break;
		at[at_s++]  = x1;
	}
	arrival_fin.close();
}






	findavgTime(processes, n,at, bt); 
	return 0; 
} 

