#include "Cat.h"
#include "About.h"

int main()
{
	About about;
	OS::Cat cat(about);
	cat.Start();

	return 0;
}