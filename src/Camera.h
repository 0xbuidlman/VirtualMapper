//
//  Camera.h
//  videoMappingPreview
//
//  Created by 麦 on 1/23/15.
//
//

#pragma once


#include <stdio.h>
#include <iostream>
#include <string>

#include "ofMain.h"


using namespace std;

class Camera {
public:
	string name;
	ofVec3f position;
	ofVec3f euler;
	float fov;
};