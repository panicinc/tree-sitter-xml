#include <string>
#include <map>

using std::string;
using std::map;

struct Tag {
  // For some reason, Tag will not necessarily be aligned properly when stored in vector<Tag>
  // unless it's forced to align by adding an alignable type to the start of the struct.
  // This might be an optimization on structs with single members, but to "fix" it there's just an integer here.
  uint8_t _unused;
  
  string name;

  // This default constructor is used in the case where there is not enough space
  // in the serialization buffer to store all of the tags. In that case, tags
  // that cannot be serialized will be treated as having an unknown type. These
  // tags will be closed via implicit end tags regardless of the next closing
  // tag is encountered.
  Tag() : _unused(0) {}

  Tag(const string &name) : _unused(0), name(name) {}

  bool operator==(const Tag &other) const {
    if (name != other.name) return false;
    return true;
  }

  static inline Tag for_name(const string &name) {
    return Tag(name);
  }
};
