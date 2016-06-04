#pragma once
#include "Application.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

class About :
	public OS::Application
{
private:
	bool loadMessage(const std::string&);
	void writeMessage();

public:
	About();
	~About();

	int Tick();
	void Update();

private:
	std::vector<std::string> m_message;
	bool m_exit;
};

