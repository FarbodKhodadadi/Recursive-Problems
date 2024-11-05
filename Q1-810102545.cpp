#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

const string EMPTY = ".";
const string OCCUPIED = "1";
const string OBSTACLE = "*";
const int DIMENSION =8 ;

typedef vector<vector<string>> GamesBoard; 
bool Check(GamesBoard &board,int row, int col){
        
    for (int i = 0; i < row; i++) {
        if (board[i][col] == OCCUPIED)
            return false;
    }
    for (int i = 0; i <col; i++) {
        if (board[row][i] == OCCUPIED)
            return false;
    }

    for (int i = 1; i < DIMENSION; i++) {
        if((col-i)>=0 && (row-i)>=0){ //upper left
            if(board[row-i][col-i] == OCCUPIED) return false;}
        if((col+i)<=7 && (row-i)>=0){ //upper right 
            if(board[row-i][col+i] == OCCUPIED) return false;}
        if((col-i)>=0 && (row+i)<=7){ // bottom left
            if(board[row+i][col-i] == OCCUPIED) return false;}
        if((col+i)<=7 && (row+i)<=7){ // bottom right
            if(board[row+i][col+i]== OCCUPIED) return false;}
    }
    
        
    return true;
    
}

void Queens(int &count ,GamesBoard &board ,int col){

    if(col == DIMENSION){
        count ++;
        return;
    }

    for(int i=0 ; i<DIMENSION; i++){
        if(board[i][col] != OBSTACLE && Check(board, i, col)){
            board[i][col]= OCCUPIED;
            Queens(count, board, col+1);
            board[i][col]= EMPTY;
        }
    }
}

int main(){

    GamesBoard board( DIMENSION , vector<string>(DIMENSION));
    int count = 0;

    ReadInput(board);
    Queens(count ,board ,0);
    
    cout << count;
}
