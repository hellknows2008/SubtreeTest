/*
 *  LibraryAPriv.hpp
 *  LibraryA
 *
 *  Created by Vincent Cheung on 25/5/2016.
 *  Copyright © 2016 test. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class LibraryAPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
