#pragma once
#include "Document.h"

class File :public Document
{
private:
	string filename;
public:
	File();
	File(string text, string filename);
	string getPathname();
	void setPathname(string filename);
	File& operator=(const File& other);
};