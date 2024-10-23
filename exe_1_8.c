#include <stdio.h>

// resolva uma equaçao linear.

int main(){

  float a = 0;
  float b = 0;
  
  printf("\nqual e o a");
  scanf("%f", &a);
  
  printf("qual e o b");
  scanf("%f", &b);
  
  float x = b/a;
  
  printf("soluçao: %f", x);

  return 0;



}
