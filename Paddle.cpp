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

#include "info.h"

#include "main.h"
#include "Paddle.h"

Paddle::Paddle(unsigned x)
: mCord({x, MAP_H / 2 - PADDLE_SIZE}) {}


Paddle::~Paddle() {}


void Paddle::move(int dir) {
	switch(dir) {
		case NORTH_DIR:
			mCord.y--;
		break;
		
		case SOUTH_DIR:
			mCord.y++;
		break;
	}
}