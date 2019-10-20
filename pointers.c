#include <stdio.h>
void swap(int *x,int *y);
int main ()
{
	int x,y;
	printf("ENTER TWO NUMBER:\n");
	scanf("%d%d",&x,&y);
	printf("BEFORE SWAPPING:\n");
	printf("VALUE OF x= %d\n",x);
	printf("VALUE OF y =%d\n",y);
	swap(&x,&y);
	printf("\n AFTER SWAPPING\n");
	printf("VALUE OF x= %d\n",x);
	printf("VALUE OF y= %d\n",y);

}

void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("AFTER SWAPPING:\n");
	printf("VALUE OF x=%d\n,*x");
	printf("VALUE OF y=%d\n,*y");
}
