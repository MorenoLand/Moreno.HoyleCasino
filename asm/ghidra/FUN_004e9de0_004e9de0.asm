; FUN_004e9de0  004e9de0
004e9de0  PUSH EBP
004e9de1  MOV EBP,ESP
004e9de3  PUSH ECX
004e9de4  MOV dword ptr [EBP + -0x4],ECX
004e9de7  MOV EAX,dword ptr [EBP + -0x4]
004e9dea  MOVSX ECX,word ptr [EAX + 0x64]
004e9dee  CMP ECX,0x1
004e9df1  JNZ 0x004e9e03
004e9df3  MOV EDX,dword ptr [EBP + -0x4]
004e9df6  MOVSX EAX,word ptr [EDX + 0x2b6]
004e9dfd  SHL EAX,0x1
004e9dff  JMP 0x004e9e0d
004e9e03  MOV EAX,dword ptr [EBP + -0x4]
004e9e06  MOV AX,word ptr [EAX + 0x2b6]
004e9e0d  MOV ESP,EBP
004e9e0f  POP EBP
004e9e10  RET
