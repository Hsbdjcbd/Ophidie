/*====================================
Auteur : Jérémy Hébert
Projet : Ophidie
====================================*/

#pragma once

#include <iostream>  // TODO: Switch to SFML ?
#include <algorithm>
#include <string>

#ifndef WIN32
#include <cassert>
#endif

void sleepMs(int ms);

// Gestion des fichiers
void openFile(std::fstream& stream, const std::string& fileName, bool read);
void closeFile(std::fstream& stream);