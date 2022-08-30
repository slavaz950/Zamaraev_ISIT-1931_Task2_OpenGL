/*
 * Player.h
 *
 *  Created on: 30 ���. 2022 �.
 *      Author: Zver
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <memory>
#include "Map.h"

class Player final {

private:
    double _x {}, _y {}, _dir {};
    std::shared_ptr<Map> _map {};

public:
    Player() = default;

    void spawn(std::shared_ptr<Map> & m);

    double dir() const { return _dir; }
    double x() const { return _x; }
    double y() const { return _y; }

    void walk_fwd(double dist);
    void walk_back(double dist);
    void shift_left(double dist);
    void shift_right(double dist);
    void turn_left(double angle);
    void turn_right(double angle);
};

#endif //PLAYER_H


