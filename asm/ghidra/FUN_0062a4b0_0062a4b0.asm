; FUN_0062a4b0  0062a4b0
0062a4b0  PUSH EBP
0062a4b1  MOV EBP,ESP
0062a4b3  PUSH ECX
0062a4b4  MOV dword ptr [EBP + -0x4],ECX
0062a4b7  MOV EAX,dword ptr [EBP + -0x4]
0062a4ba  MOV ECX,dword ptr [EAX + 0x4c]
0062a4bd  MOV EDX,dword ptr [EBP + -0x4]
0062a4c0  MOV EAX,dword ptr [EDX + 0x4c]
0062a4c3  MOV EDX,dword ptr [ECX]
0062a4c5  MOV ECX,EAX
0062a4c7  MOV EAX,dword ptr [EDX + 0xd0]
0062a4cd  CALL EAX
0062a4cf  MOV ECX,dword ptr [EBP + -0x4]
0062a4d2  MOV EDX,dword ptr [ECX + 0x50]
0062a4d5  MOV EAX,dword ptr [EBP + -0x4]
0062a4d8  MOV ECX,dword ptr [EAX + 0x50]
0062a4db  MOV EDX,dword ptr [EDX]
0062a4dd  MOV EAX,dword ptr [EDX + 0xd0]
0062a4e3  CALL EAX
0062a4e5  MOV ECX,dword ptr [EBP + -0x4]
0062a4e8  CMP dword ptr [ECX + 0x54],0x0
0062a4ec  JZ 0x0062a517
0062a4ee  PUSH ECX
0062a4ef  MOV EDX,ESP
0062a4f1  MOV AX,[0x0075ee1c]
0062a4f7  MOV word ptr [EDX],AX
0062a4fa  MOV CL,byte ptr [0x0075ee1e]
0062a500  MOV byte ptr [EDX + 0x2],CL
0062a503  PUSH -0x1
0062a505  MOV EDX,dword ptr [EBP + -0x4]
0062a508  MOV EAX,dword ptr [EDX + 0x6c]
0062a50b  PUSH EAX
0062a50c  MOV ECX,dword ptr [EBP + -0x4]
0062a50f  MOV ECX,dword ptr [ECX + 0x54]
0062a512  CALL 0x005ecd00
0062a517  MOV ESP,EBP
0062a519  POP EBP
0062a51a  RET
