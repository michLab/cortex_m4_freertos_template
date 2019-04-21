################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gpio.c \
../src/main.c 

OBJS += \
./src/gpio.o \
./src/main.o 

C_DEPS += \
./src/gpio.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F407VGTx -DDEBUG -DSTM32F40XX -DSTM32F40_41xxx -I"/home/michal/workspace/cm4_template_freertos/inc" -I"/home/michal/workspace/cm4_template_freertos/CMSIS" -I"/home/michal/workspace/cm4_template_freertos/FreeRTOS/Source/include" -I"/home/michal/workspace/cm4_template_freertos/FreeRTOS/Source/portable/GCC/ARM_CM4F" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


