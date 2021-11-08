#include <iostream>
#include <cmath>
#include <string.h>

#include "color.hpp"

struct point
{
    float x, y;
};

point gen_point()
{
    point p;
    p.x = rand() * 1.0f / RAND_MAX;
    p.y = rand() * 1.0f / RAND_MAX;
    return p;
}

constexpr float len(const  point& p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

//returns score obtained in one game
int play()
{
    float radius = 1;
    int score = 0;
    while (true)
    {
        score++;
        point p = gen_point();
        float h = len(p);
        if (h > radius)
            break;
        radius = sqrt(radius * radius - h * h);
    }
    return score;
}

int main(int argc, char** argv)
{
    std::cout << "Hello, World!\n";
    bool no_info = false;
    if (argc > 2) {
        if (!strcmp(argv[2], "--no-info"))
            no_info = true;
    }
    srand(time(NULL));
    int total_score = 0;
    for (int i = 0; i < atoi(argv[1]); i++)
    {
        int score = play();
        if (!no_info)
            std::cout << hue::light_aqua << "Game #" << i << ", Score: " << hue::light_purple << score << '\n' << hue::reset;
        total_score += score;
    }
    std::cout << hue::light_green << "Mean score: " << total_score / atof(argv[1]) << '\n' << hue::reset;
}