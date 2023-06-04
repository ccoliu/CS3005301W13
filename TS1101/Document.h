#pragma once
#include <string>
using namespace std;

class Document
{
private:
	string text;
public:
	Document();
	Document(string text);
	const string getText() const;
	Document& operator=(const Document& other);
};