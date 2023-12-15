#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int r,int c,vector<vector<char>>& board,char val){

        for(int i=0;i<9;i++) if(board[i][c]==val) return false;
 
        for(int i=0;i<9;i++) if(board[r][i]==val) return false;

        int box_row=r-r%3,box_col=c-c%3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[box_row+i][box_col+j]==val) return false;
            }
        }
        return true;
        
    }
    bool rec(int level,int col,vector<vector<char>>& board){

        if(level==9) return true;
        
        if(col==9) return rec(level+1,0,board);
        
        if(board[level][col]!='.') return rec(level,col+1,board);
        
        for(char c='1';c<='9';c++){
            if(check(level,col,board,c)){
                board[level][col]=c;

                if(rec(level,col+1,board)) return true;
                board[level][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {

        rec(0,0,board);
    }
};