#include <stdint.h>
#include <list>
#include <utility>

class Nation {
    public:
        const int32_t ID;
        uint16_t attrs;
        Nation(uint16_t attrs);
        static Nation generate_nation(int type);

    private:
        std::list<std::pair <int, int>> control;
};