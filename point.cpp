//
// Created by Tristan Brindle on 10/07/2018.
//

#include <iostream>
#include "point.hpp"

bool operator==(const point& lhs, const point& rhs)
{
    return lhs.x == rhs.x &&
            lhs.y == rhs.y;
}

bool operator!=(const point &lhs, const point &rhs) {
    return lhs.x != rhs.x ||
           lhs.y != rhs.y;
}

point operator+(const point& lhs, const point& rhs) {
    int add_x = lhs.x + rhs.x;
    int add_y = lhs.y + rhs.y;
    point out{add_x, add_y};
    return out;
}

point operator-(const point& lhs, const point& rhs) {
    int add_x = lhs.x - rhs.x;
    int add_y = lhs.y - rhs.y;
    point out{add_x, add_y};
    return out;
}

point& operator+=(point& lhs, const point& rhs) {
    int x = lhs.x + rhs.x;
    int y = lhs.x + rhs.y;
    lhs.x = x;
    lhs.y = y;
    return lhs;
}

point& operator-=(point& lhs, const point& rhs) {
    int x = lhs.x - rhs.x;
    int y = lhs.x - rhs.y;
    lhs.x = x;
    lhs.y = y;
    return lhs;
}

std::ostream& operator<<(std::ostream& os, const point &p) {
    std::cout << p.x << "," << p.y;
    return os;
}



