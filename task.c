#include<stdio.h>
#include<stdlib.h>

int main()
{
	int p,q;
	printf("Enter the two values to swap\n");
	scanf("%d%d",&p,&q);
	printf("before swapping p=%d and q=%d\n",p,q);
	
	p=p+q;
	q=p-q;
	p=p-q;
	
	printf("after swapping p=%d and q=%d",p,q);
	return 0;
}
