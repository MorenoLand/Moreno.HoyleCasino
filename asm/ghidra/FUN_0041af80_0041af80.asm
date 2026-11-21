; FUN_0041af80  0041af80
0041af80  PUSH EBP
0041af81  MOV EBP,ESP
0041af83  SUB ESP,0x8
0041af86  PUSH ESI
0041af87  MOV dword ptr [EBP + -0x4],ECX
0041af8a  MOV EAX,dword ptr [EBP + 0xc]
0041af8d  PUSH EAX
0041af8e  MOV ECX,dword ptr [EBP + 0x8]
0041af91  PUSH ECX
0041af92  MOV ECX,dword ptr [EBP + -0x4]
0041af95  CALL 0x004197d0
0041af9a  MOV ESI,EAX
0041af9c  MOV EDX,dword ptr [EBP + 0xc]
0041af9f  PUSH EDX
0041afa0  MOV EAX,dword ptr [EBP + 0x8]
0041afa3  PUSH EAX
0041afa4  MOV ECX,dword ptr [EBP + -0x4]
0041afa7  CALL 0x004198d0
0041afac  CMP ESI,EAX
0041afae  JZ 0x0041afce
0041afb0  MOV ECX,dword ptr [EBP + 0xc]
0041afb3  PUSH ECX
0041afb4  MOV EDX,dword ptr [EBP + 0x8]
0041afb7  PUSH EDX
0041afb8  MOV ECX,dword ptr [EBP + -0x4]
0041afbb  CALL 0x004197d0
0041afc0  CMP EAX,0x15
0041afc3  JG 0x0041afce
0041afc5  MOV dword ptr [EBP + -0x8],0x0
0041afcc  JMP 0x0041afd5
0041afce  MOV dword ptr [EBP + -0x8],0x1
0041afd5  MOV AL,byte ptr [EBP + -0x8]
0041afd8  POP ESI
0041afd9  MOV ESP,EBP
0041afdb  POP EBP
0041afdc  RET 0x8
