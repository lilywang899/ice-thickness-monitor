# ice-thickness-monitor

UART communicatoin between boards works

Temp Read with dht11 and arduino works

Temp read with dht11 and stm doesnt crash but not send messages to console

RGB LED works with PWM 

probably need pull up resistor with dht11, message to console is sending


i think: 16 MHz SYSCLCK, 15 prescaler, period 65535 -> delay(#microseconds)
to be checked