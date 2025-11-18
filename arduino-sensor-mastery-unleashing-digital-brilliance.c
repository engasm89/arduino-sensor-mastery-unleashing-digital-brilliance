// Simulate polling of multiple digital sensors and actuator decisions
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Entry
  printf("Arduino Sensor Mastery: Unleashing Digital Brilliance\n"); // Title
  int motion[] = {0,1,0,1,1}; // PIR readings
  int door[] = {1,1,0,0,1}; // Reed switch (1=closed)
  for (int i = 0; i < 5; ++i) { // Iterate samples
    int buzz = (motion[i] && !door[i]); // Actuator rule
    printf("motion=%d door=%d buzzer=%d\n", motion[i], door[i], buzz); // Log
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End main
