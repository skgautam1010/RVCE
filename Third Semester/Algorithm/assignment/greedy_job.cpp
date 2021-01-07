#include<iostream>
#include<algorithm>
#include <chrono>
using namespace std::chrono;
using namespace std;

struct Job
{
   char id;     // Job Id
   int dead;    // Deadline of job
   int profit;  // Profit if job is over before or on deadline
};

bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n)
{
	sort(arr, arr+n, comparison);
	int result[n];
	bool slot[n];
	for (int i=0; i<n; i++)
        	slot[i] = false;
	for (int i=0; i<n; i++)
    	{
		for (int j=min(n, arr[i].dead)-1; j>=0; j--)
       		{
			// Free slot found
          		if (slot[j]==false)
          		{
             			result[j] = i;  // Add this job to result
             			slot[j] = true; // Make this slot occupied
             			break;
          		}
       		}
    	}
	for (int i=0; i<n; i++)
       		if (slot[i])
         		cout << arr[result[i]].id << "\n";
}


int main()
{
    Job arr[] = { {'a',5, 200}, {'b', 3, 180}, {'c', 3, 190},
                   {'d', 2, 300}, {'e', 4, 120},{'f',2,100}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs \n";
    // Function call
    auto start = high_resolution_clock::now();
    printJobScheduling(arr, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"Total Execution Time:"<< (duration.count()/1000)<<"  milliseconds" << endl;
    return 0;
}
