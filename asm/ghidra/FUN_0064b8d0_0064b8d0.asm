; FUN_0064b8d0  0064b8d0
0064b8d0  PUSH EBP
0064b8d1  MOV EBP,ESP
0064b8d3  PUSH ECX
0064b8d4  MOV dword ptr [EBP + -0x4],ECX
0064b8d7  MOV EAX,dword ptr [EBP + 0x8]
0064b8da  MOV byte ptr [EAX + 0x4],0x1
0064b8de  MOV ECX,dword ptr [EBP + -0x4]
0064b8e1  MOV byte ptr [ECX + 0x8],0x0
0064b8e5  MOV EDX,dword ptr [EBP + -0x4]
0064b8e8  MOV byte ptr [EDX + 0x9],0x0
0064b8ec  MOV EAX,dword ptr [EBP + -0x4]
0064b8ef  MOV ECX,dword ptr [EAX + 0x184]
0064b8f5  MOV EDX,dword ptr [ECX + 0x4]
0064b8f8  PUSH EDX
0064b8f9  MOV EAX,dword ptr [EBP + 0x8]
0064b8fc  PUSH EAX
0064b8fd  MOV ECX,dword ptr [0x0162ee80]
0064b903  MOV EDX,dword ptr [ECX]
0064b905  MOV ECX,dword ptr [0x0162ee80]
0064b90b  MOV EAX,dword ptr [EDX + 0x12c]
0064b911  CALL EAX
0064b913  MOV ESP,EBP
0064b915  POP EBP
0064b916  RET 0x4
