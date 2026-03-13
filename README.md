# New Nixie Tube Driver V1
If you are a maker or nixie enthusiast, you have probably used or had contact with a nixie tube drivers e.g. 155ID1, 74141. Unfortunately, these drivers have their technical limitations for modern projects. Sometimes VFD or AC electroluminescent display drivers (such as HV5812 or HV5530) are used to control nixie tubes but they are mainly suitable for dedicated applications and the lack of flexibility in control and power supply or even in assembly (smd) effectively discourages experimenting with new nixie tube designs.

An alternative solution may be a new nixie tube driver.
* 10 outputs for connecting the nixie tube cathodes (K0-K9)
* 300V off-state maximum output voltage
* Compatible with all 5V / 3.3V designs
* Easy to use with Arduino or Raspberry Pi etc. (only 3 control lines)
* The drivers can be connected in series

## Examples - Code & Diagrams
- Code
  - [How to control 1 nixie tube - Arduino code](https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/example/Nixie-Tube-Driver-Example-1.ino)
  - [How to control 1-6 nixie tubes - Arduino code](https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/example/Nixie-Tube-Driver-Example-2.ino)
  - How to control 4 nixie tubes - Raspberry Pi Pico W -> to do
- Diagrams
  - [How to connect 4 nixie tubes with Arduino Nano](https://github.com/marcinsaj/Nixie-Tube-Driver/raw/master/datasheet/How-To-Control-4-Nixie-Tubes-Arduino-Nano.pdf)
  - [How to connect 4 nixie tubes with Raspberry Pi Pico W](https://github.com/marcinsaj/Nixie-Tube-Driver/raw/master/datasheet/How-To-Control-4-Nixie-Tubes-Raspberry-Pi-Pico-W.pdf) + [Pinout](https://github.com/marcinsaj/Nixie-Tube-Driver/raw/master/datasheet/Raspberry-Pi-Pico-W-Pinout.pdf)


<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver-cover.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver.jpg"></p>
<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver-diagram.jpg"></p>

## Libraries for use in your own projects
* Eagle Library
* Altium Library
* KiCad Library
* EasyEDA Library

**<a href="https://github.com/marcinsaj/Nixie-Tube-Driver/raw/master/library/Library-Eagle-Altium-KiCad-EasyEDA.zip" download="Library - Eagle Altium KiCad EasyEDA ">Download all libraries</a>**

<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver-library.jpg"></p>


<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver-schematic.png"></p>

**<a href="https://github.com/marcinsaj/Nixie-Tube-Driver/raw/master/datasheet/Nixie-Tube-Driver-Schematic.pdf">Download Nixie Tube Driver Schematic</a>**
<p align="center"><img src="https://github.com/marcinsaj/Nixie-Tube-Driver/blob/master/extras/nixie-tube-driver-pcb.jpg"></p>
