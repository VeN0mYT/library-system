#include<iostream>
#include"BookLogic.hpp"
#include"ClientLogic.hpp"
#include"UserLogic.hpp"


int main()
{
	BookManager* manage = BookManager::getInstance();
	ClientManager* clientManager = ClientManager::getInstance();
	UserManager* UserManager = UserManager::getInstance();

	manage->AddBook({ 1, 2020, "The Alchemist", "Paulo Coelho", false });
	manage->AddBook({ 2, 2620, "The Alchemist", "Palo4689 Colho", true });
	manage->AddBook({ 3, 20240, "The Alchemist", "8789aulo Coelho", false });
	//UpdateBook();
	//manage->DisplayByName("The Alchemist");
	clientManager->AddClient({ 1,"0123456789","ahmed",{"street","city","state" } });
	clientManager->AddClient({ 2,"0123456789","ahmed",{"street","city","state"} });
	//UpdateClient();

	//DisplayBook(); 
	//DisplayClient();
	
	UserManager->AddUser({ 1,"0123456789","ahmed" });
	UserManager->AddUser({ 2,"0123456789","ahmed" });
	//UpdateUser();
	//DisplayUser();

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
