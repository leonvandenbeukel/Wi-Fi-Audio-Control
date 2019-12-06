# Wi-Fi-Audio-Control

### Introduction

The basic idea is to split one audio signal into two separate audio signals. With a (mobile) app you can control the audio signals. The left and right volume of the first audio signal can be controlled with sliders. The second audio signal can be contoller with a 6 band equalizer.

### Schema

GPIO5 and GPIO4 are used for i2c (D1 and D2). For reference check: https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/

### Sigma Studio

To use this project you have to install Sigma Studio 4.x. After installing Sigma Studio you can open the file \Sigma\Project.dspproj but before opening the project you have to create a folder "Output" in the Sigma folder. You can use the buttons "Link Compile Download" and then "Export System Files", then select the "Output" folder as destination. There is a post export command that copies the Project_IC* files to the Server folder. From the Arduino IDE these files are now included in the Arduino project.
