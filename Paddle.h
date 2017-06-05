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
***    @title           main
***    @date            (YYYY-MM-DD)
***    @version         
***    @brief           Contains program entry point and misc. functions
***=============================================================================
**/

#pragma once

class Paddle {
public:
	Paddle();
	~Paddle();
	
	move(int dir);
	
private:
	Coordinate mCord;

};