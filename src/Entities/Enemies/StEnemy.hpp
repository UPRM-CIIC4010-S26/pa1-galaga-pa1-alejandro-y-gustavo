#pragma once
#include "Enemy.hpp"

class StEnemy : public Enemy {
    private: 
        float angle = 90;
        int StScore = 25;

    public:
        StEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(90, 600);
            this->StScore = 25;
        }

        StEnemy(float x, float y, bool newSpawn) : Enemy(x, y){
            this->cooldown = GetRandomValue(120, 600);
            this->spawning = newSpawn;
            this->StScore = 25;
        }
        int getStScore() {return StScore;}

        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};