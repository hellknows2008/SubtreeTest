/*
 *  LibraryA.hpp
 *  LibraryA
 *
 *  Created by Vincent Cheung on 25/5/2016.
 *  Copyright © 2016 test. All rights reserved.
 *
 */

#ifndef LibraryA_
#define LibraryA_

/* The classes below are exported */
#pragma GCC visibility push(default)

class LibraryA
{
	public:
		void HelloWorld(const char *);
};

#pragma GCC visibility pop
#endif
