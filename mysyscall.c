#include <stdio.h>
#include <linux/unistd.h>
#include <sys/syscall.h>

#define __NR_mymax 307

int main(void)
{
  int a,b,c;
  printf("Computing max(a,b) in kernel space\n");
  printf("Input a: ");
  scanf("%d", &a);

  printf("Input b: ");
  scanf("%d", &b);

  c = syscall(__NR_mymax, a, b);
  if(c < 0)
  { 
     perror("syscall failed: "); 
  }
  else
  {
     printf("System call result max= %d\n", c);
  } 

  return 0;
}
