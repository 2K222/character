#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	int i,j=0,l;
	char dle,stx,etx;
	char str[40],start[5],end[5],final[60],find[50];
	printf("enter dlc:\n");
	dle=getche();
	printf("\n Enter start character:\n");
	stx=getche();
	printf("\n Enter end character:\n ");
	etx=getche();
	start[0]=dle;
	start[1]=stx;
	start[2]='\0';
	end[0]=dle;
	end[1]=etx;
	end[2]='\0';
	printf("\n enter the string:\n");
	gets(str);
	l=strlen(str);
	for(j=0;i<1;i++)
	{
		if(str[i]==dle||str[i]==stx||str[i]==etx)
		{
			find[j]=str[i];
			j++;
			
		}
		find[j]=str[i];
		j++;
		
	}
	find[j]='\0';
	strcpy(final,start);
	strcat(final,find);
	strcat(final,end);
	printf("\n the stuffed string is:\n");
	puts(final);
	
}
