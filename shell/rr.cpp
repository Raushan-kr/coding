#include<bits/stdc++.h>
#include<iostream> 
using namespace std; 

 
void findWaitingTime(int processes[], int n, 
			int bt[], int wt[], int quantum) 
{ 
	 
	
	int rem_bt[n]; 
	for (int i = 0 ; i < n ; i++) 
		rem_bt[i] = bt[i]; 

	int t = 0; 

	 
	while (1) 
	{ 
		bool done = true; 

		 
		for (int i = 0 ; i < n; i++) 
		{ 
		 
			if (rem_bt[i] > 0) 
			{ 
				done = false; 

				if (rem_bt[i] > quantum) 
				{ 
					 
					t += quantum; 

				
					rem_bt[i] -= quantum; 
				} 

			
				else
				{ 
				 
					t = t + rem_bt[i]; 

					wt[i] = t - bt[i]; 

				 
					rem_bt[i] = 0; 
				} 
			} 
		} 

		
		if (done == true) 
		break; 
	} 
} 

 
void findTurnAroundTime(int processes[], int n,int at[], 
						int bt[], int wt[], int tat[]) 
{ 
	 
	for (int i = 0; i < n ; i++) 
		tat[i] = bt[i] + wt[i]-at[i]; 
} 

 
void findavgTime(int processes[], int n, int bt[], int at[],
									int quantum) 
{ 
	int wt[n], tat[n], total_wt = 0, total_tat = 0; 

	 
	findWaitingTime(processes, n, bt, wt, quantum); 

	 
	findTurnAroundTime(processes, n,at, bt, wt, tat); 

	 
	cout << "Processes "<<" arrival time " <<" Burst time "
		<< " Waiting time " << " Turn around time"<<" penalty ratio\n"; 

 
	for (int i=0; i<n; i++) 
	{ 
		total_wt = total_wt + wt[i]; 
		total_tat = total_tat + tat[i]; 
		cout << " " << i+1 << "\t\t"<< at[i]<<"\t\t" << bt[i] <<"\t "
			<< wt[i]-at[i] <<"\t\t " << tat[i] <<"\t\t "<<(float)tat[i]/(float)bt[i]<<endl; 
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



 
	int quantum = 5; 
	findavgTime(processes, n, bt,at ,quantum); 
	return 0; 
} 

