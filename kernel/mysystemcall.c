#include <linux/linkage.h>

/* Define the custom syscall to compute the max from numbers
 */
asmlinkage long sys_mymax(int a, int b)
{
  /* Compute the max of two numbers */
  if( a > b ) 
  { 
    return a;
  }
 
  return b;
}
