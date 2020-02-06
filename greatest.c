#include <stdio.h>
  int main() {
    int a[10]={23,55,4,3,1232,3432,23,54,675,78};
    int i;
    int greatest;
   
   
    for (i = 0; i < 10; i++) 
   
 
   
    greatest = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
