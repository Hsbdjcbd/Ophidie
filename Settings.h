/*====================================
Auteur : Vincent Gagnon
Projet : Ophidie
====================================*/

#pragma once

#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Settings
{
private:
	int volSound,
		volMusic,
		gridW,
		gridH,
		difficulty;

	bool fullScr,
		usingArrowKey,
		deafMode;

public:
	Settings();

};

/*
TODO:
- volume musique
- volume sound
- grid size
- difficulty
	- Longueur snake
	- Vie
	- Vitesse
	- Egg point
- full screen mode
- Mapping des touches (wasd vs arrow key)

secondary:
- background
- skins
- music choice
- master volume
- Mapping des touches (full mapping)
- timer before starving

*/