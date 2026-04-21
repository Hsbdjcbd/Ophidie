#include <iostream>
#include <fstream>
#include <cassert>

#include "Settings.h"
#include "const.h"

using json = nlohmann::json;

Settings::Settings(std::string fichier)
{
    std::ifstream file("settings.json");
    if (!file.is_open())
    {
        std::cerr << "Error: file could not be opened";
        system("pause>NUL");
        exit(FILE_NOT_OPENED);
    }

    json settings = json::parse(file);

    _difficulty = Difficulty(settings["Difficulty"]);
    _mode = GameMode(settings["Mode"]);
    _gridW = settings["Width"];
    _gridH = settings["Height"];
    _volSound = settings["Sound"];
    _volMusic = settings["Music"];
    _fullScr = settings["FullScreen"];
    _usingArrowKeys = settings["Arrow"];
    _deafMode = settings["Deaf"];
}

int Settings::getSound()
{
    return _volSound;
}

int Settings::getMusic()
{
    return _volMusic;
}

int Settings::getWidth()
{
    return _gridW;
}

int Settings::getHeight()
{
    return _gridH;
}

Difficulty Settings::getDifficulty()
{
    return _difficulty;
}

GameMode Settings::getMode()
{
    return _mode;
}

bool Settings::getFullScr()
{
    return _fullScr;
}

bool Settings::getArrow()
{
    return _usingArrowKeys;
}

bool Settings::getDeaf()
{
    return _deafMode;
}

void Settings::setSound(int sound)
{
    assert(sound > MIN_VOLUME && sound < MAX_VOLUME);

    _volSound = sound;
}

void Settings::setMusic(int music)
{
    assert(music > MIN_VOLUME && music < MAX_VOLUME);

    _volMusic = music;
}

void Settings::setWidth(int width)
{
    assert(width > MIN_GRID_SIZE && width < MAX_GRID_SIZE);

    _gridW = width;
}

void Settings::setHeight(int height)
{
    assert(height > MIN_GRID_SIZE && height < MAX_GRID_SIZE);

    _gridH = height;
}

void Settings::setDifficulty(Difficulty difficulty)
{
    assert(difficulty >= BABY && difficulty <= HARDCORE);

    _difficulty = difficulty;
}

void Settings::setMode(GameMode mode)
{
    assert(mode >= NORMAL && mode <= SURVIVE_HELL);

    _mode = mode;
}

void Settings::setFullScr(bool fullScr)
{
    _fullScr = fullScr;
}

void Settings::setArrow(bool arrow)
{
    _usingArrowKeys = arrow;
}

void Settings::setDeaf(bool deaf)
{
    _deafMode = deaf;
}



//int volSound,
//volMusic,
//gridW,
//gridH;
//
//Difficulty difficulty;
//
//GameMode mode;
//
//bool fullScr,
//usingArrowKey,
//deafMode;