#include "ClientLogic.hpp"

ClientManager* clientManager = ClientManager::getInstance();
void AddClient()
{
	unsigned int id = 0;
	std::string phone;
	std::string name;
	std::string street;
	std::string city;
	std::string state;
	std::cout << "Enter client details" << std::endl;
	while (1)
	{
		id = InputH("Enter client id: ", 0, 1000000);
		if (!clientManager->IsClientExist(id))
			break;
		else
			std::cout << "Client Id already exist" << std::endl;
	}
	phone = InputPhone("Enter client phone: ");
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Street: ";
	std::cin >> street;
	std::cout << "City: ";
	std::cin >> city;
	std::cout << "State: ";
	std::cin >> state;

	clientManager->AddClient({ id,phone,name,{street,city,state}});
}

void UpdateClient()
{
	unsigned int id = 0;
	std::string phone;
	std::string name;
	std::string street;
	std::string city;
	std::string state;
	std::cout << "Enter client details" << std::endl;
	while (1)
	{
		id = InputH("Enter client id: ", 0, 1000000);
		if (clientManager->IsClientExist(id))
			break;
		else
			std::cout << "Client Id Not exist" << std::endl;
	}
	phone = InputPhone("Enter client phone: ");
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Street: ";
	std::cin >> street;
	std::cout << "City: ";
	std::cin >> city;
	std::cout << "State: ";
	std::cin >> state;

	clientManager->UpdateClient({ id,phone,name,{street,city,state} });
}

void DisplayClient()
{
	unsigned int id = 0;
	id = InputH("Enter client id: ", 0, 1000000);
	if(!clientManager->IsClientExist(id)) {std::cout<<"Client Id does not exist"<<std::endl; return;}
	clientManager->DisplayClient(id);
}
