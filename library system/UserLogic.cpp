#include "UserLogic.hpp"

UserManager* usermanager = UserManager::getInstance();
void AddUser()
{
	unsigned int id = 0;
	while (1)
	{
		id = InputH("Enter user id: ", 0, 1000000);

		if (!usermanager->IsUserExist(id))
			break;
		else
			std::cout << "User Id already exist" << std::endl;

	}
	std::string phone = InputPhone("Enter user phone: ");
	std::string name;
	std::cout << "Name: ";
	std::cin >> name;
	Users user(id, phone, name);
	usermanager->AddUser(user);
}

void UpdateUser()
{
	unsigned int id = 0;
	while (1)
	{
		id = InputH("Enter user id: ", 0, 1000000);

		if (usermanager->IsUserExist(id))
			break;
		else
			std::cout << "User Id Not exist" << std::endl;

	}
	std::string phone = InputPhone("Enter user phone: ");
	std::string name;
	std::cout << "Name: ";
	std::cin >> name;
	Users user(id, phone, name);
	usermanager->UpdateUser(user);

}

void DisplayUser()
{
	unsigned int id = InputH("Enter user id: ", 0, 1000000);
	if(!usermanager->IsUserExist(id)) {std::cout<<"User Id does not exist"<<std::endl; return;}
	usermanager->DisplayUser(id);
}
