# arduino_tsky120A-ESC-_Setting  

### tsky120A ESC Setting  
#### 아래 PDF파일에 포함되어 있는 전진-브레이크, 전진-후진-브레이크, 전진-후진 등의 세팅 중 원하는 모드로 설정하고 아두이노 코드를 이용하여 세팅하면 됨  
* 전진-브레이크 : ESC(전자변속기)의 성능을 전진에 집중함  
* 전진-후진-브레이크 : 전진, 후진이 가능하며, 완전히 멈춘 후에 후진을 해야 동작함  
* 전진-후진 : 전진, 후진이 가능하며, 전진 중 한번의 조작으로 바로 후진이 동작함  

#### 전후진 모드 세팅방법  
* 키를 누른 상태에서 전원을 켬  
* 빨간불과 비프가 울려도 키를 3초 정도 계속 누르고 있음  
* 파란불이 한 번 켜진 후 키를 떼면 바로 전후진 모드 세팅에 들어가서 빨간불과 비프음의 횟수로 현재 모드를 알려줌  
* 키를 누를 때마다 1번 모드(비프음 1번 울림) - 2번 모드(비프음 2번 울림) - 3번 모드(비프음 3번 울림) 순으로 순환함  
* 원하는 모드의 비프음 횟수가 되면 전원을 끔  
* 이후 전원을 켜면 해당 전후진 모드로 사용할 수 있게 됨  

#### 센서 범위 세팅방법
* 키를 누르고 전원을 켬
* 빨간불이 들어오며 비프가 계속 울리면 송신기를 중립을 맞추고 키를 한 번 누름 - 파란 불과 비프가 한 번 울림  
* 송신기를 전진에 맞추고 키를 한 번 누름 - 파란 불과 비프가 두 번 울림  
* 송신기를 후진에 맞추고 키를 한 번 누름 - 파란 불과 비프가 세 번 울림  
* ESC를 껐다가 다시 켜면 사용 가능  

[Setting Manual Download](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/HW-13-SC.pdf)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-1.png?raw=true)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-2.png?raw=true)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-3.png?raw=true)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-4.png?raw=true)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-5.png?raw=true)  
![](https://github.com/mtinet/arduino_tsky120A-ESC-_Setting/blob/master/image/tsky120A-6.png?raw=true)  

