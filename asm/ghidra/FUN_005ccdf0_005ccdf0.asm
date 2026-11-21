; FUN_005ccdf0  005ccdf0
005ccdf0  PUSH EBP
005ccdf1  MOV EBP,ESP
005ccdf3  SUB ESP,0xc
005ccdf6  MOV dword ptr [EBP + -0xc],ECX
005ccdf9  MOV dword ptr [EBP + -0x8],0xffffffff
005cce00  MOV dword ptr [EBP + -0x4],0x0
005cce07  JMP 0x005cce12
005cce09  MOV EAX,dword ptr [EBP + -0x4]
005cce0c  ADD EAX,0x1
005cce0f  MOV dword ptr [EBP + -0x4],EAX
005cce12  CMP dword ptr [EBP + -0x4],0x1e
005cce16  JGE 0x005cce46
005cce18  MOV ECX,dword ptr [EBP + 0x8]
005cce1b  IMUL ECX,ECX,0x1e0
005cce21  MOV EDX,dword ptr [EBP + -0xc]
005cce24  LEA EAX,[EDX + ECX*0x1 + 0x17c]
005cce2b  MOV ECX,dword ptr [EBP + 0xc]
005cce2e  IMUL ECX,ECX,0x78
005cce31  ADD EAX,ECX
005cce33  MOV EDX,dword ptr [EBP + -0x4]
005cce36  CMP dword ptr [EAX + EDX*0x4],0x0
005cce3a  JNZ 0x005cce3e
005cce3c  JMP 0x005cce46
005cce3e  MOV EAX,dword ptr [EBP + -0x4]
005cce41  MOV dword ptr [EBP + -0x8],EAX
005cce44  JMP 0x005cce09
005cce46  MOV EAX,dword ptr [EBP + -0x8]
005cce49  MOV ESP,EBP
005cce4b  POP EBP
005cce4c  RET 0x8
