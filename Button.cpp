#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cassert>

#include "const.h"
#include "Button.h"

// Constructeurs
Button::Button()
{
	_scale = _position;
	_buttonID = _isMouseReleased = 0;
}

Button::Button(const sf::RectangleShape rectangle, const sf::Text text, const sf::Color fillColor, const sf::Color outlineColor, const sf::Vector2f scale, const sf::Vector2f position, const unsigned int _buttonID)
{
	setButtonID
}

// Destructeur
Button::~Button()
{
	_scale = _position;
	_buttonID = _isMouseReleased = 0;
}

// Getters
sf::RectangleShape Button::getRectangle() const
{
	return _rectangle;
}

sf::Text Button::getText() const
{
	return _text;
}

sf::Color Button::getFillColor() const
{
	return _fillColor;
}

sf::Color Button::getOutlineColor() const
{
	return _outlineColor;
}

sf::Vector2f Button::getScale() const
{
	return _scale;
}

sf::Vector2f Button::getPosition() const
{
	return _position;
}

unsigned int Button::getButtonID() const
{
	return _buttonID;
}

bool Button::getIsMouseReleased() const
{
	return _isMouseReleased;
}

// Setters
void Button::setRectangle()
{

}

