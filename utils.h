#pragma once

#include <iostream>
#include <algorithm>
#include <string>

void sleepMs(int ms);
void clearScreen(std::ostream& output);
void clearLine(std::ostream& output);
void displayCursor(bool visible);

void openFile(std::fstream& stream, const std::string& fileName, bool read);
void closeFile(std::fstream& stream);