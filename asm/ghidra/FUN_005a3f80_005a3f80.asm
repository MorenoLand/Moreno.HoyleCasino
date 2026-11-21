; FUN_005a3f80  005a3f80
005a3f80  PUSH EBP
005a3f81  MOV EBP,ESP
005a3f83  SUB ESP,0x14
005a3f86  MOV dword ptr [EBP + -0x14],ECX
005a3f89  MOV EAX,dword ptr [EBP + 0x8]
005a3f8c  PUSH EAX
005a3f8d  CALL 0x005dcb00
005a3f92  ADD ESP,0x4
005a3f95  MOV dword ptr [EBP + -0x8],EAX
005a3f98  MOV ECX,dword ptr [EBP + -0x8]
005a3f9b  CALL 0x0063aac0
005a3fa0  MOV ECX,dword ptr [EAX]
005a3fa2  MOV dword ptr [EBP + -0x4],ECX
005a3fa5  XOR EDX,EDX
005a3fa7  CMP dword ptr [EBP + -0x4],0x0
005a3fab  SETZ DL
005a3fae  MOVZX EAX,DL
005a3fb1  TEST EAX,EAX
005a3fb3  JNZ 0x005a3fd8
005a3fb5  MOV ECX,dword ptr [EBP + 0x8]
005a3fb8  PUSH ECX
005a3fb9  CALL 0x005dcb00
005a3fbe  ADD ESP,0x4
005a3fc1  MOV dword ptr [EBP + -0xc],EAX
005a3fc4  MOV EDX,dword ptr [EBP + -0xc]
005a3fc7  MOV AL,byte ptr [EDX + 0x4a1]
005a3fcd  MOV byte ptr [EBP + -0xd],AL
005a3fd0  MOVZX ECX,byte ptr [EBP + -0xd]
005a3fd4  TEST ECX,ECX
005a3fd6  JZ 0x005a3fdc
005a3fd8  XOR AL,AL
005a3fda  JMP 0x005a3fe8
005a3fdc  MOV EDX,dword ptr [EBP + 0x8]
005a3fdf  PUSH EDX
005a3fe0  MOV ECX,dword ptr [EBP + -0x14]
005a3fe3  CALL 0x005a3e80
005a3fe8  MOV ESP,EBP
005a3fea  POP EBP
005a3feb  RET 0x4
