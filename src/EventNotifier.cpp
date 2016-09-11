//
//  EventNotifier.cpp
//  ofEventExample
//
//  Created by Shin on 9/11/16.
//
//

#include "EventNotifier.h"

void EventNotifier::sendNotify(){
    cout << __PRETTY_FUNCTION__ << endl;
    int num = 10;
    ofNotifyEvent(val, num);
}