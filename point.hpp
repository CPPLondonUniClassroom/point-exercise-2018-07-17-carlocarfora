

#ifndef WEEK11_POINT_EXERCISE_POINT_HPP
#define WEEK11_POINT_EXERCISE_POINT_HPP

#include <sstream>

struct point {
    int x = 0;
    int y = 0;
};

bool operator==(const point& lhs, const point& rhs);
bool operator!=(const point& lhs, const point& rhs);
point operator+(const point& lhs, const point& rhs);
point operator-(const point& lhs, const point& rhs);
point& operator+=(point& lhs, const point& rhs);
point& operator-=(point& lhs, const point& rhs);
std::ostream& operator<<(std::ostream& os, const point& p);

#endif //WEEK11_POINT_EXERCISE_POINT_HPP
