#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Process{
	string name;
	int arrivaltime;
	int burstTime; 
}; 
void fcfscheduling(queue<Process>& processes){
	cout<<"First come, first served (FCFS) scheduling"<<endl;
	
	int currentTime = 0;
    while(!processes.empty()){
    	Process currentProcess = processes.front();
	        processes.pop();

		
		        if (currentTime < currentProcess.arrivalTime) {

		currentTime = currentProcess.arrivalTime;	
		} 
		cout << "Executing process " << currentProcess.name << " from time " << currentTime
             << " to " << currentTime + currentProcess.burstTime << endl;
        currentTime += currentProcess.burstTime;
	}
	    cout << "All processes have been executed." << endl; 
} 
int main(){
	queue<Process> processes;
    processes.push({"P1", 0, 5});
    processes.push({"P2", 1, 3});
    processes.push({"P3", 2, 8});

    // Perform FCFS scheduling
    fcfsScheduling(processes);

    return 0;
	return 0; 
} 
