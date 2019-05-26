# Project description

A template project with FreeRTOS on STM32F407VGT6 microcontroller. 

<p align="center">
  <img width="460" height="300" src="images/board.jpg">
  <br>A STM32F4Discovery board with green LED flashed after pushing User button
</p>


## How to use

* Clone or fork this repo
* Compile it with favorite IDE (SW4STM in my case)
* Flash the microcontroller

## How it works

The FreeRTOS configuration is in `inc/FreeRTOSConfig.h`.
`configCPU_CLOCK_HZ` is set to 16 MHz (STM is clocked by HSI clock source).

## License
The contents of this repository are covered under the [MIT License](./LICENSE.txt)

