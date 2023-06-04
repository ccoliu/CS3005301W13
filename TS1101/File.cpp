//Name: ¼B®a¦¨
//Date: 2023/5/16
//Last Update: 2023/5/16
//Problem statement: Document class and Inheritance class File and Email demonstration

#include "File.h"

File::File() //default constructor
{
	filename = ""; //initialize
}

File::File(string text, string filename) : Document(text) //constructor
{
	this->filename = filename; //initialize to filename
}

string File::getPathname() //function getPathname to return filename
{
	return filename; //return filename
}

void File::setPathname(string filename) //function setPathname to set filename
{
	this->filename = filename; //set filename
}

File& File::operator=(const File& other) //operator overloading =
{
	Document::operator=(other); //call Document operator overloading =
	filename = other.filename; //assign filename to other.filename
	return *this; //return this
}

