/*====================================
Auteur : Vincent Gagnon
Projet : Ophidie
====================================*/

#pragma once

#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

class Settings
{
private:

public:

};

/*
TODO:
- volume musique
- volume sound
- grid size
- language
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
- master volume
- Mapping des touches (full mapping)
- timer before starving

*/