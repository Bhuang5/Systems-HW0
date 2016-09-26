# include <stdio.h>
# include <stdlib.h>

int main(){
  printf("The sum of the multiples of 3 and 5 below 1000 is %d\n", count(1000));
}

int count(int max){
  int i;
  int sum = 0;
  for(i=0; i<max; i++){
    if(check(i, 3))
      sum+=i;
    else if(check(i,5))
      sum+=i;
  }
  return sum;
}


int check(int a, int b){ 
  int d = a/b;
  if(d*b == a){
    return 1;
  }
  return 0;
}
