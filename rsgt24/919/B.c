#include <stdio.h>



int main(void) {
	unsigned long long int n;
	
	    scanf("%llu",&n);
	    unsigned long long int a=n;
	    unsigned long long int x;
        int sum=0;
        while(n>0)
        {
            int y=n%10;
            sum=sum+y;
            n=n/10;
        }
        x=sum%10;
        if(x==0)
        printf("%llu\n",a*10);
        else
        printf("%llu\n",(10-x)+a*10);
	return 0;
}