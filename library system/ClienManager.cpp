#include "ClienManager.hpp"

ClientManager* ClientManager::instance = NULL;
void ClientManager::AddClient(Client client)
{
	if (clients.find(client.GetId()) != clients.end())
	{
		std::cout<<"Client Id already exist"<<std::endl;
		return;
	}

	clients[client.GetId()] = client;
		
}

void ClientManager::UpdateClient(Client client)
{
	if (clients.find(client.GetId()) != clients.end())
	{
		clients[client.GetId()] = client;
	}
	else
	{
		std::cout<<"Client Id does not exist"<<std::endl;
	}
}

void ClientManager::DisplayClient(unsigned int id)
{
	if (clients.find(id) != clients.end())
	{
		clients[id].PrintInfo();
	}
	else
	{
		std::cout<<"Client Id does not exist"<<std::endl;
	}
}

bool ClientManager::IsClientExist(unsigned int id)
{
	return clients.find(id) != clients.end();
}

