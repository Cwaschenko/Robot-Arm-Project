#include "catch/catch.hpp"
#include <iostream>
#include "../joint.hpp"
#include "../link.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("Testing Link initialization")
{
    Joint* J1 = new Joint(1,"Base");
    Joint* J2 = new Joint(0, "Shoulder");
    
    Link l(J1,J2, 120);

    CHECK(l.GetBase() == J1);
    CHECK(l.GetEnd() == J2);
    
}