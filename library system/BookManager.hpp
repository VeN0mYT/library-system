#pragma once
#include<iostream>
#include<unordered_map>
#include<unordered_set>

#include"Books.hpp"

class BookManager
{
private:
	static BookManager* instance;           // the pointer that point to the created instance of that class
	std::unordered_map<int, Book> booksId;
	std::unordered_map<std::string, std::unordered_set<int>> booksName;
	BookManager() = default;
public:
	BookManager(const BookManager&) = delete;
	BookManager& operator=(const BookManager&) = delete;    // delete any try to create another instance by contructing or = 

	static BookManager* getInstance() {
		if (instance == NULL) {
			instance = new BookManager();		// allocating the acully class object so any object being created will point to just that object
		}
		return instance;
	}
	~BookManager() { delete instance; instance = NULL; }
	void AddBook(Book book);
	void updateBook(Book book);
	bool IsBookExist(unsigned int id) { return booksId.find(id) != booksId.end(); }
	void DisplayBook(unsigned int id);
	void SetMapBookId(std::unordered_map<int, Book> booksId) { this->booksId = booksId; }
	void SetMapBookName(std::unordered_map<std::string, std::unordered_set<int>> booksName) { this->booksName = booksName; }
	std::unordered_map<int, Book> GetMapBookId() { return booksId; }
	std::unordered_map<std::string, std::unordered_set<int>> GetMapBookName() { return booksName; }



};