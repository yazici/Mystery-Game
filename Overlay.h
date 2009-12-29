/*
 * Overlay.h
 *
 *  Created on: 12 Dec 2009
 *      Author: greg
 */

#ifndef OVERLAY_H_
#define OVERLAY_H_

class World;

class Overlay
{
  public:
    Overlay(World*);
    virtual ~Overlay();
    virtual void draw() = 0;
  protected:
    World* world;
};

#endif /* OVERLAY_H_ */
