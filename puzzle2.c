#include<stdio.h>
 main()
{
int f[50][50],row,col,i,j,x,y,m,k,z,l,c,d,n;
printf("enter the  limit");
scanf("%d",&n);
printf("enter the first mtrix \n");
for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
     {
     scanf("%d",&f[i][j]);
      }
  }
printf("enter total no of moves");
scanf("%d",&m); 
for(z=0;z<m;z++)
{
printf("enter the two moves");
scanf("%d %d",&x,&y);


for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
    {
      if(f[i][j]==0)
        {
              k=i;
              l=j;
         }
}
}
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
    {
if(f[i][j]==x)
{
f[i][j]=x;
}


}

}
f[k][l]=y;
}
for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
    {
     printf("%d",f[i][j]);
}
printf("\n---\n");
}
}


