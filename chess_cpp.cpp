#include <iostream>
#include "Piece.h"
#include "Pawn.h"
#include "Knight.h"
#include "Bishop.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"

Piece** setUpPiecesByColor(const std::string& color)
{
    Piece** pieces = new Piece * [16];
    int id = 0;
    for (int i = 0; i < 8; i++) {
        pieces[i] = new Pawn(id++, color);
    }

    pieces[8] = new Knight(id++, color);
    pieces[9] = new Knight(id++, color);
    pieces[10] = new Bishop(id++, color);
    pieces[11] = new Bishop(id++, color);
    pieces[12] = new Rook(id++, color);
    pieces[13] = new Rook(id++, color);
    pieces[14] = new Queen(id++, color);
    pieces[15] = new King(id++, color);
    
    return pieces;
}

int main() {
    std::cout << "Setting up black and white pieces..." << std::endl;

    Piece** whitePieces = setUpPiecesByColor("white");
    Piece** blackPieces = setUpPiecesByColor("black");

    for (int i = 0; i < 16; i++) {
        delete whitePieces[i];
        delete blackPieces[i];

    }
    delete[] whitePieces;
    delete[] blackPieces;

    return 0;
}