// 0 - �������� ����� �� �����
// 1 - ������ ������
// 2 - ����� ������

#pragma once

#include "account.h"
#include "Client.h"
#include <list>

using namespace std;

class Bank
{
private:
	list <BankAccount> DB;
	BankAccount list;
	Client* client;
	int bufSum;

public:
	void addList(Client* cl);
	int SearchID(int id);
	Client* parseRequest(Client* cl);
};

