#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	Queen(const int&, const std::string&);
	virtual ~Queen() override;
};

