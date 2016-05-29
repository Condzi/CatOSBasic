/*
	Cat - core of the system.
*/
#pragma once
#include "Application.h"
#include <conio.h>

namespace OS
{
	class Cat
	{
	private:
		void update();

	public:
		Cat();
		~Cat();
		///Main loop
		void Start();

	private:
		Application * m_application;
		bool m_running;

	};
}
