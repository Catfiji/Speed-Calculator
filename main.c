#include <stdio.h>
// intit
int speed(int D, int T);

//main
int main(void) {
  speed(100,2);
  return 0;
}

//main formula
int speed(int D, int T){
    int answer = D / T;
    printf("%d km/h\n",answer);
}
