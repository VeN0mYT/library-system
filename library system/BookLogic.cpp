#include "BookLogic.hpp"

BookManager* manage = BookManager::getInstance();
void AddBook()
{
	unsigned int id = 0;
	unsigned int year = 0;
	std::string name;
	std::string author;
	
	std::cout << "Enter book details" << std::endl;
	while (1)
	{
		id = InputH("Enter book id: ", 0, 1000000);
		if(!manage->IsBookExist(id)) 
			break;
		else
			std::cout<<"Book Id already exist"<<std::endl;
	}
	year = InputH("Enter book Year: ", 300, 3000);
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Author: ";
	std::cin >> author;
	

	manage->AddBook({id, year, name, author, false});
	
}

void UpdateBook()
{
	unsigned int id = 0;
	unsigned int year = 0;
	std::string name;
	std::string author;
	bool isBorrowed = false;
	
	std::cout << "Enter book details" << std::endl;
	id = InputH("Enter book id: ", 0, 1000000);
	if(!manage->IsBookExist(id)) {std::cout<<"Book Id does not exist"<<std::endl; return;}
	year = InputH("Enter book Year: ", 300, 3000);
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Author: ";
	std::cin >> author;
	isBorrowed = InputH("Is borrowed -> 0 or 1: ", 0, 1);

	manage->updateBook({id, year, name, author, isBorrowed});

}

void DisplayBook()
{
	unsigned int id = 0;
	id = InputH("Enter book id: ", 0, 1000000);
	if(!manage->IsBookExist(id)) {std::cout<<"Book Id does not exist"<<std::endl; return;}
	manage->DisplayBook(id);
}
