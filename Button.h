#pragma once
class Button
{
private:
	sf::RectangleShape _rectangle;
	sf::Text _text;
	sf::Color _fillColor, _outlineColor;
	sf::Vector2f _scale, _position;

	sf::SoundBuffer _mainMusicBuffer;
	sf::Sound _mainMusic;


	unsigned int _buttonID;
	bool _isMouseReleased;

public:
	// Constructeurs
	Button();
	Button(const sf::RectangleShape rectangle, const sf::Text text, const sf::Color fillColor, const sf::Color outlineColor, const sf::Vector2f scale, const sf::Vector2f position, const unsigned int _buttonID);

	// Destructeur
	~Button();

	// Getters
	sf::RectangleShape getRectangle() const;
	sf::Text getText() const;
	sf::Color getFillColor() const;
	sf::Color getOutlineColor() const;
	sf::Vector2f getScale() const;
	sf::Vector2f getPosition() const;
	unsigned int getButtonID() const;
	bool getIsMouseReleased() const;

	// Setters
	void setButtonID();
	void setIsmouseReleased();

};