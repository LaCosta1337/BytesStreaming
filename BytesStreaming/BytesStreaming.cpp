//Loading Driver Bytes Streaming Exmaple by LaCosta#1337 

/*
Creds for streaming.h https://github.com/unreaIuser/bytes-streaming just made it a lot easier to work on an easier for slow brain people :) 
*/

#include "streaming.h"
#include "driver.h"
#include "mapper.h"


void driver()
{          //change to dir you want       //you can change the Null.sys for you file name example: instead of Null.sys if you putted dll bytes put dll.dll or sum like that pretty easy :)
	CreateFileFromMemory("C:\\ProgramData\\Null.sys", reinterpret_cast<const char*>(nulldriver_bytes), sizeof(nulldriver_bytes));
	       //change to dir you want     //you can change kdmapper.exe to whatever you want like it says up there
	CreateFileFromMemory("C:\\ProgramData\\kdmapper.exe", reinterpret_cast<const char*>(kdmapper_bytes), sizeof(kdmapper_bytes));

	system("C:\\ProgramData\\kdmapper.exe C:\\ProgramData\\Null.sys");

	system("del C:\\ProgramData\\Null.sys");
	system("del C:\\ProgramData\\kdmapper.exe");
}



int main()
{
	system("cls");
	SetConsoleTitleA("Bytes Streaming Example | LaCosta#1337");
    std::cout << "Extremly Outdated Null Drivers | Bytes Streaming Example | LaCosta#1337";
	std::cout << "\n\n\n [1] Load Null Drivers\n\n Choose Option: ";
	int option;
	std::cin >> option;
	switch (option)
	{
	case 1:
		driver();
		main();
	}
}

