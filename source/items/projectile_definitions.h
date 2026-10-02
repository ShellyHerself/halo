/*
PROJECTILE_DEFINITIONS.H

header included in hcex build.
*/

#ifndef __PROJECTILE_DEFINITIONS_H
#define __PROJECTILE_DEFINITIONS_H
#pragma once

/* ---------- headers */

#include "object_definitions.h"

/* ---------- constants */

/* ---------- macros */

#define projectile_definition_get(index) ((struct projectile_definition *)tag_get(PROJECTILE_DEFINITION_TAG, index))

/* ---------- structures */

struct _projectile_definition
{
	unsigned long flags;
	short detonation_timer_mode;
	short impact_noise;
	short function_modes[4];
	struct tag_reference super_detonation_effect;
	real danger_perception_radius;
	real collision_radius;
	real arming_time;
	real danger_radius;
	struct tag_reference detonation_effect;
	real detonation_minimum_time;
	real detonation_maximum_time;
	real detonation_minimum_velocity;
	real detonation_maximum_range;
	real air_gravity_scale;
	real air_minimum_damage_distance;
	real air_maximum_damage_distance;
	real water_gravity_scale;
	real water_minimum_damage_distance;
	real water_maximum_damage_distance;
	real initial_velocity;
	real final_velocity;
	real guided_angular_velocity;
	short detonation_noise;
	unsigned __int16 unused1;
	struct tag_reference detonation_timer_started;
	struct tag_reference flyby_sound;
	struct tag_reference detonation_damage;
	struct tag_reference impact_damage;
	long unused2[3];
	struct tag_block material_responses;
};


struct projectile_definition
{
	struct _object_definition object;
	struct _projectile_definition projectile;
};


/* ---------- prototypes/EXAMPLE.C */

/* ---------- globals */

/* ---------- public code */

#endif // __PROJECTILE_DEFINITIONS_H
