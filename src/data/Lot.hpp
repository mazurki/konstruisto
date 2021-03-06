#ifndef DATA_LOT_HPP
#define DATA_LOT_HPP

#include "Direction.hpp"
#include "Position.hpp"

namespace data {

struct Lot {
  unsigned int objectId;
  Position position;
  Direction direction;
  glm::ivec2 size;
};
}

#endif