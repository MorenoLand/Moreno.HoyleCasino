; FUN_005e8aa0  005e8aa0
005e8aa0  PUSH EBP
005e8aa1  MOV EBP,ESP
005e8aa3  SUB ESP,0x8
005e8aa6  MOV dword ptr [EBP + -0x4],ECX
005e8aa9  MOV EAX,dword ptr [EBP + -0x4]
005e8aac  MOV ECX,dword ptr [EAX + 0x80]
005e8ab2  MOV dword ptr [EBP + -0x8],ECX
005e8ab5  CMP dword ptr [EBP + -0x8],0x0
005e8ab9  JZ 0x005e8ac9
005e8abb  CMP dword ptr [EBP + -0x8],0x1
005e8abf  JZ 0x005e8ad3
005e8ac1  CMP dword ptr [EBP + -0x8],0x2
005e8ac5  JZ 0x005e8add
005e8ac7  JMP 0x005e8ae5
005e8ac9  MOV ECX,dword ptr [EBP + -0x4]
005e8acc  CALL 0x005e9aa0
005e8ad1  JMP 0x005e8ae5
005e8ad3  MOV ECX,dword ptr [EBP + -0x4]
005e8ad6  CALL 0x005e8b40
005e8adb  JMP 0x005e8ae5
005e8add  MOV ECX,dword ptr [EBP + -0x4]
005e8ae0  CALL 0x005e93f0
005e8ae5  MOV ESP,EBP
005e8ae7  POP EBP
005e8ae8  RET
