#pragma once
#include<iostream>
#include<string>

struct Address
{
	std::string street;
	std::string city;
	std::string state;
	
	Address(std::string street = "unknown", std::string city = "unknown", std::string state = "unknown") :street(street), city(city), state(state) {}

	void PrintInfo()
	{
		std::cout <<"streat: " << street << std::endl;
		std::cout <<"city: " << city << std::endl;
		std::cout <<"state: " << state << std::endl;
	}
};

class Client
{
private:
	unsigned int id = 0;
	unsigned int phone = 0;
	std::string name;
	Address address;
public:
	Client(unsigned int id = 0, unsigned int phone = 0, std::string name = "unknown", Address address = Address()) :id(id), phone(phone), name(name), address(address) {}
	void SetId(unsigned int id) { this->id = id; }
	void SetPhone(unsigned int phone) { this->phone = phone; }
	void SetName(std::string name) { this->name = name; }
	void SetAddress(Address address) { this->address = address; }

	unsigned int GetId() { return id; }
	unsigned int GetPhone() { return phone; }
	std::string GetName() { return name; }
	Address GetAddress() { return address; }

	void PrintInfo()
	{
		std::cout<<"Id: " << id << std::endl;
		std::cout<<"Phone: " << phone << std::endl;
		std::cout<<"Name: " << name << std::endl;
		address.PrintInfo();
	}
};