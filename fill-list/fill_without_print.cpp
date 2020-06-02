
#include <iostream> 
#include <list> 
#include <stdio.h>
#include <unistd.h>
using namespace std; 

#if !defined(_WIN32) && !defined(_WIN64) // Linux - Unix
    #  include <sys/time.h>
    typedef timeval sys_time_t;
    inline void system_time(sys_time_t* t) {
        gettimeofday(t, NULL);
    }
    inline long long time_to_msec(const sys_time_t& t) {
        return t.tv_sec * 1000LL + t.tv_usec / 1000;
    }
    #else // Windows and MinGW
    #  include <sys/timeb.h>
    typedef _timeb sys_time_t;
    inline void system_time(sys_time_t* t) { _ftime(t); }
    inline long long time_to_msec(const sys_time_t& t) {
        return t.time * 1000LL + t.millitm;
    }
#endif

int main() 
{ 
    int p_id,p_pid;
     
    p_id=getpid();  /*process id*/
    p_pid=getpid(); /*parent process id*/
     
    printf("Process ID: %d\n",p_id);
    printf("Parent Process ID: %d\n",p_pid);

    usleep(1000*5000); // Sleep for few seconds so that I can instrument things...

    sys_time_t t;
    system_time(&t);
    long long currentTimeMs = time_to_msec(t);
    std::cout << "currentTimeMs: " << currentTimeMs << std::endl;

    cout << "Starting now \n";

    unsigned long counter = 0;
    list <long> someList;
    while(true) {
        someList.push_back(counter);
        counter++;
    }
  
    return 0; 
} 
