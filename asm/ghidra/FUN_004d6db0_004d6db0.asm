; FUN_004d6db0  004d6db0
004d6db0  PUSH EBP
004d6db1  MOV EBP,ESP
004d6db3  PUSH ECX
004d6db4  MOV dword ptr [EBP + -0x4],ECX
004d6db7  MOV EAX,dword ptr [EBP + -0x4]
004d6dba  MOVSX ECX,word ptr [EAX + 0x64]
004d6dbe  CMP ECX,0x1
004d6dc1  JNZ 0x004d6dd6
004d6dc3  MOV EDX,dword ptr [EBP + -0x4]
004d6dc6  MOVSX EAX,word ptr [EDX + 0x1e0]
004d6dcd  CDQ
004d6dce  SUB EAX,EDX
004d6dd0  SAR EAX,0x1
004d6dd2  JMP 0x004d6de0
004d6dd6  MOV EAX,dword ptr [EBP + -0x4]
004d6dd9  MOV AX,word ptr [EAX + 0x1e0]
004d6de0  MOV ESP,EBP
004d6de2  POP EBP
004d6de3  RET
