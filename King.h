#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	King(const int&, const std::string&);
	virtual ~King() override;
};

