#include "About.h"


bool About::loadMessage(const std::string & path)
{
	std::ifstream messageFile;
	std::string tempString;

	messageFile.open(path, std::ios::in);

	if (!messageFile.good())
	{
		messageFile.close();

		return false;
	}

	while (getline(messageFile, tempString))
	{
		m_message.push_back(tempString);
	}

	messageFile.close();
	return true;
}

void About::writeMessage()
{
	for (short i = 0; i < m_message.size(); ++i)
	{
		std::cout << m_message[i] << "\n";
	}
}

About::About()
{
	m_exit = false;
}


About::~About()
{
}

int About::Tick()
{
	if (m_exit)
	{
		return -1;
	}

	if (!loadMessage("Data/Hello.txt") || !m_message.size())
	{
		return 1;
	}
	
	writeMessage();

	return 0;
}

void About::Update()
{
	std::cout << "Press enter to exit.\n";
	std::cin.get();

	m_exit = true;
}
