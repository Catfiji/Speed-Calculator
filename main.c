#include <stdio.h>
// intit
void speed(void);
//main
int main(void) {
  speed();
  return 0;
}
//main formula
void speed(void){
    int D;
    int T;
  
    printf("Distance:\n");
    scanf ("%d",&D);
    printf("Time: \n");
    scanf("%d",&T);
  
    int answer = D / T;
    printf("%d km/h\n",answer);
}
