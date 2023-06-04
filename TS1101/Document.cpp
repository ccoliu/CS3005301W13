//Name: ¼B®a¦¨
//Date: 2023/5/16
//Last Update: 2023/5/16
//Problem statement: Document class and Inheritance class File and Email demonstration

#include "Document.h"

Document::Document() //default constructor
{
	text = ""; //initialize
}

Document::Document(string text) //constructor
{
	this->text = text; //initialize to text
}

const string Document::getText() const //constant function getText to return text
{
	return text; //return text
}

Document& Document::operator=(const Document& other) //operator overloading =
{
	text = other.text; //assign text to other.text
	return *this; //return this
}