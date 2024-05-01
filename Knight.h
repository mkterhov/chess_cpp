#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	Knight(const int&, const std::string&);
	virtual ~Knight() override;
};

