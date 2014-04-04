#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <gmp.h>

int main() {
    mpz_t result;
    int base = 2;
    int exponent = 1000;
    char string[1000];
    int sum = 0;
    
    mpz_init(result);
    
    for(int i=0; i<1000; i++)
        string[i]=0;
    
    //do the power
    mpz_ui_pow_ui(result, base, exponent);
    
    //convert to string
    mpz_get_str(string,10, result);
    
    mpz_out_str(stdout, 10, result);
    fprintf(stdout, "\n%s\n", string);
    
    for(int i=0; i<1000; i++) {
        if(string[i]!=0)
            sum+=(string[i]-48);
    }
    
    fprintf(stdout, "%i\n", sum);
    
    
    return 0;
}