#include<stdio.h>
int main()
{
int ch ,x=0,initial[5][5],i,j,y;
printf("Use 0 is place of blank title");
                printf("Enter the initial state of matrix or towards soluution\n:");
                for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                 scanf("%d",&initial[i][j]);
		
                  }
               
               }
  printf("display the initial state of matrix or towards soluution\n:");
                for(i=0;i<3;i++)
                {
                for(j=0;j<3;j++)
                {
                 printf("%d\t",initial[i][j]);
		
                  }
               printf("\n");
               }
while(1)
{
printf("1.check move\n 2.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the position in pair (1st position should be of blank title):0\n");
scanf("%d",&y);
for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   {
    if(x==initial[i][j])
     {
       printf("move is valid\n");
     }
     if (initial[i][j+1]==y)
         {
     printf("move is valid\n");   
         }
   else if (initial[i][j-1]==y)
         {
     printf("move is valid\n");   
         }
   else if (initial[i+1][j]==y)
         {
     printf("move is valid\n");   
         }
  else if (initial[i-1][j]==y)
         {
     printf("move is valid\n");   
         }
     else
       {
       printf("move is invalid\n");
       }
   }
}
break;

case 2: return 0;

}
}
}

