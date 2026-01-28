# Actividad 6#

1. Describe con tus palabras las tres fases del ciclo Fetch-Decode-Execute. ¿Qué rol juega el Program Counter (PC) en este ciclo?

R/= La CPU obtiene la instrucción desde la memoria, el PC indica donde se encuentra


2. ¿Cuál es la diferencia fundamental entre una instrucción-A (que empieza con @) y una instrucción-C (que involucra D, M, A, etc.) en el lenguaje ensamblador de Hack? Da un ejemplo de cada una.

R/= Una instrucción A es direccional o de dirección, una instrucción C es de computo y realiza procesos más complejos que apuntar

3. Explica la función de los siguientes componentes del computador Hack: el registro D, el registro A y la ALU.

El registro D es el data registry y se utiliza para almacenar datos o valores que uno pueda necesitar, estos no se verán afectados a no ser que los computes.

El registro A es el registro de dirección, y Viene de una instrrución A, se ve cambiada con cada instrucción A

La ALU es un componente de la CPU que permite realizar operaciones aritmeticológicas.



4. ¿Cómo se implementa un salto condicional en Hack? Describe un ejemplo (p. ej., saltar si el valor de D es mayor que cero).

@jump
D;JGT


5. ¿Cómo se implementa un loop en el computador Hack? Describe un ejemplo (p. ej., un loop que decremente un valor hasta que llegue a cero).

// Inicializar contador en 5
@5
D=A
@10
M=D

// Etiqueta del ciclo
(LOOP)

// Cargar valor de la dirección 10 en D
@10
D=M

// Si D <= 0, saltar al final
@END
D;JLE

// Decrementar el valor en dirección 10
@10
M=M-1

// Volver al inicio del ciclo
@LOOP
0;JMP

(END)
// El valor llegó a 0, programa termina



6. ¿Cuál es la diferencia entre la instrucción D=M y la instrucción M=D?
La instrucción D=M guarda lo que haya en la memoria, en el registro D y la otra instrucción realiza lo contrario


7. Describe brevemente qué se necesita para leer un valor del teclado (KBD) y para “pintar” un pixel en la pantalla (SCREEN).

Se necesita un loop que verifique si hay alguna tecla presionada, osea que el valor de la tecla sea distinto de 0 (ya que el teclado tiene un espacio en la cpu designado), en caso de que sí, deberá dirigirse a los pixeles designados a la pantalla, y jugar con los valores 0 y 1 para decidir cual pixel o no pintar.


Parte 2: reflexión sobre tu proceso (metacognición)
1. ¿Cuál fue el concepto o actividad más desafiante de esta unidad para ti y por qué?

El concepto de aprender un nuevo lenguaje en el que realmente no tienes variables, sino que utilizas algo similar a punteros fue lo más dificil, y al solo tener valores realmente entre 0 y 1 hacer ciclos y condiciones puede ser más abstracto

2. La metodología de “predecir, ejecutar, observar y reflexionar” fue central en nuestras actividades. ¿En qué momento esta metodología te resultó más útil para entender algo que no tenías claro?

A la hora de ejecutar mis programas en el computador hack, tratar de pensar que hará el código y luego seguir el paso a paso de como se ejecuta logra visibilizar bien el proceso


3. Describe un momento “¡Aha!” que hayas tenido durante estas dos semanas. ¿Qué estabas haciendo cuando ocurrió?

Aprender a usar condicionales y saltos, fue lo más satisfactorio, en esta misma clase del 28 de Enero, sin embargo siento que no lo domino todavía entonces debo practicar más

4. Pensando en la próxima unidad, ¿Qué harás diferente en tu proceso de estudio para aprender de manera más efectiva?

R/= lo unico que lamento es haber empezado tarde las calses por mi ausencia la primera semana, pero siento que con mi flujo de trabajo y el apoyo del profesor puedo lograr un buen proceso.