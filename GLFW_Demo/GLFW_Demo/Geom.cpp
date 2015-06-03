//
//  Geom.cpp
//  GLFW_Demo
//
//  Created by Ira on 6/3/15.
//  Copyright (c) 2015 C3. All rights reserved.
//

#include "Geom.h"

Geom::Geom(){}

void Geom::display() {
    
}

void Geom::init() {
    
}

void Geom::calcFaces() {
    for(int i=0; i<inds.size(); ++i){
        faces.push_back( Face(verts.at(inds.at(i).e0), verts.at(inds.at(i).e1), verts.at(inds.at(i).e2)) );
    }
                                                     
    
}