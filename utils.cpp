#include <assert.h>
#include <fstream>

#include "utils.h"
#include "const.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void sleepMs(int ms)
{
#ifdef _WIN32
	Sleep(ms);
#else
	usleep(ms * 1000);
#endif
}

void clearScreen(std::ostream& output)
{
	output << "\033[2J\033[1;1H";
}

void clearLine(std::ostream& output)
{
	output << "\033[2K\r";
}

void displayCursor(bool visible)
{
#ifdef _WIN32
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hConsole, &cci);
	cci.bVisible = visible;
	SetConsoleCursorInfo(hConsole, &cci);
#endif
}

void openFile(std::fstream& stream, const std::string& fileName, bool read)
{
	if (read)
		stream.open(fileName, std::ios::in);
	else
		stream.open(fileName, std::ios::out);

	if (!stream)
	{
		std::cerr << "Error: file could not be opened";
		system("pause>NUL");
		exit(FILE_NOT_OPENED);
	}
}

void closeFile(std::fstream& stream)
{
	stream.close();
}