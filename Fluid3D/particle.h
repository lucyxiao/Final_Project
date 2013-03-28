#ifndef PARTICLE_H
#define PARTICLE_H

#include "vec.h"
#include <vector>

class Particle {
public:
	float s; // -1 for negative, 1 for positive
	Vec3f pos;
	float r;


	Particle(float px, float py, float pz) {
		pos = Vec3f(px, py, pz);
	};

	Particle(Vec3f p) {
		pos = p;
	};
};

#endif