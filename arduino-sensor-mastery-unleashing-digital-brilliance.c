/*
 * Course: Arduino Sensor Mastery Unleashing Digital Brilliance
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Sensor Mastery Unleashing Digital Brilliance" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-sensor-mastery-unleashing-digital-brilliance/
 * Repository: https://github.com/engasm89/arduino-sensor-mastery-unleashing-digital-brilliance
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Simulate polling of multiple digital sensors and actuator decisions
#include <stdio.h> // Logs
#include <unistd.h> // Delay

int main(void) { // Program entry point
  printf("Arduino Sensor Mastery: Unleashing Digital Brilliance\n"); // Title
  int motion[] = {0,1,0,1,1}; // PIR readings
  int door[] = {1,1,0,0,1}; // Reed switch (1=closed)
  for (int i = 0; i < 5; ++i) { // Iterate samples
    int buzz = (motion[i] && !door[i]); // Actuator rule
    printf("motion=%d door=%d buzzer=%d\n", motion[i], door[i], buzz); // Log
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End of main function
