#include "Cat.h"

void OS::Cat::update()
{
	if (m_application != nullptr)
	{
		m_application->Update();
	}

	if (_kbhit())
	{
		if (_getch() == 59) //59 - F1
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
	short returnValue;

	while (m_running)
	{
		if (m_application != nullptr)
		{
			returnValue = m_application->Tick();

			if (returnValue)
			{
				if (returnValue == -1)
				{
					m_application = nullptr;
					m_running = false;
				}
				
				else if (returnValue > 0)
				{
					std::cerr << "\n\tERROR " << returnValue << ". Press any key to exit.\n";
					std::cin.get();
					m_running = false;
				}
			}

		}
		
		update();
	}
}
