//
//	supio.cpp functions
//
#include "pch.h"

#ifndef HSPUTF8

#include "hsp3config.h"

int GetLimit( int num, int min, int max )
{
	if ( num > max ) return max;
	if ( num < min ) return min;
	return num;
}

#endif
