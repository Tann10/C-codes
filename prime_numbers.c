#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>

int main(void) {
	
	int n = 30;
	
	// Loop across the numbers 
	for(int i=2; i<=n;i++){
		
		// set a flag to check if not prime number
		int not_prime =0;

		for (int j = 2; j < i; j ++) {
			
			// check if a number is divisble	
			if (i%j==0) {
			not_prime++;
			break;
			}
			}

		// its a prime number
		if (not_prime==0) {
			printf("Prime Number %d \n", i);
		} 

	}

}
