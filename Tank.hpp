//
//  Tank.hpp
//  Game
//
//  Created by Alexandr Kuznetsov on 03.05.2018.
//  Copyright © 2018 Alexandr Kuznetsov. All rights reserved.
//

#ifndef Tank_hpp
#define Tank_hpp
#include "GameObject.hpp"

class Tank: public GameObject
{
public:
    int movementSpeed = 4;
    int attack = 2;
    double attackSpeed = 0.3;
    int hp = 10;
    //int offset = 3;
    
    bool canMoveUp = true;
    bool canMoveRight = true;
    bool canMoveDown = true;
    bool canMoveLeft = true;
    
    Tank();
    Tank(double x, double y, sf::Sprite spr, sf::RectangleShape rect);
    
    int updateTank();
    
    int drawTank(sf::RenderWindow* window);

    
    // For objectManager
    virtual int draw(sf::RenderWindow* window) override;
    virtual int update() override;
    virtual int collision() override;
};

#endif /* Tank_hpp */
