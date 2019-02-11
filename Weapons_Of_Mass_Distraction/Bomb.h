#ifndef BOMB_H
#define BOMB_H
class Bomb 
{
public:
    Bomb();
    ~Bomb();
    void set_radius(int);
    void set_location(int, int);
    int get_radius();
    float get_x();
    float get_y();
    void print_transform();

private:
    int radius;
    float location[2];
};

#endif // BOMB_H
