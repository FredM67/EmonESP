#ifndef __EVENT_H
#define __EVENT_H

#include <Arduino.h>

void event_send(const String &event);
void event_send(JsonDocument &event);

#endif
