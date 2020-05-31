#include <stdio.h>
#include <stdlib.h>
#include<signal.h>
#include<unistd.h>

unsigned long counter = 0;

void sig_handler(int signo)
{
  if (signo == SIGINT) {
    printf("received SIGINT\n");
    printf("counter value is %d", counter);
    exit(0);
  }
}

int main(){
  for(; 1 == 1; counter++) {

  }
  printf("the value of counter is %d", counter);
}
