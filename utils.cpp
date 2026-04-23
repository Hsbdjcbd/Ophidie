/*====================================
Auteur : Jérémy Hébert
Projet : Ophidie
====================================*/

#include <fstream>

#ifdef _WIN32
#include <cassert>
#include <iostream>
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "utils.h"
#include "const.h"

void sleepMs(int ms)
{
#ifdef _WIN32
	Sleep(ms);
#else
	usleep(ms * 1000);
#endif
}

// Gestion des fichiers
void openFile(std::fstream &stream, const std::string &fileName, bool read)
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

void closeFile(std::fstream &stream)
{
	stream.close();
}