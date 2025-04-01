#pragma once
#include<iostream>
#include<unordered_map>
#include"Users.hpp"


class UserManager
{
private:
	static UserManager* instance;
	std::unordered_map<int, Users> users;

	UserManager() = default;
public:
	UserManager(const UserManager&) = delete;
	UserManager& operator=(const UserManager&) = delete;
	static UserManager* getInstance()
	{
		if (instance == NULL)
		{
			instance = new UserManager();
		}
		return instance;
	}
	~UserManager() { delete instance; instance = NULL; }
	void AddUser(Users user);
	void UpdateUser(Users user);
	void DisplayUser(unsigned int id);
	bool IsUserExist(unsigned int id);
	void SetUsersMap(std::unordered_map<int, Users> users) { this->users = users; }
	std::unordered_map<int, Users> GetUsersMap() { return users; }
};