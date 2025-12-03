#include<stdio.h>
int main()
{
	int a[10],n,i,pos,nv;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter index place ")
	scanf("%d",&pos);
	printf("enter new value")
	scanf("%d",&nv);
	a[pos]=nv;
	printf("The update Array is:\n")
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
