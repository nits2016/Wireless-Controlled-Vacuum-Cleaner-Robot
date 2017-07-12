# Wireless-Controlled-Vacuum-Cleaner-Robot
A wireless Vacuum cleaner which can be controlled automatically or from an android application
We all are very familiar with a vacuum cleaner which create a partial vacuum to suck up dust and
dirt from the floor and from other surfaces. In this project, we made a hoover which can automatic sweep floor or can be easily handled by our smartphone and swipe dust & dirt with the same
efficiency as our normal sweepers do, eliminating the problem of holding it by hand and giving us
access of cleaning a spot rather than the whole area.

Construction of Model :- 
The model is rectangular bot with concealed wheels(two) at back and a castor wheel at front. The main motor and rotating brush lies at the centre of the body. At the centre-bottom of design one
nozzle is placed which is connected to the dirt bag in which dirt will be collected. There are also
two brush-propellers placed at the corners which rotates and collects the dirt pushing it at the right position for the nozzle. Moreover, the bot from the centre bottom will have a boundary of
brushes to prevent the dirt from scattering/spreading.

Requirement of motors :- Two 150rpm motors for track wheels. One 1000rpm main motor for
creating the suction pull. Two mini 50rpm dc motors for two end propellers. The ATmega328p and
L293D IC’s are used to configure all the motors and a Bluetooth module (later we experimented
with the help of Xbee) for making it wireless.
ATmega328p – It is a 8-bit AVR based microcontroller combines 32KB ISP flash memory with readwhile-
write capabilities. The device operates between 1.8-5.5volts. For programming Arduino IDE
is used.
L293D – It is a typical Motor Driver IC which allows DC motor to drive on either direction. It is a 16-
pin IC which can control a set of two DC motors simultaneously in any direction.
Bluetooth Module(HC-05) – It is an easy to use Bluetooth Serial Port Protocol module designed for transparent wireless serial connection setup. The module can be used in a Master or Slave configuration, making it a great solution for wireless communication.

Implementation and Working :-
The robot will be controlled by an android application(Made in MIT Inventor App). The application contains movement buttons for the forward/reverse/left/right motion with an extra button for the switching on the
vacuum cleaner. The Bluetooth module will be interfaced with ATmega328p with Rx and Tx pin connected to the Tx and Rx of Atmega respectively. The application will get connected to
Bluetooth module via Bluetooth and will sent serial bytes to the ATmega according to the operations to be performed. The two track motors are connected to the input and output pin
(10,11) of IC L293D and the enable pin (9) of the ic will be controlled by ATmega328p (clockwise
and anticlockwise direction).We use Arduino software to program the ATmega328p.The code will
trigger the module and take serial bytes from the android app and work according to the given
operation.

The Android apllication can be downloaded from :-
https://drive.google.com/open?id=0B529HQ0k77iAbFZVMVltN21vMHM

To know the android application : 
just import the below .aia file to your mit inventor new project
