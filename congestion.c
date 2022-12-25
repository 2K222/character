#include <stdio.h>
main()
{
int bcktsize,pkt[25],i,j,iter,rate, line,total=0;
printf("Enter the bucket size and rate (in Mb):");
scanf ("%d",&bcktsize); 
printf("Enter the bucket rate (in Mb):");
scanf("%d",&rate);
printf("Enter the number of lines:");
scanf("%d",&line);
printf("Enter input packet rate of %d lines:\n", line);
for(i=0;i<line;i++)
scanf("%d",&pkt[i]);
printf ("enter number of iterations\n");
scanf("%d",&iter); 
for(i=0;i<iter;i++)
{
printf("\n iteration %d\n",i+1);
for(j=0;j<line;j++)
{
total+=pkt[j];
if(total<=bcktsize)
printf("\n input from line %d with rate %d is added to the bucket\n current bucket size in (Mb) is %d\n",j+1,pkt [j],total);
else
{
total-=pkt[j];
printf("\n input from line %d with rate %d is thrown out of the bucket'n current bucket size in (Mb) is %d\n",j+1,pkt[i],total);
}
}
if(total<=rate)
{

printf("packet sent to output line at %d",total);
total=0;
printf("current bucket size is %d",total);
}

else
{

total-=rate;
printf("\n...................\n");
printf("in packet sent to output line at rate %d in current bucket size in (Mb) is %d", rate, total);
printf("......................\n");
}
}
}
