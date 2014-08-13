/* 
 * First term in Fibonacci that contains 1000 digits
 */ 

#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <gmp.h>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
	
	char str[1001];
	char* tmp;
	//initialize bignum
	mpz_t integ1, integ2, integ3;
	mpz_init(integ1);
	mpz_init(integ2);
	mpz_init(integ3);
	long int i = 3;
	mpz_set_ui(integ1, 1);
	mpz_set_ui(integ2, 1);
	
	while(true) {
		
		//cout<<i<<endl;
		
		//adding operation
		mpz_add(integ3, integ1, integ2);
		
		//swapping operations
		mpz_set(integ1, integ2);
		mpz_set(integ2, integ3);
		//mpz_out_str(stdout, 10, integ3);
		
		//checking the number of digits
		tmp = mpz_get_str(str, 10, integ2);
		//int z = mpz_sizeinbase ( integ2, 10);
		
		cout<<strlen(str)<<endl;
		
		if(strlen(str) > 999)
			break;
		
		i++;
	}
	
	cout<<i<<endl;
	
	//clear bignum
	mpz_clear(integ1);
	mpz_clear(integ2);
	
	return 0;
}