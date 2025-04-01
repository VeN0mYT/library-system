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

	return 0;
}