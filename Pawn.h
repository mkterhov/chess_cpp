#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
	Pawn(const int&, const std::string&);
	virtual ~Pawn() override;
};

