#pragma once
#include "Enemy.hpp"

class SpEnemy : public Enemy {
    private: 
        float angle = 90;
        int delay = 0;
        int specialCooldown = GetRandomValue(1380, 3600);
        bool stop = false;
        int SpScore = 100;

    public:
        SpEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(300, 1380); 
            this->health = 4;
            this->score = 100;
        }

        SpEnemy(float x, float y, bool newSpawn) : Enemy(x, y){
            this->cooldown = GetRandomValue(360, 1380);
            this->health = 4;
            this->spawning = newSpawn;
            this->SpScore = 100;
        }
        int getSpScore() {return SpScore;}

        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};