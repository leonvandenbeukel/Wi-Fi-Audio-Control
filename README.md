# Wi-Fi Audio Control

### Introduction

The basic idea is to split one audio signal into two separate audio signals. With a (mobile) app you can control the audio signals. The left and right volume of the first audio signal can be controlled with sliders. The second audio signal can be contoller with a 6 band equalizer.

### Components

| Component                                     | Amount |
| -                                             | -      |
| ESP8266 Wi-Fi module                          | 1x     |
| ADAU1401 SigmaDSP 28-/56-Bit Audio Processor  | 1x     |
| 3.5mm jack input connector                    | 3x     |
| Micro USB breakout board                      | 1x     |
| Green 5mm LED and 220 ohm resistor (optional) | 1x     |


### Schema

GPIO5 and GPIO4 are used for i2c (D1 and D2). Check this [reference](https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/) for more info. The USB Breakout board used as a power supply from a regular 5V phone charger or USB from a PC or laptop.

| ADAU1401      | ESP8266    | USB board  | Jack In 1 | Jack Out 1 | Jack Out 2 |
| -  | - | - | - | - | - |
| +5V           | VIN        | +5V        |           | | |
| GND           | GND        | GND        |           | | |
| SDA           | D2 (GPIO4) |            |           | | |
| SCL           | D1 (GPIO5) |            |           | | |
| In GND        |            |            | GND       | | |
| In Left       |            |            | In Left   | | |
| In Right      |            |            | In Right  | | |
| Out 1 GND     |            |            |           | Out 1 GND     | |
| Out 1 Left    |            |            |           | Out 1 Left    | |
| Out 1 Right   |            |            |           | Out 1 Right   | |
| Out 2 GND     |            |            |           | | Out 2 GND   |
| Out 2 Left    |            |            |           | | Out 2 Left  |
| Out 2 Right   |            |            |           | | Out 2 Right |

Optionally connect a status LED in series with a 220 ohm resistor to D5 (GPIO14) of the ESP8266 and to GND.

### Sigma Studio

To use this project you have to install Sigma Studio 4.x. After installing Sigma Studio you can open the file:

> \Sigma\Project.dspproj 

But before opening the project you have to create a folder:

> \Sigma\Output

You can use the buttons "Link Compile Download" and then "Export System Files" and then select the "Output" folder as destination. There is a post export command that copies the Project_IC* files to the Server folder. From the Arduino IDE these files are now included in the Arduino project. 


Add the file:

> SigmaStudioFW.h

from your "C:\Program Files\Analog Devices\SigmaStudio 4.x" to the "Server" folder also. Because of copyright you are not allowed to distribute this file.


![alt text](https://github.com/leonvandenbeukel/Wi-Fi-Audio-Control/blob/master/Image/Sigma-schema.png)

### Screenshot

![alt text](https://github.com/leonvandenbeukel/Wi-Fi-Audio-Control/blob/master/Image/Mobile.png)

### Prototype photo

<img src="https://github.com/leonvandenbeukel/Wi-Fi-Audio-Control/blob/master/Image/Prototype.jpg" width="600">



