//Name: ¼B®a¦¨
//Date: 2023/5/16
//Last Update: 2023/5/16
//Problem statement: Document class and Inheritance class File and Email demonstration

#pragma once
#include "Email.h"

Email::Email() //default constructor
{
	sender = ""; //initialize
	recipient = ""; //initialize
	title = ""; //initialize
}

Email::Email(string text, string sender, string recipient, string title) : Document(text) //constructor, inherited from Document
{
	this->sender = sender; //initialize to sender
	this->recipient = recipient; //initialize to recipient
	this->title = title; //initialize to title
}

string Email::getSender() //function getSender to return sender
{
	return sender; //return sender
}

string Email::getRecipient() //function getRecipient to return recipient
{
	return recipient; //return recipient
}

string Email::getTitle() //function getTitle to return title
{
	return title; //return title
}

Email& Email::operator=(const Email& other) //operator overloading =
{
	Document::operator=(other); //call Document operator overloading =
	sender = other.sender; //assign sender to other.sender
	recipient = other.recipient; //assign recipient to other.recipient
	title = other.title; //assign title to other.title
	return *this; //return this
}