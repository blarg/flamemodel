/*
 * Copyright 2011 University of Sheffield.
 * Author: Dr Paul Richmond 
 * Contact: p.richmond@sheffield.ac.uk (http://www.paulrichmond.staff.shef.ac.uk)
 *
 * University of Sheffield retain all intellectual property and 
 * proprietary rights in and to this software and related documentation. 
 * Any use, reproduction, disclosure, or distribution of this software 
 * and related documentation without an express license agreement from
 * University of Sheffield is strictly prohibited.
 *
 * For terms of licence agreement please attached licence or view licence 
 * on www.flamegpu.com website.
 * 
 */

#ifndef __VISUALISATION_H
#define __VISUALISATION_H

#define PAUSE_ON_START
// #define SIMULATION_DELAY 20

// constants
const unsigned int WINDOW_WIDTH = 512;
const unsigned int WINDOW_HEIGHT = 512;

//frustrum
const float NEAR_CLIP = 0.1f;
const float FAR_CLIP = 300;

//Circle model fidelity
const int SPHERE_SLICES = 20;
const int SPHERE_STACKS = 20;
const float SPHERE_RADIUS = 0.1f;

//Viewing Distance
const float VIEW_DISTANCE = 16;

//light position
GLfloat LIGHT_POSITION[] = {10.0f, 10.0f, 10.0f, 1.0f};

#endif // __VISUALISATION_H
