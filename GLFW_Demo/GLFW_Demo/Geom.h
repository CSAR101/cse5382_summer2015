//
//  Base class for all geometry
//  Geom.h
//  GLFW_Demo
//
//  Created by Ira on 6/3/15.
//  Copyright (c) 2015 C3. All rights reserved.
//

#ifndef __GLFW_Demo__Geom__
#define __GLFW_Demo__Geom__

#include <stdio.h>
#include <vector>
#include "Elem.h"
#include "Face.h"
#include "glm/glm.hpp"

#endif /* defined(__GLFW_Demo__Geom__) */


class Geom {
    
protected:
    
    std::vector<glm::vec3> verts;
    std::vector<glm::vec4> cols;
    std::vector<Elem> inds;
    std::vector<Face> faces;
    
    Geom();
    
    void display();
    void calcFaces();
    
    virtual void init();
    
    virtual void calcVerts() = 0;
    virtual void calcInds() = 0;

};











