#ifndef LINK_HPP
#define LINK_HPP
#include "joint.hpp"
#include <string>

class Link
{
    private:
            Joint* Base;
            Joint* End;
            float length;
            float Width;

    public:
            Link(Joint* Base, Joint* End, float length, float Width);
            Joint* GetBase();
            Joint* GetEnd();

};

#endif