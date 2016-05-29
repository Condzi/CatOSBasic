#include "Cat.h"

void OS::Cat::update()
{
	if (m_application != nullptr)
	{
		m_application->Update();
	}

	if (_kbhit())
	{
		if (getch() == 59) //59 - F1
		{
			m_running = false;
		}
	}
}

OS::Cat::Cat()
{
	m_application = nullptr;
}

OS::Cat::~Cat()
{
}

void OS::Cat::Start()
{
	while (m_running)
	{
		if (m_application != nullptr)
		{
			m_application->Tick();
		}
		
		update();
	}
}
