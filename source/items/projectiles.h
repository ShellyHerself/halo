/*
PROJECTILES.H

header included in hcex build.
*/

#ifndef __PROJECTILES_H
#define __PROJECTILES_H
#pragma once

/* ---------- headers */

#include "objects.h"

/* ---------- constants */

enum
{
	PROJECTILE_DEFINITION_TAG = 'proj', // 0x70726F6A
	PROJECTILE_DEFINITION_VERSION = 5, // 0x0005
};

/* ---------- macros */

/* ---------- structures */

/* ---------- prototypes/PROJECTILES.C */

void projectile_accelerate(long projectile_index, union real_vector3d const *acceleration);
real projectile_estimate_time_to_target(struct projectile_definition const *projectile_definition, real target_distance);

/* ---------- globals */

/* ---------- public code */

#endif // __PROJECTILES_H
