#include<stdio.h>
int main()
{
	int seat,a,b;
//	printf("\nHow many seat no.s you want to check");
	scanf("\n%d",&b);
	for(a=0;a<b;a++)
	{
//		printf("\nEnter a Seat No.");
		scanf("\n%d",&seat);
		if(seat%6==0 || seat%6==1)
		{
			if(seat%12==0)
			{
				//printf("%d",seat);
				printf("\n%d",seat-11);
				printf(" WS");
			}
				else if(seat==1 || seat==13 || seat==25 || seat==37 || seat==49 || seat==61 || seat==73 || seat==85 || seat==97)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+11);
				printf(" WS");
			}
				else if(seat==6 || seat==18 || seat==30 || seat==42 || seat==54 || seat==66 || seat==78 || seat==90 || seat==102)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+1);
				printf(" WS");
			}
				else
			{
			//	printf("%d",seat);
				printf("\n%d",seat-1);
				printf(" WS");
			}	
		
		}
		else if(seat%3==2)
		{
			if(seat==2 || seat==14 || seat==26 || seat==38 || seat==50 || seat==62 || seat==74 || seat==86 || seat==98)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+9);
				printf(" MS");
			}
			else if(seat==11 || seat==23 || seat==35 || seat==47 || seat==59 || seat==71 || seat==83 || seat==95 || seat==107)
			{
			//	printf("%d",seat);
				printf("\n%d",seat-9);
				printf(" MS");
			}
			else if(seat==5 || seat==17 || seat==29 || seat==41 || seat==53 || seat==65 || seat==77 || seat==89 || seat==101)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+3);
				printf(" MS");
			}
			else
			{
			//	printf("%d",seat);
				printf("\n%d",seat-3);
				printf(" MS");
			}
		}
		else
		{
			if(seat==3 || seat==15 || seat==27 || seat==39 || seat==51 || seat==63 || seat==75 || seat==87 || seat==99)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+7);
				printf(" AS");
			}
			else if(seat==10 || seat==22 || seat==34 || seat==46 || seat==58 || seat==70 || seat==82 || seat==94 || seat==106)
       		{
        	//	printf("%d",seat);
        		printf("\n%d",seat-7);
        		printf(" AS");
			}
			else if(seat==4 || seat==16 || seat==28 || seat==40 || seat==52 || seat==64 || seat==76 || seat==88 || seat==100)
			{
			//	printf("%d",seat);
				printf("\n%d",seat+5);
				printf(" AS");
			}
			else
			{
			//	printf("%d",seat);
				printf("\n%d",seat-5);
				printf(" AS");
			}
		}
	}
return 0;	
}