#include <stdint.h>

class Aoi {
    public:
        const int32_t ID;
        uint16_t attrs;
        Aoi(uint16_t attrs);
        static Aoi generate_aoi(int type);
};