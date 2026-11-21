; FUN_004fa290  004fa290
004fa290  PUSH EBP
004fa291  MOV EBP,ESP
004fa293  PUSH ECX
004fa294  MOV dword ptr [EBP + -0x4],ECX
004fa297  MOV EAX,dword ptr [EBP + -0x4]
004fa29a  CMP dword ptr [EAX + 0xa4],0x0
004fa2a1  JZ 0x004fa2b2
004fa2a3  MOV ECX,dword ptr [EBP + -0x4]
004fa2a6  MOV EDX,dword ptr [ECX + 0xa4]
004fa2ac  CMP dword ptr [EDX + 0x28],0x0
004fa2b0  JNZ 0x004fa2b6
004fa2b2  MOV AL,0x1
004fa2b4  JMP 0x004fa2d9
004fa2b6  MOV EAX,dword ptr [EBP + -0x4]
004fa2b9  MOVZX ECX,byte ptr [EAX + 0xa8]
004fa2c0  TEST ECX,ECX
004fa2c2  JNZ 0x004fa2c8
004fa2c4  MOV AL,0x1
004fa2c6  JMP 0x004fa2d9
004fa2c8  MOV EDX,dword ptr [EBP + -0x4]
004fa2cb  MOV EAX,dword ptr [EDX + 0xa4]
004fa2d1  MOV ECX,dword ptr [EAX + 0x28]
004fa2d4  CALL 0x005f8910
004fa2d9  MOV ESP,EBP
004fa2db  POP EBP
004fa2dc  RET
