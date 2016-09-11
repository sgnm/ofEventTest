//
//  EventListener.cpp
//  ofEventExample
//
//  Created by Shin on 9/11/16.
//
//

#include "EventListener.h"

void EventListener::setup(){
    cout << __PRETTY_FUNCTION__ << endl;
    ofAddListener(notifier.val, this, &EventListener::callback);
}

void EventListener::callback(int &val){
    cout << __PRETTY_FUNCTION__ << endl;
    cout << "val: " << val << endl;
}

void EventListener::exit(){
    cout << __PRETTY_FUNCTION__ << endl;
    ofRemoveListener(notifier.val, this, &EventListener::callback);
}