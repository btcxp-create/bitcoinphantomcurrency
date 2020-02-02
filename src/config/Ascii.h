// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "\n _______         _   _       _____      _        \n"
                                    "  ____ _______ _______   _______ "
                                     "|  _ \__   __/ ____\ \ / /  __ "
                                    " | |_) | | | | |     \ V /| |__) |"
                                    " |  _ <  | | | |      > < |  ___/"
                                    " | |_) | | | | |____ / . \| |    "
                                    " |____/  |_|  \_____/_/ \_\_|   ";

const std::string nonWindowsAsciiArt =
    "\n"  ____ _______ _______   _______
        " |  _ \__   __/ ____\ \ / /  __ \n"
        " | |_) | | | | |     \ V /| |__) |\n"
        " |  _ <  | | | |      > < |  ___/\n"
        " | |_) | | | | |____ / . \| |    \n"
        " |____/  |_|  \_____/_/ \_\_| \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
