#include<stdio.h>
#include<conio.h>

int check (char a[9]) ;
int main()
{
    char first_player[108], sec_player[108], first_sign;
    char a[9]= {32,32,32,32,32,32,32,32,32},index,x='0',start;
    int b, c=1,I,key;
    printf("\033[0;33m") ;
    printf("Name of First Player:");
    gets(first_player);

    printf("Which sign do you want(x or o):");
    first_sign=getchar();
    printf("\033[0;32m\v") ;
    printf("Name of Second Player:");
    scanf("%s",&sec_player);

    if(first_sign=='x')
    {

        printf("%s have allocated 'o'\v",sec_player) ;
    }
    else
    {
        printf("%s have allocated 'x'\v",sec_player) ;
    }


    printf("\033[1;34m");

    printf("\n1 to proceed OR Anyother to exit:");
    scanf("%d",&key);
    if(key==1)
    {
        clrscr() ;
       
        for(index=1; index<=9; index++)
        {
        printf("\033[1;31m");
        if(key%2==0){
        printf("Move is yours %s\v\n",first_player);
        key++;
        }
        else{
        printf("Move is yours %s\v\n",sec_player);
        key++;
        }
        
            printf("\033[1;36m");

            printf(" %c | %c | %c\n",a[0],a[1],a[2]) ;
            printf("-----------\n") ;
            printf(" %c | %c | %c\n",a[3],a[4],a[5]) ;
            printf("-----------\n") ;
            printf(" %c | %c | %c\n",a[6],a[7],a[8]) ;
            printf("\n") ;
            printf("block no. (1 to 9):") ;

            scanf("%d", &b) ;

            if(c%2==0)
            {
                for(I=0; I<9; I++)
                    if(b==I+1)
                    {
                        a[I]='o';

                    }

            }
            else
            {
                for(I=0; I<9; I++)
                    if(b==I+1)
                    {
                        a[I]='x';
                    }
            }
            c=c+1;

            clrscr() ;
            if(c>=6)
            {
                x=check(a);
                if(x!='0')
                {
                    if(x==first_sign)
                    {
                        printf("\033[1;31m");
                        printf("%s is the winner",first_player);
                    }
                    else
                    {

                        printf("%s is the winner",sec_player);
                    }
                    break;
                }
            }


        }
    }

    else
    {
        printf("\033[1;31m");
        printf("\v\ndon't come again");
    }


    return 0;
}





int check(char a[9])
{
    if(a[0]==a[4] && a[0]==a[8] && a[0]!=32)
    {
        return a[0] ;

    }
    else if(a[0]==a[3] && a[3]==a[6] && a[3]!=32)
    {
        return a[3] ;

    }
    else if(a[0]==a[1] && a[1]==a[2] && a[1]!=32)
    {
        return a[2] ;

    }

    else if(a[1]==a[4] && a[4]==a[7] && a[4]!=32)
    {
        return a[4] ;

    }
    else if(a[2]==a[5] && a[5]==a[8] && a[5]!=32)
    {
        return a[5] ;

    }
    else if(a[2]==a[4]&& a[4]==a[6] && a[4]!=32)
    {
        return a[4] ;

    }
    else if(a[3]==a[4] && a[4]==a[5] && a[3]!=32)
    {
        return a[4] ;

    }
    else if(a[6]==a[7] && a[7]==a[8] && a[6]!=32)
    {
        return a[6] ;

    }

}












