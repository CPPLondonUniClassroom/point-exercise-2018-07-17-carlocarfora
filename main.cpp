
#include "point.hpp"

#include <cassert>
#include <iostream>

int main()
{
    const point p1{1, 2};
    const point p2 = p1;
    const point p3{3, 4};
    const point p4{4,6};
    const point p5{2,2};
    point p6{1,1};
    point p7{3,3};
    point p8{4,4};
    point p9{2,2};
    point p10{2,2};

    assert(p1 == p2);
    assert(!(p1 == p3));
    assert((p1+p3) == p4);
    assert((p3-p1) == p5);
    assert((p6 += p5) == p7);
    assert((p8 -= p9) == p10);

    std::cout << p6 << " : " << p7 << " : " << p8;
}