/*
	Cat - core of the system.
*/
#pragma once
#include <conio.h>
#include <iostream>

#include "Application.h"

namespace OS
{
	class Cat
	{
	private:
		///Update for keys
		void update();

	public:
		Cat(Application & appToRun);
		~Cat();
		///Main loop
		void Start();

	private:
		Application * m_application;
		bool m_running;

	};
}
