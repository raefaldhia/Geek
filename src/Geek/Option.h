/*
 * Copyright 2017 Raefaldhi Amartya Junior <raefaldhiamartya@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */

#ifndef GEEK_option_H
#define GEEK_option_H

namespace GEEK {
/*----------------------------------------------------------------------------*/
class Option
{
public:
    Option();
    ~Option();

    void clear();

    int index;

    void parse(int argc, char* argv[]);
};
/*----------------------------------------------------------------------------*/
}
#endif
