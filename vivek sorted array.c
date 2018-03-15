#include <stdio.h>
int main(void) 
{
	int i,j,v[3],n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(v[i]>v[j])
		{
		t=v[i];
		v[i]=v[j];
		v[j]=t;
		}
		}
	}
		for(i=0;i<n;i++)
		printf("%d\n",v[i]);
	return 0;
}
