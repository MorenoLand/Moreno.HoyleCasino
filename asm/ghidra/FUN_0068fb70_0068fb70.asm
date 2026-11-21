; FUN_0068fb70  0068fb70
0068fb70  PUSH EBP
0068fb71  MOV EBP,ESP
0068fb73  PUSH ECX
0068fb74  MOV dword ptr [EBP + -0x4],ECX
0068fb77  MOV EAX,dword ptr [EBP + -0x4]
0068fb7a  MOV dword ptr [EAX],0x6e56a0
0068fb80  MOV ECX,dword ptr [EBP + -0x4]
0068fb83  CMP dword ptr [ECX + 0x18],0x0
0068fb87  JZ 0x0068fba3
0068fb89  MOV EDX,dword ptr [EBP + -0x4]
0068fb8c  MOV EAX,dword ptr [EDX + 0x18]
0068fb8f  PUSH EAX
0068fb90  CALL dword ptr [0x006b2018]
0068fb96  MOV ECX,dword ptr [EBP + -0x4]
0068fb99  MOV EDX,dword ptr [ECX + 0x18]
0068fb9c  PUSH EDX
0068fb9d  CALL dword ptr [0x006b2034]
0068fba3  MOV ECX,dword ptr [EBP + -0x4]
0068fba6  CALL 0x006252f0
0068fbab  MOV ESP,EBP
0068fbad  POP EBP
0068fbae  RET
