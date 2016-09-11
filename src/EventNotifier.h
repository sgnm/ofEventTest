//
//  EventNotifier.h
//  ofEventExample
//
//  Created by Shin on 9/11/16.
//
//

#ifndef __ofEventExample__EventNotifier__
#define __ofEventExample__EventNotifier__

#include <stdio.h>
#include "ofEvents.h"

class EventNotifier{
public:
    ofEvent<int> val;
    
    void sendNotify();
};

#endif /* defined(__ofEventExample__EventNotifier__) */
