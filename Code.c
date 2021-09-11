#include<stdio.h>
#include<stdlib.h>
void high_scores();
void help();
void start();
void main()
{
	char opt;
	printf("Press 1 to start the game\nPress 2 to view previous scores\nPress 3 for help\nPress 0 to exit\n");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
		start();
		break;
		
		case 2:
	   	high_scores();
		break;
		
		case 3:
		help();
		break;
		
		default:
		exit(1);
	}
}
void start()
{
	int choice,count=0,score;
	char name[50];
	FILE *fp;
	if((fp=fopen("QUIZ GAME USING C.txt","a"))==NULL)  
    {  
      printf("Error opening the file\n");  
    }  
    
    printf("\nPlease enter your name: ");  
    scanf("%s",name);
    
    printf("$$$$$$$$$$$$$$ START $$$$$$$$$$$$$$");
    
    printf("\nQ.1)In India, when did the second phase of COVID-19 vaccination start?\n1)December 2020\n2)January 2021\n3)February 2021\n4)March 2021\n");
    scanf("%d",&choice);
    if(choice==4){
    	printf("Awesome !!!\n");
    	++count;
	}
	else
	printf("Wrong answer, Correct option is March 2021\n ");
	
	printf("\nQ.2)In terms of Geographical area, which among the following is the largest state of India ?\n1)Rajasthan\n2)Maharashtra\n3)Madhya Pradesh\n4)Goa\n");
    scanf("%d",&choice);
    if(choice==1){
    	printf("Awesome!!!\n");
    	++count;
	}
	else
	printf("Wrong answer, Correct option is Rajasthan\n");
    
	printf("\nQ.3) MS-Word is an example of____\n1)An operating system \n2)A processing device\n3)Application software\n4)An input device\n");
    scanf("%d",&choice);
    if(choice==3){
    	printf("Awesome !!!\n");
    	++count;
	}
	else
	printf("Wrong answer, Correct option is Application software\n ");
	
	printf("\nQ.4) Ctrl, Shift and Alt are called _____ keys \n1)Modifier\n2)Alphanumeric\n3)Function\n4)Adjustment\n");
    scanf("%d",&choice);
    if(choice==1){
    	printf("Awesome!!!\n");
    	++count;
	}
	else
	printf("Wrong answer, Correct option is Modifier\n");
	
	printf("\nQ.5)A computer cannot boot if it does not have the _____\n1)Compiler\n2)Loader\n3)Operating System\n4)Balancer\n");
    scanf("%d",&choice);
    if(choice==3){
    	printf("\nAwesome !!!\n");
    	++count;
	}
	else
	printf("\nWrong answer, Correct option is Operating System \n ");
	
	printf("\nQ.6)What is the name of Russia's COVID 19 vaccine?\n1)Aura V\n2)Sputnik V\n3)Vostok 1\n4)Covaxin\n");
    scanf("%d",&choice);
    if(choice==2){
    	printf("\nAwesome !!!\n");
    	++count;
	}
	else
	printf("\nWrong answer, Correct option is Sputnik V\n");
	
	printf("\nQ.7)A light sensitive device that converts drawing,printed text in digital form\n1)Plotter\n2)Keyboard\n3)Scanner\n4)OMR\n");
    scanf("%d",&choice);
    if(choice==3){
    	printf("\nAwesome !!!\n");
    	++count;
	}
	else
	printf("\nWrong answer, Correct option is Scanner\n");
   
    printf("\nQ.8) Which of the following is the name of a month in the Indian National Calendar\n1)Ashadh\n2)Nakshatra\n3)Dwadash\n4)Poornima\n");
    scanf("%d",&choice);
    if(choice==1){
    	printf("\nAwesome !!!\n");
    	++count;
	}
	else
	printf("\nWrong answer,Correct option is Ashadh\n ");
	
	printf("     \n-----------E N D-----------\n      ");
	if(count>0)
	{
		printf("\nYou Scored %d Out of 40",count*5);
		score=count*5;
		fprintf(fp,"%s %d  ",name,score);  
        fclose(fp);
	}
	else{
	   printf("\nTry Again!!!!");
	   printf("\nTry Try But Don't Cry !!"); 
    }
}
void high_scores()
{
	int ch,score; 
	char name[50]; 
    
    FILE *fp;  
    if((fp=fopen("QUIZ GAME USING C.txt", "r"))==NULL)  
          {  
                printf("\nNo games played yet!\n");  
          }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS\n");  
    while(fscanf(fp,"%s %d %d",name,&score) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("\n%s     %d points\n\n",name,score);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
}
void help()  
{  
     int ch;  
  
     printf("\n\n ************************* GAME HELP *************************");  
      
     printf("\n .................... C program Quiz Game...........\n");  
     printf("\n >> There will be a total of 8 questions");  
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the right option");   
     printf("\n >> Each question will carry 5 points");  
     printf("\n >> There is no time limit .But don't take too much time ");  
     printf("\n >> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
}
 


