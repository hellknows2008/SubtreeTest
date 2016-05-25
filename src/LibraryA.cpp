/*
 *  LibraryA.cpp
 *  LibraryA
 *
 *  Created by Vincent Cheung on 25/5/2016.
 *  Copyright © 2016 test. All rights reserved.
 *
 */

// TEMP: some dummy change

#include <iostream>
#include "LibraryA.hpp"
#include "LibraryAPriv.hpp"

void LibraryA::HelloWorld(const char * s)
{
	 LibraryAPriv *theObj = new LibraryAPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void LibraryAPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

