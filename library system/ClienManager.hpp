#pragma once
#include<iostream>
#include<unordered_map>
#include"Client.hpp"

class ClientManager
{
private:
	static ClientManager* instance;
	std::unordered_map<int, Client> clients;

	ClientManager() = default;
public:
	ClientManager(const ClientManager&) = delete;
	ClientManager& operator=(const ClientManager&) = delete;
	static ClientManager* getInstance()
	{
		if (instance == NULL)
		{
			instance = new ClientManager();
		}
		return instance;
	}
	~ClientManager() { delete instance; instance = NULL; }

	void AddClient(Client client);

	void UpdateClient(Client client);

	void DisplayClient(unsigned int id);

	bool IsClientExist(unsigned int id);
	

	void SetClientsMap(std::unordered_map<int, Client> clients) { this->clients = clients; }
	std::unordered_map<int, Client> GetClientsMap() { return clients; }
};