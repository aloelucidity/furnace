#include "../ta-utils.h"

struct DivSample {
  String name;
  int length, rate;
  signed char vol, pitch;
  unsigned char depth;
  short* data;
  unsigned int rendLength, adpcmRendLength, rendOff;
  short* rendData;
  unsigned char* adpcmRendData;

  bool save(const char* path);
  DivSample():
    name(""),
    length(0),
    rate(32000),
    vol(0),
    pitch(0),
    depth(16),
    data(NULL),
    rendLength(0),
    adpcmRendLength(0),
    rendOff(0),
    rendData(NULL),
    adpcmRendData(NULL) {}
  ~DivSample();
};
