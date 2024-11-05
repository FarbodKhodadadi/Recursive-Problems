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
