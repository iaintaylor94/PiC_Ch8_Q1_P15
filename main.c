// Program to illustrate static and automatic variables

#include <stdio.h>

// Declare Functions
void auto_static (void);

int main(void) {

  for ( int i = 0; i < 5; i++) {
    auto_static ();
  }
  
  return 0;
}

// Define Functions
void auto_static (void) {
  int autoVar = 0;
  static int staticVar;

  printf ("automatic = %d, static = %d\n", autoVar, staticVar);

  autoVar++;
  staticVar++;
}