// This #include statement was automatically added by the Particle IDE.
#include "NCD4Relay.h"
NCD4Relay relayController;

void setup() {
    Serial.begin(115200);
    relayController.setAddress(0,0,0);
    relayController.turnOffAllRelays();
    delay(2000);
    Serial.println("Start");
    Serial.print("Input Status = ");
    Serial.println(relayController.readAllInputs());
}

void loop() {
    for(int i = 1; i < 5;  i++){
        relayController.turnOnRelay(i);
        delay(100);
    }
    for(int i = 1; i < 5; i++){
        relayController.turnOffRelay(i);
        delay(100);
    }
    for(int i = 0; i < 3; i++){
        relayController.turnOnAllRelays();
        delay(100);
        relayController.turnOffAllRelays();
        delay(100);
    }
    for(int i = 1; i < 5; i++){
        relayController.toggleRelay(i);
        delay(50);
        relayController.toggleRelay(i);
        delay(50);
    }
    relayController.setBankStatus(1);
    delay(100);
    relayController.setBankStatus(2);
    delay(100);
    relayController.setBankStatus(5);
    delay(100);
    relayController.setBankStatus(10);
    delay(100);
    relayController.setBankStatus(4);
    delay(100);
    relayController.setBankStatus(8);
    delay(100);
    relayController.setBankStatus(0);
    delay(100);
}