//
// Created by omars on 7/16/2024.
//

#include "ChessPiece.h"

class ChessPiece {

private:
    Color color;
    int xPos;
    int yPos;

private:

    virtual void move() = 0;
    virtual boolean check() = 0;
    virtual vector<Move> getPossibleMoves() = 0;


};
