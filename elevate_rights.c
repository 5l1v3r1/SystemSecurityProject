#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main ()
{
  
  uid_t set_uid = 61337, get_uid;

  get_uid = getuid();
  printf("Old uid = %d\n", get_uid);

  setuid(set_uid);
  
  get_uid = getuid();
  printf("New uid = %d\n", get_uid);

  return 0;
}
