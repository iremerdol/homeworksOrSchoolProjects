#include <stdio.h>

int main (void){

  int x = 278;
  int *ptr;

  ptr=&x;

  printf ("\n1. Value of the variable x by using x is: %d", x);
  printf ("\n2. Value of the variable x by using ptr is: %d", *ptr);

  printf ("\n\n1. Address of the variable x by using x is: %p", &x);
  printf ("\n2. Address of the variable x by using ptr is: %p", ptr);

  printf ("\n\n1. Address of the pointer ptr by using ptr is: %p", &ptr);

  printf ("\n\n1. Value of the pointer ptr by using ptr is: %p", ptr);
  
  *ptr=350;

  printf ("\n1. Value of the variable x by using x is: %d", x);
  printf ("\n2. Value of the variable x by using ptr is: %d", *ptr);
  
  return(0);
}
