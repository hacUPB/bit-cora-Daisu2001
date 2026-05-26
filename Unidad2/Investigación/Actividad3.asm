// -Seleccionar espacio de memoria que representa el centro de la pantalla
// -Centro de la pantalla =-1
// IF(
//    Keyboard =/=0
//   THEN verificar si es 105 o 100
//    IF(Keyboard = 105)
//      THEN LLamar metodo pintar posición en pantalla + 1 && llamar metodo para borrar pixel 
//      anterior
//    ELSE IF(Keyboard = 100)
//      THEN LLamar metodo pintar posición en pantalla - 1 && llamar metodo para borrar pixel
//      siguiente
//    
//     (Boorrar pixel anterior)
//      @posición-1 
//      M=0 
//     (borrar pixel siguiente)
//      @posición+1
//      M=0
//     (pintar pixel anterior)
//      @posición-1 
//      M=-1 
//     (pintar pixel siguiente)
//      @posición+1
//      M=-1







(LOOP)

@20496
M=-1


@KBD
D=M
@105
D=D-A
@I_IS_Pressed
D;JEQ

@KBD
D=M
@100
D=D-A
@D_IS_Pressed
D;JEQ


@LOOP
0;JMP




(I_IS_Pressed)
@20496
M=0
@20495
M=-1
@LOOP
0;JMP



(D_IS_Pressed)
@20496
M=0
@20497
M=-1
@LOOP
0;JMP
