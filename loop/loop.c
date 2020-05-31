#include<stdio.h>
#include<signal.h>
#include<unistd.h>

unsigned long counter = 0;

void sig_handler(int signo) {
  if (signo == SIGINT) {
    printf("received SIGINT\n");
    printf("counter value is %d", counter);
    exit(0);
  }
}

int main(){

  if (signal(SIGINT, sig_handler) == SIG_ERR) {
    printf("\ncan't catch SIGINT\n");
  }

  for(; 1 == 1; counter++) {
      if (counter % 10000 == 0) {
        printf("Running things, counter's is %d \n", counter);
      }
  }
  printf("the value of counter is %d", counter);
}
