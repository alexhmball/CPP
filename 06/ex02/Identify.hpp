#ifndef IDENTIFY_H
#define IDENTIFY_H

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *makeA(void);
Base *makeB(void);
Base *makeC(void);
Base * generate(void);
// void identify(Base* p);
// void identify(Base& p);



typedef Base *(*make)(void);
#endif