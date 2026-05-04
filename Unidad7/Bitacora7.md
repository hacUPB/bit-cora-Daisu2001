# unidad 7

![alt text](Imagenes/intro.png)

# Actividad 1

En esta activiadd importamos un proyecto nuevo de OpenGl que simplemente genera un triángulo, su funcionalidad es sencilla, sin embargo, el código aún no es muy claro para mi

![alt text](Imagenes/triangulo.png)

pareciera que no estás utilizando recursos nativos, sino que los consultaras en una librería o en un servidor, ya que tienes un manejo de errores por si fallan los shaders, esa es una cosa que me gustaría ahondar más, como también las definiciones de VAO y VBO, y que es un buffer.

# Actividad 2

mi entendimiento de esta actividad es bueno, aunque fue un poco complejo seguir el paso a paso de la creación del proyecto, para crear un proyecto con un motor gráfico necesitamos ciertas librerías que no son nativas de visual studio, y que hacen posible la ejecución y compilación del código.

Está la librería de opengl, que hace posible que se compile el código, crea el contexto inicial,

Está GLFW, que funciona como una librería estandarizada para crear ventanas, manejar inputs y gestionar lo que crea la librería de opengl, esto sería el contexto.

Está Glad, que resuelve los problemas de la librería de opengl, ya que está desactualizada y no cuenta con todas las funciones, glad consulta estas funciones directamente en el dirver de la GPU donde están implementadas.

y GLM que es una bilioteca de operaciones matemáticas que nos pueden servir para gráficos o animaciones.

# Actividad 3

en esta actividad estamos analizando el pipeline de opengl, vimos la analogía del artista que necesita un estudio para poder crear, opengl es el artista, y GLFW es quien crea el estudio, para nosotros el contexto, ya que opengl siempre necesita un contexto dedicado para poder funcionar

![alt text](Imagenes/context.png)




tambien vemos como funciona el viewport que se configura con respecto al tamaño del framebuffer para que opengl dibuje lo que se le pide en ese espacio, si se llega a alterar la relación del framebuffer y el viewport se puede desconfigurar el output como se ve en la siguiente imagen.

![alt text](Imagenes/viewpor.png)


honestamente tras la ayuda sugiriendo experimentar con los tamaños del buffer, no se me ocurre mucho que pasaría si, quizás que pasaría si se asignararn distintos viewport al mismo render, pero tampoco se implementarlo para probarlo entonces me guardaré la pregunta para clase.

cambiando el parámetro de gldrawarrays podemos cambiar las indicaciones de que debe dibujar

![alt text](Imagenes/lines.png)

por ejemplo con GL_Lines obtenemos esto.

si camias el 3er parámetro a 2 desaparece y a 4 vuelve a aparecer, acá se confiuguran los tipos de primitivas que utilizan para dibujar opengl.

## Reporte

1. El contexto OpenGL es un sistéma de código donde se almacena la información necesaria para el funcionamiento de OpenGl. Guarda texturas, buffers, shaders.

2. El rol de la la biblioteca glfw es indicarle a opengl como debe leer el teclado, el mouse, crea el contexto del opengl

3. es como si el contexto brindara el espacio y los materiales al artista para crear, es el espacio que habita y con el que interactúa cuando crea.

4. el frame buffer es una coleccion de mapas de bits, es donde se genera la imagen del output, me recuerda un poco a las tablas virtuales

5. el viewport es la parte del framebuffer que será utilizada por opengl para el dibujo.

6. la Gpu es donde ocurren los gráficos, actúa como ALU, y los drivers son lo que le traduce el código como indicaciones para trabajar.

7. el vsync sincroniza la velocidad de fotográmas con la tasa de refresco de la pantalla.  

Si no lo activas y la imagen es estática vas a pedirle mucho esfuerzo a la gpu cuando no lo necesita, pues intentará rendereizar la imagen sin parar. aunque reducuiría el input lag. Y si es dinámica, solo se verá como intenta dibujar 2 frames al tiempo glitcheando el movimiento.

8. el legacy era mucho más ineficiente pues maejaba instrucciones individuales, mientras que el moderno trabaja en base de shaders que se procesan muy rapido en la gpu.

9.  el shader program es el ejecutable final, es el cerebro que procesa los numeros en la gpu.

10.  pone los datos del triángulo dentro del contexto. el VBO es el almacén de datos de la gpu, y VAO guarda la configuración.

11.

