#include<stdio.h>
#include<time.h>
int rolldie();
int player1=0;
int player2=0;
int main(void)
{
time_t t;
while(player1<25)
{        printf("Player1 Turn\n"); 
  int value1 = rolldie(); 
  printf("Die rolled is %d\n",value1);   
       if(player1<25) 
  {  
 player1+=value1;
   } 
 else   
 {      
  player1=25;  
  }  
  if(player1==3)
    {      
  player1=17;    
    printf("Hurry you’ve Climbed ladder\n");
    }  
  else if(player1==10)
    {    
    player1=19;     
   printf("Hurry you’ve Climbed ladder\n");
    }  
  else if(player1==16) 
   {     
   player1=4;      
  printf("Uff you was bite by a snack\n");  
  }
 else if(player1==24)  
  {     
   player1=9;   
     printf("Uff you was bite by a snack\n");  
  } 
   if(player1>25)  
  {  
  player1=25;   
 }
 printf("The Position of Player1 is %d\n",player1); 
   if(player1>=25)
 {   
  printf("Hurry player1 Won the Game\n");    return 0;
 }
 printf("Player2 Turn\n");
 int value2 = rolldie();
 printf("Die rolled is %d\n",value2);
 if(player2<25)  
  {   
 player2+=value2; 
   }   
 else 
   {    
    player2=25;  
  } 
   if(player2==3) 
   {      
  player2=17;      
  printf("Hurry you,ve Climbed ladder\n"); 
   }   
 else if(player2==10) 
   {      
  player2=19;     
   printf("Hurry you,ve Climbed ladder\n");
    }  
 else if(player2==16)   
 {      
  player2=4;    
    printf("Uff you was bite by a snack\n");  
  }  
  else if(player2==24) 
   {      
  player2=9;       
 printf("Uff you was bite by a snack\n"); 
   } 
   if(player2>25) 
   {  
  player2=25; 
   }
 printf("The Position of Player2 is %d\n",player2);
 if(player2>=25)
 {   
  printf("Hurry player2 Won the Game\n");  
   return 0;
 }
 }      
    return 0;
 }
 int rolldie()
 {  
  time_t t;   
   char dummy;   
  srand((unsigned)time(&t)); 
 printf("\nPress<Enter>to Roll");   
  scanf("%c",&dummy);  
   return (rand()%6+1);    }



