# libreriasAVR

En este repositorio vamos a encontrar informacion sobre los modulos y perifericos, asi mismo de como se programan sus librerias en lenguaje_C

## MODULOS UART

Un módulo USART (Universal Synchronous/Asynchronous Receiver/Transmitter) es un componente 
electrónico que se utiliza en microcontroladores y otros dispositivos electrónicos para facilitar la 
comunicación serie de datos. 

![image](https://user-images.githubusercontent.com/97457868/234584760-6bb01c94-bf28-4082-910b-f7c71338823c.png)

  
  
Es capaz de enviar y recibir datos en serie de forma síncrona o asíncrona, lo que significa que puede 
trabajar con diferentes protocolos de comunicación, como UART, SPI y I2C. El módulo también 
puede configurarse para diferentes velocidades de transmisión de datos, desde velocidades muy 
lentas hasta velocidades muy rápidas. 

![image](https://user-images.githubusercontent.com/97457868/234584992-9f37d793-5440-4507-8fba-4ca7cde51210.png)

En resumen, el módulo USART es una herramienta importante para la comunicación serial en 
dispositivos electrónicos, permitiendo la transmisión y recepción de datos en diferentes protocolos 
y velocidades de manera eficiente y confiable.

### APLICACIONES DONDE SE UTILIZAN MODULOS UART 

Los módulos UART proporcionan una forma fácil y económica de comunicación serial asíncrona 
entre dispositivos. Algunas de las aplicaciones más comunes de los módulos UART son: 

1.  Comunicación entre microcontroladores: Los módulos UART se utilizan a menudo para establecer la comunicación entre dos o más microcontroladores. Esto permite la 
transferencia de datos entre ellos, lo que es útil en aplicaciones como la comunicación de control de motores, la comunicación de control de iluminación y la comunicación de sensores. 

![image](https://user-images.githubusercontent.com/97457868/234585418-1b99c409-b12e-45ea-87b8-2a37634dfda3.png)

2. Transferencia de datos a través de cables: Los módulos UART se utilizan a menudo para transferir datos a través de cables, ya que la comunicación serial asíncrona es simple y robusta. Los módulos UART pueden utilizarse para la transferencia de datos a través de puertos serie RS-232, RS-485 o USB, lo que es útil en aplicaciones como la transferencia de datos entre sistemas de control industrial y la transferencia de datos de sensores a un ordenador. 
 
 ![image](https://user-images.githubusercontent.com/97457868/234587453-953eb093-57c5-4bd2-abf3-c5e8721be5f6.png)
 
 ![image](https://user-images.githubusercontent.com/97457868/234587505-a79759c8-3676-4ec6-b0af-687b34cd3f90.png)

3. Comunicación inalámbrica: Los módulos UART también se utilizan a menudo para la comunicación inalámbrica entre dispositivos, mediante la transmisión de datos a través de módulos transceptores RF (radiofrecuencia). Los módulos UART pueden utilizarse para establecer comunicación inalámbrica entre dispositivos como sensores, actuadores, controladores y sistemas de automatización. 

  ![image](https://user-images.githubusercontent.com/97457868/234587728-6d8b2e4f-bdb6-4ea7-9912-a6165a5070bd.png)

4. Comunicación con dispositivos periféricos: Los módulos UART se utilizan a menudo para establecer la comunicación con dispositivos periféricos como pantallas, teclados y ratones. Esto permite la transferencia de datos de entrada y salida entre el dispositivo periférico y el microcontrolador, lo que es útil en aplicaciones como la interfaz de usuario en sistemas embebidos. 
  
  ![image](https://user-images.githubusercontent.com/97457868/234588643-358aefb6-ae38-453b-82d9-4c2681fe3a0d.png)


6. Interconexión de dispositivos IoT: Los módulos UART también se utilizan a menudo para la interconexión de dispositivos de Internet de las cosas (IoT). Los módulos UART pueden utilizarse para la transferencia de datos entre sensores y actuadores en redes de IoT, lo que permite la monitorización y control remoto de sistemas. 

![image](https://user-images.githubusercontent.com/97457868/234589186-7c54dbd6-96dc-4b1b-9f41-51c5589395ae.png)


En resumen, los módulos UART son muy útiles para establecer comunicación serial asíncrona entre dispositivos, lo que los hace ampliamente utilizados en una gran variedad de aplicaciones, desde la transferencia de datos entre microcontroladores hasta la comunicación inalámbrica y la interconexión de dispositivos IoT.

## Conceptos Básicos de los módulos UART

Los módulos UART (Universal Asynchronous Receiver/Transmitter) son dispositivos que permiten la comunicación serial asíncrona entre dos dispositivos electrónicos. A continuación, se detallan algunos de los conceptos básicos asociados a los módulos UART: 

1. Comunicación serial asíncrona: se refiere a una forma de comunicación en la que los datos se transmiten sin un reloj común entre los dispositivos que se comunican. En la comunicación serial asíncrona, se utiliza un bit de inicio, un número fijo de bits de datos (generalmente 8 bits), un bit de paridad opcional y uno o más bits de parada para delimitar cada byte de datos transmitido. 

2. Velocidad de transmisión (Baudrate): se refiere a la tasa de transferencia de datos a través de la comunicación serial. Se mide en bits por segundo (baudios) y se puede ajustar para adaptarse a diferentes velocidades de procesamiento y requisitos de transferencia de datos. 

3. Bits de datos: se refiere al número de bits que se utilizan para representar cada carácter transmitido. El número de bits de datos puede variar entre 5 y 9 bits.


4. Bits de parada: se refiere al número de bits que se utilizan para indicar el final de un carácter transmitido. Generalmente se utiliza un bit de parada, pero es posible utilizar más de un bit de parada. 

5. Bit de paridad: se refiere a un bit adicional que se puede agregar a cada carácter transmitido para detectar errores de transmisión. El bit de paridad puede ser par, impar o no utilizado. 

6. Modos de transmisión y recepción: los módulos UART pueden operar en modos de transmisión y recepción asíncrona, síncrona o de medio dúplex. En el modo de transmisión  asíncrona, el módulo UART transmite datos de forma unidireccional. En el modo de recepción asíncrona, el módulo UART recibe datos de forma unidireccional. En el modo de transmisión y recepción síncrona, el módulo UART utiliza un reloj para sincronizar la transmisión y recepción de datos. En el modo de medio dúplex, el módulo UART puede transmitir y recibir datos, pero no al mismo tiempo. 

