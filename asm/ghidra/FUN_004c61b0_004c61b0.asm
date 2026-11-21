; FUN_004c61b0  004c61b0
004c61b0  PUSH EBP
004c61b1  MOV EBP,ESP
004c61b3  SUB ESP,0x14
004c61b6  MOV dword ptr [EBP + -0x10],ECX
004c61b9  MOV EAX,dword ptr [EBP + -0x10]
004c61bc  MOV ECX,dword ptr [EAX + 0x4]
004c61bf  PUSH ECX
004c61c0  CALL 0x005dcb00
004c61c5  ADD ESP,0x4
004c61c8  MOV dword ptr [EBP + -0xc],EAX
004c61cb  MOV ECX,dword ptr [EBP + -0xc]
004c61ce  CALL 0x0063aac0
004c61d3  MOV EDX,dword ptr [EAX]
004c61d5  MOV dword ptr [EBP + -0x4],EDX
004c61d8  CMP dword ptr [EBP + -0x4],0x2
004c61dc  JZ 0x004c61fa
004c61de  MOV ECX,dword ptr [EBP + -0xc]
004c61e1  CALL 0x0063aac0
004c61e6  MOV EAX,dword ptr [EAX]
004c61e8  MOV dword ptr [EBP + -0x8],EAX
004c61eb  CMP dword ptr [EBP + -0x8],0x3
004c61ef  JZ 0x004c61fa
004c61f1  MOV dword ptr [EBP + -0x14],0x0
004c61f8  JMP 0x004c6201
004c61fa  MOV dword ptr [EBP + -0x14],0x1
004c6201  MOV AL,byte ptr [EBP + -0x14]
004c6204  MOV ESP,EBP
004c6206  POP EBP
004c6207  RET
