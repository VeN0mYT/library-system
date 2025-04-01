#pragma once
#include<iostream>
#include<string>

class Users
{
private:
	unsigned int id = 0;
	std::string phone;
	std::string name = "";
public:
	Users() = default;
	Users(unsigned int id, std::string Phone = "unkown", std::string name = "unkown")
	{
		this->id = id;
		this->phone = Phone;
		this->name = name;
	}
	void SetId(unsigned int id)
	{
		this->id = id;
	}
	void SetPhone(unsigned int phone)
	{
		this->phone = phone;
	}
	void SetName(std::string name)
	{
		this->name = name;
	}

	unsigned int GetId()
	{
		return this->id;
	}
	std::string GetPhone()
	{
		return this->phone;
	}
	std::string GetName()
	{
		return this->name;
	}

	void PrintInfo()
	{
		std::cout << "Id: " << this->id << std::endl;
		std::cout << "Phone: " << this->phone << std::endl;
		std::cout << "Name: " << this->name << std::endl;
	}
};