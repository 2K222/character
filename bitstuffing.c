#include<stdio.h>
#include<string.h>
int main()
{
	int bit[10],stuff[50],final[100],flag[]={0,1,1,1,1,1,1,0},i,j,l,one=0,k;
	printf("Enter the length of bit stream:");
	scanf("%d",&l);
	printf("Enter the bit string:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&bit[i]);
	}
	j=0;
	for(i=0;i<l;i++)
	{
		if (bit[i]==1)
         	{
         		one++;
         		stuff[j]=1;
         		j++;
         		if (one==5)
         		{
         			stuff[j]=0;
         			j++;
         			one++;
			   }
		   }
		   else
		   {
		   	stuff[j]=0;
		   	j++;
		   	one=0;
		   }
		   }
		   for(i=0;i<8;i++)
		   {
		   	final[i]=flag[i];
		   }
		   for(k=0;k<j;i++,k++)
		   {
		   	final[i]=stuff[k];
		   }
		   for(k=0;k<8;k++,i++)
		   {
		   	final[i]=flag[k];
		   }
		   printf("the stuffed stream is:");
		   for(k=0;k<i;k++)
		   {
		   	printf("%d",final[k]);
		   }
	}
