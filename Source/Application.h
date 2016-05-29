/*
Application - application of CatOSBasic.
*/
#pragma once


namespace OS
{
	class Application
	{
	public:
		Application();
		~Application();

		///Method called by Cat once per circuit of loop
		///<returns> error code or 0 when exited successful </returns>
		virtual int Tick() = 0;
		///Method called by Cat once per circuit of loop for checking keys etc
		virtual void Update() = 0;
	};
}


