/**    
***    Copyright (c) 2017 The Gupta Empire - All Rights Reserved
***    Unauthorized copying of this file, via any medium is strictly prohibited
***    Proprietary and confidential
***    
***    Written by Aryan Gupta <me@theguptaempire.net>
***    
***=============================================================================
***    @author          Aryan Gupta
***    @project         
***    @title           main header
***    @date            (YYYY-MM-DD)
***    @version         
***    @brief           Contains program entry point and misc. functions declarations
***=============================================================================
**/

#pragma once

struct Coordinate {
	unsigned x;
	unsigned y;
};

enum Direction {
	NORTH_DIR,
	EAST_DIR,
	SOUTH_DIR,
	WEST_DIR
};

int main(int argc, char* argv[]);