# include<stdio.h>
# include<conio.h>
main()
{
	struct
	{
		int pred;
		int len;
		char lab;
	}nodeinfo[20];
int n,i,j,min,src,dst,inf=9999,net[20][20],k;
printf("\n Enter the number of nodes:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i<j)
{
	printf("\n Enter the cost of the link %d to %d:",i,j);
	scanf("%d",&net[i][j]);
	net[j][i]=net[i][j];
	net[i][i]=0;
	net[j][j]=0;
}
}
}
printf("\n Enter the source node:");
scanf("%d",&src);
printf("\n Enter destination node:");
scanf("%d",&dst);
for(i=1;i<=n;i++)
{
	nodeinfo[i].pred=0;
	nodeinfo[i].len=9999;
	nodeinfo[i].lab='t';
}
k=dst;
nodeinfo[dst].len=0;
nodeinfo[dst].lab='p';
do
{
	for(i=1;i<=n;i++)
	{
		if((net[k][i]!=0) && (nodeinfo[i].lab=='t'))
		{
			if(nodeinfo[k].len+net[k][i]<nodeinfo[i].len)
			{
			nodeinfo[i].pred=k;
			nodeinfo[i].len=nodeinfo[k].len+net[k][i];
	    	}
        }
	}   
min=inf;
for(i=1;i<=n;i++)
{
  if((nodeinfo[i].lab=='t') && (nodeinfo[i].len<min))	
  {
  	min=nodeinfo[i].len;
  	k=i;
  }
}	
nodeinfo[k].lab='p';
}
while(k!=src);
printf("\n cost of path between src and dst is=%d",nodeinfo[src].len);
printf("\n Shortest path is:\n");
do
{
	printf("\n %d to %d \n",k,nodeinfo[k].pred);
	k=nodeinfo[k].pred;
}
while(k!=dst);
getch();
}
