#include <stdio.h>
#include <stdlib.h>

//∆Â≈Ã¥Û–° 
#define ROW 15
#define COL 15

int board[ROW][COL]={0};


void initBoard(){
	for(int i=0;i<ROW;i++){

	
		for(int j=0;j<COL;j++){
			board[i][j]=0;

		
	}
}

 
 
 }

 void printBoard(){
 	printf(" ");
 	for(int j=0;j<COL;j++){

 		printf("%2d",j);
 		
	 }

	 print("\n");
	 
	 for(int i=0;i<ROW;i++){
	 	printf("%2d",i);
	 	for(int j=0;j<COL;j++){

	 		if(board[i][j]==0){
	 			printf(".");
	 			
			 } else if(board[i][j]==1){
			 	printf("hei");



			
			 }else{
			 	printf("bai");
			 	
			 }
		 }
		 printf("\n");
	 }
 }
 int isInBoard(int x,int y){
 	return x>=0 &&x<ROW &&y>=0 &&y<COL;
	  
 }
 
 
 
 int placeChess(int X, int y,int player){
 	if(isInBoard(x,y)&&board[x][y]==0){
 		board[x][y]=player;
 		return 1;
 		
	 }
	 return 0;
 }
 
 int checkWin(int x,int y,int player){
 	int dirs[4][2]={{0,1},{1,0},{1,1},{1,-1}};
 	
 
 
 
 
 	for(int d=0;d<4;d++){
 		int count=1;
 		int dx=dirs[d][0];
 		int dy=dirs[d][1];
 		
 		int i=x+dx;
 		int j=y+dy;
 		
 		while(isInBoard(i,j)&&board[i][j]==player){
 			count++;
			 i+=dx;
			 j+=dy;		 }
			 
			 i=x-dx;
			 j=y-dy;
			 while(isInBoard(i,j)&&board[i][j]==player){
			 	count++;
			 	i-=dx;
			 	j-=dy;
			 	
			 }
			 if (count>=5){
			 	return 1;
			 	
			 }
	 }
 return 0;
 
 }
 int main(){
 	initBord();
 	int player=1;
 }
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	
	return 0;
}
