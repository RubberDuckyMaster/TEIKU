#ifndef TEXTGROUP_H_INCLUDED
#define TEXTGROUP_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

namespace gui{
namespace text{

enum CursorDir
{
    LEFT, RIGHT, UP, DOWN
};

class TextGroup
{
    typedef unsigned int Index;
    std::vector<sf::Text> textLines;
    sf::Font font;

    sf::Vector2f indexToXY(const Index index);

public:
    TextGroup(const sf::Font& fontToCopy);
    TextGroup(const std::string fontFilename);
    TextGroup(){}

    void insert(const char character, Index line, Index column);
    void insert(const char character, Index index);

    void moveCursor(const CursorDir direction);
};

} // namespace text
} // namespace gui

#endif // TEXTGROUP_H_INCLUDED
