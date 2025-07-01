#include <stdio.h>
char board[3][3];

void initializeBoard(){
    char ch='1';
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            board[i][j] = ch++;

        }
    }
}

void displayBoard(){
    printf("\n");
    for (int i=0;i<3;i++){
        printf("%c | %c | %c ", board[i][0],board[i][1],board[i][2]);
        if (i!=2){
            printf("\n---|---|---|\n");
        }
        printf("\n")
    }
}


//check for win condition
int checkwin(){
    for (int i=0;i<3;i++){
        if ((board[i][0]==board[i][1]) && board[i][1]==board[i][2]){
            return 1;
        }else if ((board[0][i]==board[1][i] && board[1][i]==board[2][i])){
            return 1;
        }
    }
    //check diagonals
       if (board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        return 1;
    }else if (board[0][2]==board[1][1] && board[1][1]==board[2][0]){
        return 1;
    }
    return 0;

}

//check if board is full
int isdraw(){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i][j]!='X' && board[i][j] !='O'){
                return 0;
            }
        }
    }return 1;
}

//make a move
int makemove(char player){
    int choice;
    printf("Player %c , enter s number(1-9)   : ")
}