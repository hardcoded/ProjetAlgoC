#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "BoatList.h"

typedef Player Player;

Player createPlayer(BoatList boats, int gridLines, int gridColums);
BoatList getPlacedBoats();
bool isPlaerDead();
Player placeBoats();

#endif // PLAYER_H_INCLUDED