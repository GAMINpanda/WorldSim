#include <list>
#include "Aoi.h"
#pragma once

class Biome {
    public:
        const uint32_t ID;
        uint16_t attrs;
        Biome(uint16_t attrs);
        static Biome generate_biome(int type);

    private:
        std::list<uint32_t> adj;
        std::list<Aoi*> aois;
        void connect_biome(int id);
};