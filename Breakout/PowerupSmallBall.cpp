#include "PowerupSmallBall.h"

PowerupSmallBall::PowerupSmallBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    
}

PowerupSmallBall::~PowerupSmallBall()
{
}

std::pair<POWERUPS, float> PowerupSmallBall::applyEffect()
{
    _ball->setRadius();
    return { smallPaddle, 5.0f };
}