#include<iostream>
#include"BookManager.hpp"
#include"ClienManager.hpp"
#include"UserManager.hpp"

// why singelton ?
// to have the map in one place can call it any where whout being copied by mistake or deleted in one class that cant be copied or deleted 
// more control  more security
// some details in bookmanager !!
int main()
{
	/*
	BookManager* bookmanager = BookManager::getInstance();  // getting the instance to the pointer so you can access the object from the pointer

	bookmanager->addBook({ 5678, 2002, "C++" ,"abdo",false});
	//bookmanager->addBook({ 5678, 2002, "C++" ,"abdo",false});
	bookmanager->addBook({ 5646, 2002, "C++v2" ,"hesham",false});
	bookmanager->DisplayBook(5678);
	bookmanager->updateBook({ 5678, 2045, "C++" ,"lolbo",false});
	bookmanager->DisplayBook(5678);
	*/
	/*
	ClientManager* clientmanager = ClientManager::getInstance();
	clientmanager->addClient({ 56,13456789,"abdo", {"she","bo","ya"} });
	clientmanager->DisplayClient(56);
	clientmanager->UpdateClient({ 56,13456789,"abyadwao", {"she","bo","ya"} });
	clientmanager->DisplayClient(56);
	*/
	/*
	UserManager* usermanager = UserManager::getInstance();
	usermanager->AddUser({ 56,13456789,"abdo" });
	usermanager->DisplayUser(56);
	usermanager->UpdateUser({ 56,13456789,"abbdro" });
	usermanager->DisplayUser(56);
	*/
	return 0;
}