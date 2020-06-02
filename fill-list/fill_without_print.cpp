
#include <iostream> 
#include <list> 
#include <stdio.h>
#include <unistd.h>
using namespace std; 
  
int main() 
{ 
    int p_id,p_pid;
     
    p_id=getpid();  /*process id*/
    p_pid=getpid(); /*parent process id*/
     
    printf("Process ID: %d\n",p_id);
    printf("Parent Process ID: %d\n",p_pid);

    usleep(1000*5000); // Sleep for few seconds so that I can instrument things...

    cout << "Starting now \n";

    unsigned long counter = 0;
    list <long> someList;
    while(true) {
        someList.push_back(counter);
        counter++;
    }
  
    return 0; 
} 
