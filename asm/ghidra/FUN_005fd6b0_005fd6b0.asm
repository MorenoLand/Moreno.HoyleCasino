; FUN_005fd6b0  005fd6b0
005fd6b0  PUSH EBP
005fd6b1  MOV EBP,ESP
005fd6b3  PUSH ECX
005fd6b4  MOV dword ptr [EBP + -0x4],ECX
005fd6b7  MOV EAX,dword ptr [EBP + -0x4]
005fd6ba  MOVZX ECX,byte ptr [EAX + 0x1a8]
005fd6c1  TEST ECX,ECX
005fd6c3  JZ 0x005fd723
005fd6c5  MOV ECX,dword ptr [EBP + -0x4]
005fd6c8  CALL 0x00602650
005fd6cd  MOV EDX,dword ptr [EBP + -0x4]
005fd6d0  CMP dword ptr [EDX + 0x1f4],0x0
005fd6d7  JZ 0x005fd6f9
005fd6d9  PUSH 0x2
005fd6db  MOV EAX,dword ptr [EBP + -0x4]
005fd6de  MOV ECX,dword ptr [EAX + 0x1f4]
005fd6e4  MOV EDX,dword ptr [EBP + -0x4]
005fd6e7  MOV EAX,dword ptr [EDX + 0x1f4]
005fd6ed  MOV EDX,dword ptr [ECX]
005fd6ef  MOV ECX,EAX
005fd6f1  MOV EAX,dword ptr [EDX + 0xb0]
005fd6f7  CALL EAX
005fd6f9  MOV ECX,dword ptr [EBP + -0x4]
005fd6fc  CMP dword ptr [ECX + 0x1f8],0x0
005fd703  JZ 0x005fd723
005fd705  PUSH 0x2
005fd707  MOV EDX,dword ptr [EBP + -0x4]
005fd70a  MOV EAX,dword ptr [EDX + 0x1f8]
005fd710  MOV ECX,dword ptr [EBP + -0x4]
005fd713  MOV ECX,dword ptr [ECX + 0x1f8]
005fd719  MOV EDX,dword ptr [EAX]
005fd71b  MOV EAX,dword ptr [EDX + 0xb0]
005fd721  CALL EAX
005fd723  MOV ESP,EBP
005fd725  POP EBP
005fd726  RET
