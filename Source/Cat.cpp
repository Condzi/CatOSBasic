#include "Cat.h"

void OS::Cat::update()
{
	if (m_application != nullptr)
	{
		m_application->Update();
	}

	if (kbhit())
	{
		if (getch() == 59) //59 - F1
		{
			m_running = false;
		}
	}
}

OS::Cat::Cat(Application & appToRun)
{
	m_application = &appToRun;
}

OS::Cat::~Cat()
{
}

void OS::Cat::Start()
{
	int * returnValue = new int;

	while (m_running)
	{
		if (m_application != nullptr)
		{
			*returnValue = m_application->Tick();

			if (*returnValue != 0)
			{
				if (*returnValue == -1)
				{
					m_application = nullptr;
				}
				else if (*returnValue > 0)
				{
					std::cerr << "\nERROR " << *returnValue << ". Press any key to exit.\n";
					std::cin.get();
					m_running = false;
				}
			}

		}
		
		update();
	}

	delete returnValue;
}
