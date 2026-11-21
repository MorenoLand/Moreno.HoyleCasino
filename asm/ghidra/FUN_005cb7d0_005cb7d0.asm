; FUN_005cb7d0  005cb7d0
005cb7d0  PUSH EBP
005cb7d1  MOV EBP,ESP
005cb7d3  SUB ESP,0x10
005cb7d6  MOV dword ptr [EBP + -0xc],ECX
005cb7d9  MOV EAX,dword ptr [EBP + 0x8]
005cb7dc  SHL EAX,0x5
005cb7df  MOV ECX,dword ptr [EBP + -0xc]
005cb7e2  LEA EDX,[ECX + EAX*0x1 + 0x48]
005cb7e6  MOV EAX,dword ptr [EBP + 0xc]
005cb7e9  MOV ECX,dword ptr [EDX + EAX*0x8]
005cb7ec  MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
005cb7f0  MOV dword ptr [EBP + -0x8],ECX
005cb7f3  MOV dword ptr [EBP + -0x4],EDX
005cb7f6  CMP dword ptr [EBP + -0x8],0x0
005cb7fa  JNZ 0x005cb80b
005cb7fc  CMP dword ptr [EBP + -0x4],0x0
005cb800  JNZ 0x005cb80b
005cb802  MOV dword ptr [EBP + -0x10],0x0
005cb809  JMP 0x005cb812
005cb80b  MOV dword ptr [EBP + -0x10],0x1
005cb812  MOV AL,byte ptr [EBP + -0x10]
005cb815  MOV ESP,EBP
005cb817  POP EBP
005cb818  RET 0x8
