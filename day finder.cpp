#include<stdio.h>
#include<conio.h>
int main()
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date,mon,year,d,m,y,count=0,rem;
	printf("enter a valid date(dd/mm/yyyy)-");
	scanf("%d/%d/%d",&date,&mon,&year);
	if(((date>31)&&((mon==1)||(mon==3)||(mon==5)||(mon==7)||(mon==8)||(mon==10)||(mon==12)))||
	    ((date>30)&&((mon==4)||(mon==6)||(mon==9)||(mon==11)))||
		((year%400==0||(year%4==0&&year%100!=0))&&(mon==2&&date>29))||(mon==2&&date>28))
	    {
	    	printf("date does not exists");
	    }
	else
  {
	
	for(y=1;y<year;y++) 
	{
		if(y%400==0||(y%4==0&&y%100!=0))
		{
			month[1]=29;
		}
		else
		{
			month[1]=28;
		}
		for(m=0;m<12;m++)
		{
			count=count+month[m];
		}
	}
	for(m=1;m<mon;m++)
	{
		if(year%400==0||(year%4==0&&year%100!=0))
		{
			month[1]=29;
		}
		else
		{
			month[1]=28;
		}
		count=count+month[m];
	}
	for(d=1;d<=date;d++)
	{
		count=count+1;
	}
	printf("\n\n The day is- ");
	rem=(count%7)-1;
	switch(rem)
	{
		case 0:
			printf("MONDAY");
			break;
		case 1:
			printf("TUESDAY");
			break;
		case 2:
			printf("WEDNESDAY");
			break;
		case 3:
			printf("THURSDAY");
			break;
		case 4:
			printf("FRIDAY");
			break;
		case 5:
			printf("SATURDAY");
			break;
		default:
			printf("SUNDAY");
			break;
	}
  	getch();
  	return(0);
  }
  getch();
}
