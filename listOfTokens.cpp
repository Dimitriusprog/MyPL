#include "listOfTokens.h"

ListOfTokens::ListOfTokens()
{
	norm_ = "[A-Za-z0-9\\.\\{\\}\\(\\)\\-\\+\\_\\=]";
	
	types_.push_back(Token("VAR", "[a-z][A-Za-z0-9]*"));
	types_.push_back(Token("ASSIGN", "="));
	types_.push_back(Token("NUMBER", "[-]?[1-9]+[0-9]*"));
}

std::vector<Token> ListOfTokens::getTypes()
{
	return types_;
}

std::string ListOfTokens::getNorm() const
{
	return norm_;	
}