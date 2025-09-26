#pragma once

/*****************************************************************
 * \file   Lee.h
 * \brief  program to demo creating a new class & branching
 * <br>
 * Header file to demo adding a new class & working with branches
 *
 *
 * \author Lee
 * \date   September 26, 2025
 *********************************************************************/
class Lee
{
private:
	static const int MAX_NAME_SIZE = 24;
	char myName[MAX_NAME_SIZE] = "Lee";   // storage for name
public:
	char* getMyName();    // returns user name
};

