#pragma once

#include "cloud-type.h"
#include "spl-cast.h"

struct bolt;
class dist;
class actor;

spret conjure_flame(int pow, bool fail);
spret sea_of_fire();

void big_cloud(cloud_type cl_type, const actor *agent, const coord_def& where,
               int pow, int size, int spread_rate = -1);

spret cast_big_c(int pow, spell_type spl, const actor *caster, bolt &beam,
                      bool fail);

spret cast_ring_of_flames(int power, bool fail);
void manage_fire_shield();

spret cast_corpse_rot(bool fail);
spret corpse_rot(actor* caster, bool actual=true);

void holy_flames(monster* caster, actor* defender);

spret cast_cloud_cone(const actor *caster, int pow, const coord_def &pos,
                           bool fail = false);
