#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
char name[108];
int ch;
int res;
int AI_score,Me_score;
void choice(int i) {
printf("\e[1;33m");
    if(i==1)
        printf("Rock\n");

    else if(i==2)
        printf("Paper\n");

    else if(i==3)
        printf("Scissor\n");

    else {
        printf("Invalid!!!\nEnter again: ");
        scanf("%d",&ch);
        choice(ch);
    }
printf("\e[0;94m");
}
void checkWinner(int me,int AI){
printf("\e[1;91m");
if(me==AI){
printf("-----------------");
printf("\n|  Match Draw   |\n");
printf("-----------------\n");
}
else if(me==1 && AI==3){
printf(" ----------------------");
printf("\n| %s is the Winner  |\n",name);
printf(" ----------------------\n");
Me_score+=1;
}
else if(me==3 && AI==1){
printf(" -----------------------");
printf("\n| AI is the Winner!!!  |\n");
printf(" -----------------------\n");
AI_score+=1;
}

else if(me<AI){
printf(" -----------------------");
printf("\n| AI is the Winner!!!  |\n");
printf(" -----------------------\n");
AI_score+=1;
}
else{
printf(" ----------------------");
printf("\n| %s is the Winner  |\n",name);
printf(" ----------------------\n");
Me_score+=1;
}

}

int main()
{
    int ai,pre=0;char req;
    
    char me[7];
    
    printf("\n\e[1;94m Enter your Name:");
    scanf("%s",&name);
    clrscr();
    while(1) {
    printf("\e[1;32m");
        printf("\nChoice --> 1.Rock 2.Paper 3.Scissor\n");
        scanf("%d",&ch);
        printf("\e[1;33m\n");
        printf("%s --> ",name);
        choice(ch);
        while(1) {
        srand(time(NULL));
            ai=rand()%3;
            if(pre==ai)
            continue;
            
            if(ai!=0){
            pre=ai;
                break;
             }
                
        }
        printf("\n\e[1;33m");
        printf("AI --> ");
        choice(ai);
        printf("\n");
        checkWinner(ch,ai);
        
        printf("\e[0;97m____________________________________\n");
        printf("\n\n1.Play Again | 2.Display Score\n");
       scanf("%d",&res);
       if(res==2)
       break;
       clrscr();

    }
    clrscr();
   printf("\e[1;94m____________________________________\n\n");
    printf("\t%s\t|\tAI\n",name);
   
   printf("\e[1;94m____________________________________\n\n");
    printf("\t%d\t|\t%d\n",Me_score,AI_score);
   
    
   printf("\e[1;94m____________________________________\n\n");
    
    
        printf("\e[1;32m");
    if(Me_score>AI_score)
    printf("\n| %s is the Winner  |\n",name);
    
    else if(Me_score<AI_score)
    printf("\n| AI is the Winner!!!  |\n");
    
    else
    printf("\n|    Draw     |\n");
    printf("\e[0;97m");
    return 0;
}
    
