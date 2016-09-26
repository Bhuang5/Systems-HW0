# include <stdio.h>
# include <stdlib.h>

int main(){
  printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d\n", divisible());
}

int divisible() {
  int try = 20;
  int n;
  while (try) {
    for (n = 20; n; n--){
      if (try % n != 0) {
	try+=20;
	break;
      }
    }
    if (n == 0)
      return try;
  }
  return 0;
}
