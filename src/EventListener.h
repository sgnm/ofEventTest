//
//  EventListener.h
//  ofEventExample
//
//  Created by Shin on 9/11/16.
//
//

#ifndef __ofEventExample__EventListener__
#define __ofEventExample__EventListener__

#include <stdio.h>
#include "ofEvents.h"
#include "EventNotifier.h"

class EventListener{
public:
    void setup();
    void callback(int &f);
    void exit();
    
    EventNotifier notifier;
};


#endif /* defined(__ofEventExample__EventListener__) */
