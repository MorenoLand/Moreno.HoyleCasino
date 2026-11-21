; FUN_0063ebb0  0063ebb0
0063ebb0  PUSH EBP
0063ebb1  MOV EBP,ESP
0063ebb3  SUB ESP,0x8
0063ebb6  MOV dword ptr [EBP + -0x8],ECX
0063ebb9  MOV EAX,dword ptr [EBP + 0x8]
0063ebbc  IMUL EAX,EAX,0x64
0063ebbf  ADD EAX,0x32
0063ebc2  PUSH EAX
0063ebc3  MOV ECX,dword ptr [EBP + -0x8]
0063ebc6  CALL 0x005fb350
0063ebcb  MOV dword ptr [EBP + -0x4],EAX
0063ebce  CMP dword ptr [EBP + -0x4],0x0
0063ebd2  JZ 0x0063ebe6
0063ebd4  MOV ECX,dword ptr [EBP + -0x4]
0063ebd7  MOV EDX,dword ptr [ECX]
0063ebd9  MOV ECX,dword ptr [EBP + -0x4]
0063ebdc  MOV EAX,dword ptr [EDX + 0xf4]
0063ebe2  CALL EAX
0063ebe4  JMP 0x0063ec01
0063ebe6  XOR ECX,ECX
0063ebe8  JNZ 0x0063ec01
0063ebea  PUSH 0x45e
0063ebef  PUSH 0x6dbaac
0063ebf4  PUSH 0x6b2f58
0063ebf9  CALL 0x005e9f20
0063ebfe  ADD ESP,0xc
0063ec01  MOV ESP,EBP
0063ec03  POP EBP
0063ec04  RET 0x4
