#pragma once
#include<iostream>
#include<string>

class Book
{

private:
	unsigned int id = 0;
	unsigned int year = 0;
	std::string name;
	std::string author;
	bool isBorrowed = false;
	
public:
	Book() = default;
	Book(unsigned int id, unsigned int year, std::string name, std::string author = "unknown", bool isBorrowed = false) :id(id), year(year), name(name), author(author), isBorrowed(isBorrowed) {}
	void setId(unsigned int id) { this->id = id; }
	void setYear(unsigned int year) { this->year = year; }
	void setName(std::string name) { this->name = name; }
	void setAuthor(std::string author) { this->author = author; }
	void setIsBorrowed(bool isBorrowed) { this->isBorrowed = isBorrowed; }
	unsigned int getId() { return id; }
	unsigned int getYear() { return year; }
	std::string getName() { return name; }
	std::string getAuthor() { return author; }
	bool getIsBorrowed() { return isBorrowed; }

	void PrintInfo()
	{
		std::cout << "ID: " << id << std::endl;
		std::cout << "Year: " << year << std::endl;
		std::cout << "Name: " << name << std::endl;
		std::cout << "Author: " << author << std::endl;
		std::cout << "Is borrowed: " << isBorrowed << std::endl;
	}

};