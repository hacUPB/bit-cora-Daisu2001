
@0
D=A
@12
M=D


@1
D=A
@13
M=D


(LOOP)

@13
D=M


@5
D=D-A


@END
D;JGT


@13
D=M


@12
M=D+M


@13
M=M+1


@LOOP
0;JMP

(END)

