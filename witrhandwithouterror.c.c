#include<stdio.h>
main()
{
	int frame[25],gen[10],temp[30],i,j,m,n,count=0;
	printf("enter the lengthe of message frame:");
	scanf("%d",&n);
	printf("enter message bits:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&frame[i]);
	}
	printf("enter length of generator polynomial:");
	scanf("%d",&m);
	printf("enter polynomial bits:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&gen[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[i]=frame[i];
	}
	for(i=n;i<(m+n-1);i++)
	{
		temp[i]=0;
		frame[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]==1)
		for(j=0;j<m;j++)
		{
			temp[i+j]=temp[i+j]^gen[j];
		}
		else
		for(j=0;j<m;j++)
		{
			temp[i+j]=temp[i+j]^0;
		}
	}
	printf("The transmitted frame is:");
	for(i=0;i<m+n-1;i++)
	{
		frame[i]=frame[j]^temp[i];
		printf("%d",frame[i]);
	}
	printf("\n Enter the recived message:");
	for(i=0;i<m+n-1;i++)
	{
		scanf("%d",temp[i]);
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]==1)
		for(j=0;j<m;j++)
		{
			temp[i+j]=temp[i+j]^gen[j];
		}
		else
		for(j=0;j<m;j++)
		{
			temp[i+j]=temp[i+j]^0;
		}
	}
	for(i=0;i<m+n-1;i++)
	{
		if(temp[i]==0)
		count++;
	}
	if(count==(m+n-1))
	printf("\n The recived messagae is correct");
	else
	printf("\n The recived message has an error");
}
