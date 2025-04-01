#include "BookManager.hpp"

BookManager* BookManager::instance = NULL;  // give the static variable NULL sisnce it cant be instalized like tis in class it self
void BookManager::AddBook(Book book)
{
	if(booksId.find(book.getId())!=booksId.end())
	{
		std::cout<<"Book Id already exist"<<std::endl;
		return;
	}

	booksId[book.getId()]=book;
	booksName[book.getName()].insert(book.getId());
	
}

void BookManager::updateBook(Book book)
{
	booksId[book.getId()]=book;
}

void BookManager::DisplayBook(unsigned int id)
{
	if(booksId.find(id)==booksId.end())
	{
		std::cout<<"Book Id not found"<<std::endl;
		return;
	}
	booksId[id].PrintInfo();
}

void BookManager::DisplayByName(std::string name)
{
	if(booksName.find(name)==booksName.end())
	{
		std::cout<<"Book Name not found"<<std::endl;
		return;
	}
	for(auto it=booksName[name].begin();it!=booksName[name].end();it++)
	{
		booksId[*it].PrintInfo();
	}
}
