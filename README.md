seg__traffic_lig.ino – A multi-intersection 4-way traffic light controller integrated with a 7-segment display countdown timer.  

traffic_light.ino – A standard, automated traffic light system sequencing Red, Yellow, and Green LEDs using basic state delays.

Menu_Button3.ino – An interactive 16x2 LCD UI menu driven by button push-states. It uses sequential page states to display different days of the week.  

relay_button_bulb.ino – A momentary button toggle system that switches an external bulb relay while outputting system status to an LCD display.

temp_sensor.ino – A temperature alert system utilizing an analog sensor and an LCD screen. It maps environmental thresholds into three discrete status zones (Safe, Caution, and Red Zone) backed by localized LED and buzzer alerts.

motor_led.ino – Dual-channel motor sequencing paired with status LEDs to coordinate directional control loops.  

motor_relay.ino – A clean, loop-interval relay sketch meant for safely switching inductive motor loads or heavy actuators.

Microcontroller: Arduino Uno / Nano
Displays: 16x2 and 20x4 Character LCDs (via LiquidCrystal library), Common Anode/Cathode 7-Segment Display.  
Sensors: Analog Temperature Sensor (e.g., LM35 / TMP36).  
Actuators: DC Motors, 5V Relay Modules.  
Signaling: Red/Yellow/Green LEDs, Active Buzzers, Tactile Push-Buttons.

How to Run the Code
Download and install the Arduino IDE.
Clone this repository to your local machine:
Open any .ino file in the IDE.
Ensure the LiquidCrystal library is installed (built-in by default in the IDE).  
Wire your hardware according to the pin definitions declared at the top of each script.  
Select your Board and COM Port, then click Upload.
