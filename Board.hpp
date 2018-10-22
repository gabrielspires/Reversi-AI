#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Board
{
private:
    vector<vector<int>> board = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 2, 0, 0, 0},
        {0, 0, 0, 2, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };
public:
    Board(/* args */);
    ~Board();
    vector<vector<int>> getBoard();

    void PrintBoard();
};

Board::Board(/* args */)
{
}

Board::~Board()
{
}

void Board::PrintBoard(){
    int rowNumber = 1;
    cout << "  a b c d e f g h\n";
    for(auto& row : board){
        cout << rowNumber << " ";
        for(auto& pos : row)
            ((pos != 0) ? cout << pos << " " : cout << "  ");
        cout << rowNumber++ << endl;
    }
    cout << "  a b c d e f g h\n";
}

#endif