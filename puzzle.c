#include <stdio.h>
int main(){
	int ch,intial[5][5],goal[5][5],i,j,out=0,place=0;
	while(1){
	printf("1.Accept Intial state and Goal state\n");
	printf("2.Display Intial state and Goal state\n");
	printf("3.Display number of tiles out of sequence\n");
	printf("4.Display number of tiles in place\n");
	printf("5.Exit\n");
	printf("Enter ur choice:\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: printf("Use 0 in place of blank tile\n");
			printf("Enter Intial State Matrix:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					scanf("%d",&intial[i][j]);
				}	
			}
			printf("Enter Goal State Matrix:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					scanf("%d",&goal[i][j]);
				}	
			}
			break;
		case 2:	printf("Intial State Matrix:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",intial[i][j]);
				}	
				printf("\n");
			}
			printf("Goal State Matrix:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",goal[i][j]);
				}	
				printf("\n");
			}
			break;
		case 3:	for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(intial[i][j] != goal[i][j]){
						if(intial[i][j]==0 )
							out--;
						out++;
					}
				}
			}
			printf("number of tiles out of sequence: %d\n",out);
			break;
		case 4:	for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					if(intial[i][j] == goal[i][j]){
						place++;
					}
				}
			}
			printf("number of tiles in place: %d\n",place);
			break;
		case 5: return 0;					
	}
	}
}
