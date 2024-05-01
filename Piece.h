#pragma once
#include <string>

class Piece
{
protected:
	int m_id;
	std::string m_color;
public:
	Piece(const int&, const std::string&);
	virtual ~Piece() = 0;
};

