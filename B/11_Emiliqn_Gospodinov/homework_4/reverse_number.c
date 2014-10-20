#include <stdio.h>

int main(){
	int n;
	int i=0;
	scanf("%d",&n);
	while(n!=0)
		{
 		i=i*10;
 		i=i+n%10;
 		n=n/10;
 		}
	printf("Obratno : %d \n",i);

	return 0;
}
