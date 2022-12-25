#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n,r,a;
		n=5;
		printf("The number of packets are %d\n0",n);
		for(i=1;i<=n;i++)
		{
			printf("The packet sent is:%d\n",i);
			r=rand()%2;
			if(r==1)
			{
				a=rand()%2;
				if(a==1)
				{
					printf("ack no:%d\n",i+1);
				}
				else
				{
					printf("no ack no:%d\n",i+1);
					i--;
				}
			}
			else
			{
				printf("time out,resend\n");
				i--;
			}
		}
}
