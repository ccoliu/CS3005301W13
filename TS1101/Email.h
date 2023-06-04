#pragma once
#include "Document.h"

class Email :public Document
{
private:
	string sender;
	string recipient;
	string title;
public:
	Email();
	Email(string text, string sender, string recipient, string title);
	string getSender();
	string getRecipient();
	string getTitle();
	Email& operator=(const Email& other);
};