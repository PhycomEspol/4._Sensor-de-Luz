# Alarma para evitar asfixias en automoviles con arduino
![Image text](https://github.com/PhycomEspol/4._Sensor-de-Luz/blob/main/error404.png)
## Introducción
El objetivo de este proyecto es crear una alarma que evite la asfixia de una persona o mascota dentro de un auto con ventanas cerradas. En la actualidad, han ocurrido muchos accidentes debido a la falta de regulación del aire en el interior del auto. La alarma está diseñada para que la persona sea consciente del clima que hay en el momento antes de bajarse del coche, y así, ajustar el aire acondicionado para que no haya riesgo de asfixia.
## Materiales y Recursos
+ Arduino UNO
+ Fotorresistencia
+ Resistencias
+ Protoboard
+ Led RGB
+ Sensor de temperatura
+ Tinkercad
## Funcionamiento
La alarma consta de dos sensores, una fotorresistencia y un sensor de temperatura, que trabajan juntos para mantener una vigilancia constante sobre el clima interior del vehículo. La fotorresistencia mide la cantidad de luz que ingresa al interior del vehículo y en base a eso, indica si el clima interior está en un nivel seguro o no. Si la cantidad de luz es baja, la señal será verde, indicando que hay suficiente aire fresco para mantener un ambiente seguro. Si la cantidad de luz es alta, la señal será roja, indicando que hay un exceso de calor y la necesidad de ajustar el aire acondicionado. Si la cantidad de luz es intermedia, la señal será amarilla, indicando que hay que prestar atención a la temperatura interior.

Por su parte, el sensor de temperatura mide la temperatura del interior del vehículo y, en base a eso, también indica si el clima interior es seguro o no. Si la temperatura es menor a 18°C, la señal será verde, indicando que el aire es fresco y seguro para respirar. Si la temperatura es mayor a 35°C, la señal será roja, indicando que hay un exceso de calor y la necesidad de ajustar el aire acondicionado. Si la temperatura es intermedia, la señal será amarilla, indicando que hay que prestar atención a la cantidad de luz que ingresa al vehículo.

La alarma utiliza la combinación de ambos sensores para brindar una señal clara y precisa sobre el clima interior del vehículo, permitiendo a la persona tomar las medidas necesarias para evitar la asfixia.
## Pasos a seguir
1.	Conectar todos los componentes a la protoboard siguiendo el esquema de conexión indicado.
2.	Cargar el código en el Arduino UNO.
3.	Encender el auto y ajustar el aire acondicionado dependiendo de la señal que brinde la alarma (verde o rojo).
## Errores y mejores
Durante el proceso de creación de la alarma, se identificó un error en la conexión de los dos sensores al mismo led. Para mejorar el proyecto, se pueden incluir dos mejoras:
1.	Crear un circuito automatizado que ajuste el aire acondicionado dependiendo de la señal de la alarma, sin que la persona tenga que estar pendiente de ella.
2.	Crear una aplicación personal que permita ajustar el clima del interior del auto desde una zona lejana.



En resumen este proyecto tiene como objetivo principal prevenir accidentes relacionados con la asfixia en el interior de un auto con ventanas cerradas. Al utilizar una combinación de fotorresistencia y sensor de temperatura, la alarma brinda una señal clara y precisa sobre el clima en el interior del auto, permitiendo ajustar el aire acondicionado para evitar riesgos.

## Circuito
![Image text](https://github.com/PhycomEspol/4._Sensor-de-Luz/blob/main/Fantabulous%20Snicket%20(1).png)
