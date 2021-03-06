//
// omer lichter
// id: 314649666
//

#ifndef EX1_PLAYER_H
#define EX1_PLAYER_H

#include "Point.h"
#include <vector>

class Player {
public:
    /**
     * choose point from the list
     * @param points - points to choose from
     * @return chosen point
     */
    virtual Point* chooseMove(vector<Point>* points) const = 0 ;

private:
};


#endif //EX1_PLAYER_H
