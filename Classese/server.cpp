#include <iostream>
#include "server.h"

bool ServerBrowserService::registerServer(ServerInfo newServer) {
	if (serverCount < -1) {
		serverCount = 0;
	}
	if (serverCount < 49) {
		servers[serverCount].currentPlayerCount = newServer.currentPlayerCount;
		servers[serverCount].maxPlayers = newServer.maxPlayers;
		servers[serverCount].ping = newServer.ping;
		servers[serverCount].regionID = newServer.regionID;
		serverCount++;
		return true;
	}
	return false;
}
int ServerBrowserService::getServers() {
	int total = 0;
	for (int i = 0; i < serverCount; i++) {
		if (servers[i].maxPlayers != 0) {
			total++;
		}
	}
	return total;
}
int ServerBrowserService::getServers(int maxResults, int pingLimit, int region, bool empty, bool full) {
	int size = 0;
	for (int i = 0; i < 50; i++) {
		if (empty && servers[i].currentPlayerCount == 0 && servers[i].ping <= pingLimit && servers[i].regionID == region) {
			size++;
		}
		else if (full && servers[i].currentPlayerCount == servers[i].maxPlayers && servers[i].ping <= pingLimit && servers[i].regionID == region) {
			size++;
		}else{
			size = getServers();
		}
		if (size > maxResults) {
			size = maxResults;
		}
	}
	return size;
}
void ServerBrowserService::sortServerPlayer() {
	for (int i = 0; i < 50; i++) {
		int server = i;
		for (int x = i; x < 50; x++) {
			if (servers[x].currentPlayerCount > servers[server].currentPlayerCount) {
				server = x;
			}
		}
		ServerInfo instance = servers[server];
		servers[server] = servers[i];
		servers[i] = instance;
	}
}
void ServerBrowserService::sortServerPing() {
	for (int i = 0; i < 50; i++) {
		int server = i;
		for (int x = i; x < 50; x++) {
			if (servers[x].ping > servers[server].ping) {
				server = x;
			}
		}
		ServerInfo instance = servers[server];
		servers[server] = servers[i];
		servers[i] = instance;
	}
}