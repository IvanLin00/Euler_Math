#include <stdio.h>
#include <stdlib.h>

int main(){
    //Problem 5
    int x = 1;
    while(x % 11 != 0 ||
	      x % 12 != 0 ||
	      x % 13 != 0 || 
	      x % 14 != 0 ||
	      x % 16 != 0 ||
	      x % 17 != 0 ||
	      x % 18 != 0 || 
	      x % 19 != 0 || 
	      x % 20 != 0){
	        x += 1;
    }
    printf ("The smallest number that is divisible by the numbers from 1-20 is: %d\n", x);

    //Problem 1
    int counter = 10;
    int sum = 23;
    while (counter < 1000){
        if (counter % 3 == 0 || counter % 5 == 0){
            sum += counter;
        }
        counter += 1;
    }
    printf ("The sum of all multiples of 3 and 5 up to 1000 is: %d\n", sum);
	
    return 0;
    
}
