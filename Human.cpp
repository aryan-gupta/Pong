/* 
 * Copyright (c) 2017 The Gupta Empire - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 *
 * Written by Aryan Gupta <me@theguptaempire.net>
 * 
 * =============================================================================
 * @author 			Aryan Gupta
 * @project 		
 * @title 			
 * @date			(YYYY-MM-DD)
 * @fversion		1.0.0
 * @description 	
 * =============================================================================
 */
#include "info.h"

#include "main.h"
#include "Human.h"

Human::Human()
: Paddle(MAP_W) { }


Human::~Human() { }

Human::processEveent(const SDL_Event& e) {
	switch (e.type) {
		case SDL_QUIT: {
			gGame::quit(0x01);
		}
		
		const Uint8* keystate = SDL_GetKeyboardState(NULL); // Get KeyBoard State
		if(keystate[SDL_SCANCODE_W]) // If player is holding down the A Key
			move(NORTH_DIR);
		if(keystate[SDL_SCANCODE_S]) // If player is holding down the D Key
			move(SOUTH_DIR);
	}
}

