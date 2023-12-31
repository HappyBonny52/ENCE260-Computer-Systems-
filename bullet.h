/** @file   bullet.h
    @author Aaron Sevilla, ase89 
    @author Bonghyun Kwon, bkw31
    @date   15 October 2022
    @brief  For controlling bullets's position and state.
*/

#ifndef BULLET_H
#define BULLET_H

#include "player.h"

#define WIN_SIGNAL '!' //Exclamation marks indicating win flag to be sent to the other funkit through IR_transmitter
#define OUT_OF_BULLET_RANGE 8 //8 for indicating the bullet out of range as it can be in range 1 to 7 
#define TOP_OF_SCREEN 4

/* The array state of bullet's staring point */
void spawn_bullet(Player_t *player);

/* The array state of bullet in local funkit and to send the state of outgoing bullet in the other funkit */
void move_self_bullets(void);

/** The array state of bullet in the other funkit that the other player shoot
    the array state of player needed to check if the bullet reached the player or not 
    @param player To verify if the bullet reached the other player or not */  
void move_outgoing_bullets(Player_t *player);

/* Receive the position of incoming bullet */
void ir_poll_signals(void);

/* Display player's bullets in matrix */
void displays_bullets(void);

#endif // !BULLET_H
