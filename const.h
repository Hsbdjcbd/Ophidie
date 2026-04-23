#pragma once

// Constantes pour l'ensemble de la solution
enum ERROR
{
	SUCCESS,
	FILE_NOT_OPENED
};

// Constantes pour les settings
const std::string SETTINGS_FILE_NAME = "BD/settings.json";

const int MIN_VOLUME = 0,
	MAX_VOLUME = 100,
	MIN_GRID_SIZE = 10,
	MAX_GRID_SIZE = 100;