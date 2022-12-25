#include<stdio.h>
main()
{
	int windowsize, sent=0,ack,i;
	printf("enter window size\n");
	scanf("%d",&windowsize);
	while(1)
	{
		for(i=0;i<windowsize;i++)
		{
			printf("frame %d has been transmitted\n",sent+1);
			sent++;
			if(sent==windowsize)
			break;
		}
		ack=rand()%windowsize+1;
		printf("last ack recived=%d\n",ack+1);
		if(ack==windowsize)
		break;
		else
		sent=ack;
	}
}
