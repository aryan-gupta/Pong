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
***    @title           Paddle
***    @date            (YYYY-MM-DD)
***    @version         
***    @brief           Contains code for the Paddle Base Class
***=============================================================================
**/

#pragma once

static const int PADDLE_SIZE = MAP_H / 4;

class Paddle {
public:
	Paddle();
	~Paddle();
	
	void move(int dir);
	
protected:
	Coordinate mCord;
	
private:

};