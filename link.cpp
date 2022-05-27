#include "link.hpp"

Link::Link(Joint* Base, Joint* End, float length)
{
    this-> Base = Base;
    this-> End = End;
    this->length = length;
}

Joint* Link::GetBase()
{
    return this->Base;
}

Joint* Link::GetEnd()
{
    return this->End;
}