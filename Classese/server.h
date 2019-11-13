#pragma once

struct ServerInfo
{
	int regionID, currentPlayerCount, maxPlayers, ping;
};

class ServerBrowserService {
private:
	ServerInfo servers[50];
	int serverCount;
public:
	bool registerServer(ServerInfo newServer);
	int getServers();
	int getServers(int maxResults, int pingLimit, int region, bool empty, bool full);
	void sortServerPlayer();
	void sortServerPing();
};