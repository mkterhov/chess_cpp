#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	Bishop(const int&, const std::string&);
	virtual ~Bishop() override;
};

