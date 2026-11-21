; FUN_0056ac70  0056ac70
0056ac70  PUSH EBP
0056ac71  MOV EBP,ESP
0056ac73  SUB ESP,0x8
0056ac76  MOV dword ptr [EBP + -0x8],ECX
0056ac79  MOV dword ptr [EBP + -0x4],0x0
0056ac80  JMP 0x0056ac8b
0056ac82  MOV EAX,dword ptr [EBP + -0x4]
0056ac85  ADD EAX,0x1
0056ac88  MOV dword ptr [EBP + -0x4],EAX
0056ac8b  CMP dword ptr [EBP + -0x4],0x31
0056ac8f  JGE 0x0056acd7
0056ac91  PUSH 0x0
0056ac93  MOV ECX,dword ptr [EBP + -0x4]
0056ac96  PUSH ECX
0056ac97  MOV ECX,dword ptr [EBP + -0x8]
0056ac9a  CALL 0x0056b950
0056ac9f  MOVZX EDX,AL
0056aca2  TEST EDX,EDX
0056aca4  JNZ 0x0056aca8
0056aca6  JMP 0x0056ac82
0056aca8  MOV EAX,dword ptr [EBP + -0x4]
0056acab  IMUL EAX,EAX,0xa
0056acae  MOV ECX,dword ptr [EBP + -0x8]
0056acb1  LEA EDX,[ECX + EAX*0x1 + 0xf6]
0056acb8  MOV EAX,dword ptr [EBP + 0xc]
0056acbb  MOV CX,word ptr [EBP + 0x8]
0056acbf  MOV word ptr [EDX + EAX*0x2],CX
0056acc3  MOV EDX,dword ptr [EBP + -0x4]
0056acc6  IMUL EDX,EDX,0x5
0056acc9  ADD EDX,dword ptr [EBP + -0x8]
0056accc  MOV EAX,dword ptr [EBP + 0xc]
0056accf  MOV CL,byte ptr [EBP + 0x10]
0056acd2  MOV byte ptr [EDX + EAX*0x1],CL
0056acd5  JMP 0x0056ac82
0056acd7  MOV ESP,EBP
0056acd9  POP EBP
0056acda  RET 0xc
