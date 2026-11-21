; CPrintDialog  0059e5b0
0059e5b0  PUSH EBP
0059e5b1  MOV EBP,ESP
0059e5b3  PUSH ECX
0059e5b4  MOV dword ptr [EBP + -0x4],ECX
0059e5b7  PUSH 0x0
0059e5b9  MOV ECX,dword ptr [EBP + -0x4]
0059e5bc  CALL 0x005fc0d0
0059e5c1  MOV EAX,dword ptr [EBP + -0x4]
0059e5c4  MOV dword ptr [EAX],0x6cf060
0059e5ca  MOV ECX,dword ptr [EBP + -0x4]
0059e5cd  MOV EDX,dword ptr [EBP + 0x8]
0059e5d0  MOV dword ptr [ECX + 0x20],EDX
0059e5d3  MOV EAX,dword ptr [EBP + -0x4]
0059e5d6  MOV ESP,EBP
0059e5d8  POP EBP
0059e5d9  RET 0x4
