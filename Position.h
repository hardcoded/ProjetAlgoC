#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

typedef struct Position Position;

Position createPos(int x, int y);
int getX();
int getY();
Position hit();
bool isHit();

#endif // POSITION_H_INCLUDED