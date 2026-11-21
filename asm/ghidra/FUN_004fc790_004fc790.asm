; FUN_004fc790  004fc790
004fc790  PUSH EBP
004fc791  MOV EBP,ESP
004fc793  PUSH ECX
004fc794  MOV dword ptr [EBP + -0x4],ECX
004fc797  MOV EAX,dword ptr [EBP + -0x4]
004fc79a  CMP dword ptr [EAX + 0x80],0x0
004fc7a1  JZ 0x004fc7be
004fc7a3  MOV ECX,dword ptr [EBP + -0x4]
004fc7a6  MOV ECX,dword ptr [ECX + 0x80]
004fc7ac  CALL 0x005f8990
004fc7b1  MOV EDX,dword ptr [EBP + -0x4]
004fc7b4  MOV dword ptr [EDX + 0x80],0x0
004fc7be  MOV ESP,EBP
004fc7c0  POP EBP
004fc7c1  RET
