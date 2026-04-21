#include <iostream>
#include <nlohmann/json.hpp>
#include <SFML/graphics.hpp>
#include <string>

#include "const.h"
#include "Settings.h"

int main() {
    Settings settings("settings.json");
    Difficulty difficulty;

    

    settings.setFullScr(-10);

    system("pause>NUL");
    return SUCCESS;
}