#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>

#include "Application.h"


class About :
	public OS::Application
{
private:
	/// Loads message from path
	/// <param name="path"> message path with .txt at end </param>
	/// <reutrns> true if loaded </returns>
	/// <returns> false if not loaded </returns>
	bool loadMessage(const std::string & path);
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

