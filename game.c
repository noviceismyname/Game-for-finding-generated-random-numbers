#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


void main()
{
	int i,realnumber,guess,flag=1,t;
	char plynm[30];
	realnumber=rand();
	system("cls");
	printf("\n\n\t ENTER YOUR NAME : ");
	gets(plynm);
	goto enuu;
	enuu:
	system("cls");
	printf("\n\n\tWelcome %s \t\n\n",plynm);
	printf("\n\n\tIn this game the computer the will generate random numbers\t\n\n"); 
	printf("\n\n\tand you to guess them in 10 turns.\t\n\n");
	printf("\n\n\t Hints will be provided to you \t\n\n");
    
	printf("\n\n\t PRESS Y FOR PLAYING THE GAME \t\n\n");
	printf("\n\n\t PRESS Q TO QUIT");
	if(toupper(getch())=='Y')
	{
		goto game;
	}
	else
	{
	   exit (1);
	}
	
	system("cls");
    game:
	printf("\n\n\tStart guessing\t\n\n");
	for(i=1;i<=10;i++)
	{
	printf("\n\n\tWhat's your %d guess : ",i);
	scanf("%d",&guess);
	if(guess>realnumber)
	{
		printf("\n\n\t Your guess is greater than the generated number \t\n\n");
	}
	else if(guess<realnumber)
	{printf("\n\n\t Your guess is lesser than the generated number \t\n\n");}
	else
	{
		flag=1;
	break;
	}
  }
  system("cls");
  if(flag)
  	{
	printf("\n\n\t\tYou are the WINNER %s. No. of tries %d",plynm,i);
    }
  else
  {
  	printf("/n/n/tYou lost %s. The number was %d/t/n/n",plynm,realnumber);
  }
  getch();
}

