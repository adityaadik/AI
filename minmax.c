#include<stdio.h>

static int MAX=1000;
static int MIN=-1000;
int i;
int minmax(int depth,int nodeIndex,int maximizingPlayer,int values[])
  {
	if(depth==3)
	return values[nodeIndex];
	if(maximizingPlayer)
	{
	int best=MIN;
	for(i=0;i<2;i++)
	{
	int val=minmax(depth+1,nodeIndex*2+i,0,values);
	if(best<val)
	best=val;
	}
	return best;
	}
	else
	{
	int best=MAX;
	for(i=0;i<2;i++)
	{
	int val=minmax(depth+1,nodeIndex*2+i,1,values);
	if(best>val)
	best=val;
	}
	return best;
	}
	}
	void main()
	{
	int values[]={-2,6,8,10,-4.-9,0,12};
	printf("Optimal Value Is : %d \n",minmax(0,0,1,values));
 }
