#include "UserManager.hpp"

UserManager* UserManager::instance = NULL;
void UserManager::AddUser(Users user)
{
	if (IsUserExist(user.GetId()))
	{
		std::cout<<"User Id already exist"<<std::endl;
		return;
	}
	users[user.GetId()] = user;
}

void UserManager::UpdateUser(Users user)
{
	if(IsUserExist(user.GetId()))
		users[user.GetId()] = user;
	else
		std::cout<<"User Id does not exist"<<std::endl;
}

void UserManager::DisplayUser(unsigned int id)
{
	if (IsUserExist(id))
		users[id].PrintInfo();
	else
		std::cout<<"User Id does not exist"<<std::endl;
}

bool UserManager::IsUserExist(unsigned int id)
{
	return users.find(id) != users.end();
}
