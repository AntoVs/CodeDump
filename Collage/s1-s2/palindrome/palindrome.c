#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c,n=0,rev=0,d;
	printf("enter a number");
	scanf("%d",&a);
	b=a;
	c=a;
	
	while(a!=0)
		{
		a=a/10;
		n++;
		}
	while(b!=0)
		{
		d=b%10;
		b=b/10;
		rev=rev+(d*pow(10,--n));
		printf("%d \n",rev);
		}
	printf("rev is %d \n",rev);
	if(rev==c)
		{
		printf("palindrome \n");
		}
	else
		{
		printf("not a palindrome \n");
		}
	return 0;
}
