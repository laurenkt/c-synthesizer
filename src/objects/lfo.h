#ifndef LFO_H__
#define LFO_H__

#define LFO_WIDTH  200
#define LFO_HEIGHT 200

typedef struct LFO {
	enum {Volume, Frequency} modulation;
	float theta;
} LFO;

void LFO_init();

#endif
