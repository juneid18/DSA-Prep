#include<stdio.h>
#include<stdbool.h>

char board[20][20];
int n;

bool isSafe(char board[][20], int row, int col, int n){
    // Checking Horizontally
    for(int i = 0; i < n ; i++){
        if(board[row][i] == 'Q'){
            return false;
        }
    }

    // Checking Vertically
    for(int j = 0; j < n ; j++){
        if(board[j][col] == 'Q'){
            return false;
        }
    }

    // Checking Left Diagonal
    for(int i = row , j = col; i >=0 && j >=0; i-- , j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    // Checking Right Diagonal
    for (int i = row , j = col; i >=0 && j < n; i-- , j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

void printBoard(int n){
    for(int row= 0; row < n; row++){
        for(int col= 0; col < n; col++){
            printf("%c", board[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void solve(int row,int n){
    if(row == n){
        printBoard(n);
        return;
    }
    for(int col = 0; col < n ; col++){
        if(isSafe(board,row,col,n)){
            board[row][col] = 'Q';
            solve(row + 1,n);
            board[row][col] = '.';
        }
    }
}

int main(){
    n = 4;

    for(int row= 0; row < n; row++){
        for(int col= 0; col < n; col++){
            board[row][col] = '.';
        }
    }

    solve(0,n);
}