; FUN_004cc4b0  004cc4b0
004cc4b0  PUSH EBP
004cc4b1  MOV EBP,ESP
004cc4b3  PUSH ECX
004cc4b4  MOV dword ptr [EBP + -0x4],ECX
004cc4b7  MOV EAX,dword ptr [EBP + -0x4]
004cc4ba  MOVSX ECX,word ptr [EAX + 0x64]
004cc4be  CMP ECX,0x1
004cc4c1  JNZ 0x004cc4d3
004cc4c3  MOV EDX,dword ptr [EBP + -0x4]
004cc4c6  MOVSX EAX,word ptr [EDX + 0x13a]
004cc4cd  SHL EAX,0x1
004cc4cf  JMP 0x004cc4dd
004cc4d3  MOV EAX,dword ptr [EBP + -0x4]
004cc4d6  MOV AX,word ptr [EAX + 0x13a]
004cc4dd  MOV ESP,EBP
004cc4df  POP EBP
004cc4e0  RET
