#ifndef LINK_HPP
#define LINK_HPP

#include <string>

class Link
{
    private:
            Joint* Base;
            Joint* End;
            float length;
    public:
            Link(Joint* Base, Joint* End, float length);
            ~Link();
            Joint* GetBase();
            Joint* GetEnd();

};

#endif