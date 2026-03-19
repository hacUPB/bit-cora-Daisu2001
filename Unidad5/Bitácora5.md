# Unidad 5#

Para la realización de la unidad 5 decidí tomar la ruta guiada, porque esta es la parte más fundamental a la hora de programar según lo veo yo, y me interesa repasar.

Encapsulamiento: El encapsulamiento en POO es un principio que agrupa datos (atributos) y comportamientos en una clase, ocultando los detalles internos y manejando su acceso.

Herencia: es el mecanísmo mediante el cual una clase puede heredar atributos y comportamientos de una clase padre, funciona como una relación de es un, por ejémplo, clase finn es un clase humano. Es útil para definir parámetros en una clase padre, y no tener que reescribirlos cada vez que necesites un objeto que comparta esas características, y así mismo, editando la clase padre afectas el resto del código.

El polimorfísmo es la capacidad que tiene el código para adaptarse y no depender de datos específicos, poder utilizar funciones universalews en objetos distintos.


Tras analizar el código puedo responder las preguntas planteadas

un ejemplo de una línea donde se utiliza el encapsulamiento sería:

![alt text](<Imágenes/Sin título.png>)

Aquí, al usar private protejemos el atributo nombre de la clase, y no puede ser accedido por otras clases directamente, luego al cambiar el acceso a esas propiedades con get y set, también estamos aplicando encapsulamiento, puesto que controlamos quien puede acceder a esos datos, el get es público y cualquiera puede saber su nombre, sin embargo el set es protected y solo puede ser accedido por sus clases hijo.

hay una private y otra publica, porque pese a quee restrringimos su acceso al código, al tiempo creamos una manera de acceder a ello, por medio del get y set que son características de la variable pública.


 - Herencia: la herencia en la clase círculo la podemos evidenciar en la declaración de la clase, cuando decimos Circulo:figura, estamos diciendo que el círculo es una figura, y por lo tanto, la clase figura es su clase padre, al utilizar base("círculo"), hacemos que el nombre no se maneje en círculo, sino que sde le pasa a la clase figura para que lo inicialice en su constructor.


 círculo, además de radio, almacena la propiedad nombre y el campo Nombre, así no pueda acceder directamente a ella puesto que es privada

 en el bulce foreach no importa que tipo de figura se le esté pasando a la función dibujar, puesto que es un método abstracto, y se ejecuta de manera distinta en cada clase hija de figura, ya que están obligadas a implementarla y sobreescribirla en cada llamado.