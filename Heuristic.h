#ifndef HEURISTIC_H
#define HEURISTIC_H

class Heuristic {
public:
    Heuristic();
    //Heuristic(const Heuristic& orig);
    virtual int getValue() = 0;
    virtual ~Heuristic();
protected:

};

#endif /* HEURISTIC_H */

