@11
D=A
@16
M=D
@233
D=A
@17
M=D
@23
D=A
@18
M=D
@77
D=A
@19
M=D
@112
D=A
@20
M=D
@61
D=A
@21
M=D
@67
D=A
@22
M=D
@98
D=A
@23
M=D
@900
D=A
@24
M=D
@810
D=A
@25
M=D

@sum
M=0          
@16
D=A
@p
M=D          
@10
D=A
@n
M=D         

(LOOP)
    // Condición de salida
    @n
    D=M
    @END
    D;JEQ    // Si n == 0, terminar

    // Suma usando direccionamiento indirecto
    @p
    A=M      // A toma el valor de p (la dirección del arreglo)
    D=M      // D toma el valor guardado en esa dirección
    @sum
    M=D+M    // sum = sum + *p

    // Actualización de puntero y contador
    @p
    M=M+1    // p apunta al siguiente espacio (p++)
    @n
    M=M-1    // n--

    @LOOP
    0;JMP

(END)
    @END
    0;JMP   