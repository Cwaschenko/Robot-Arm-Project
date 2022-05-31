#include "link.hpp"

Link::Link(Joint* Base, Joint* End, float length, float Width)
{
    this-> Base = Base;
    this-> End = End;
    this->length = length;
    this->Width = Width;
    
}

Joint* Link::GetBase()
{
    return this->Base;
}

Joint* Link::GetEnd()
{
    return this->End;
}

float Link::GetLength()
{
    return this->length;
}

float Link::GetWidth()
{
    return this->Width;
}