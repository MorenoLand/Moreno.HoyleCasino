; FUN_005d9f70  005d9f70
005d9f70  PUSH EBP
005d9f71  MOV EBP,ESP
005d9f73  SUB ESP,0xc
005d9f76  MOV dword ptr [EBP + -0xc],ECX
005d9f79  MOV dword ptr [EBP + -0x4],0xffffffff
005d9f80  MOVZX EAX,byte ptr [0x00795f95]
005d9f87  TEST EAX,EAX
005d9f89  JZ 0x005d9f90
005d9f8b  JMP 0x005da035
005d9f90  CMP dword ptr [0x0163068c],0x0
005d9f97  JNZ 0x005d9fcd
005d9f99  MOV ECX,dword ptr [0x0162ee84]
005d9f9f  CALL 0x006375b0
005d9fa4  CMP dword ptr [EBP + 0xc],EAX
005d9fa7  JZ 0x005d9fcd
005d9fa9  MOV ECX,dword ptr [EBP + 0xc]
005d9fac  MOV EDX,dword ptr [ECX + 0x20]
005d9faf  MOV dword ptr [EBP + -0x8],EDX
005d9fb2  MOV EAX,dword ptr [EBP + -0x8]
005d9fb5  PUSH EAX
005d9fb6  MOV ECX,dword ptr [EBP + -0xc]
005d9fb9  MOV EDX,dword ptr [ECX]
005d9fbb  MOV ECX,dword ptr [EBP + -0xc]
005d9fbe  MOV EAX,dword ptr [EDX + 0x130]
005d9fc4  CALL EAX
005d9fc6  MOVZX ECX,AL
005d9fc9  TEST ECX,ECX
005d9fcb  JNZ 0x005da018
005d9fcd  MOV ECX,dword ptr [EBP + -0xc]
005d9fd0  CALL 0x005da7b0
005d9fd5  MOVZX EDX,AL
005d9fd8  TEST EDX,EDX
005d9fda  JZ 0x005da004
005d9fdc  PUSH 0x0
005d9fde  PUSH 0x6d43e8
005d9fe3  CALL 0x00630f40
005d9fe8  ADD ESP,0x4
005d9feb  PUSH EAX
005d9fec  PUSH 0x6d43c0
005d9ff1  CALL 0x00630f40
005d9ff6  ADD ESP,0x4
005d9ff9  PUSH EAX
005d9ffa  CALL 0x0062ff10
005d9fff  ADD ESP,0xc
005da002  JMP 0x005da035
005da004  PUSH 0x4
005da006  MOV EAX,dword ptr [EBP + -0xc]
005da009  MOV EDX,dword ptr [EAX]
005da00b  MOV ECX,dword ptr [EBP + -0xc]
005da00e  MOV EAX,dword ptr [EDX + 0x174]
005da014  CALL EAX
005da016  JMP 0x005da035
005da018  MOV ECX,dword ptr [EBP + 0xc]
005da01b  PUSH ECX
005da01c  MOV EDX,dword ptr [EBP + 0x8]
005da01f  MOV EAX,dword ptr [EDX + 0xc]
005da022  PUSH EAX
005da023  MOV ECX,dword ptr [EBP + 0x8]
005da026  MOV EDX,dword ptr [ECX + 0x8]
005da029  PUSH EDX
005da02a  MOV ECX,dword ptr [EBP + -0xc]
005da02d  CALL 0x0064d480
005da032  MOV dword ptr [EBP + -0x4],EAX
005da035  MOV ESP,EBP
005da037  POP EBP
005da038  RET 0x8
