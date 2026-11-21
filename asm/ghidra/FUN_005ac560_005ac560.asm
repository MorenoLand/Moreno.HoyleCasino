; FUN_005ac560  005ac560
005ac560  PUSH EBP
005ac561  MOV EBP,ESP
005ac563  SUB ESP,0xc
005ac566  MOV dword ptr [EBP + -0xc],ECX
005ac569  MOV dword ptr [EBP + -0x4],0x0
005ac570  JMP 0x005ac57b
005ac572  MOV EAX,dword ptr [EBP + -0x4]
005ac575  ADD EAX,0x1
005ac578  MOV dword ptr [EBP + -0x4],EAX
005ac57b  CMP dword ptr [EBP + -0x4],0x16
005ac57f  JGE 0x005ac5b0
005ac581  MOV ECX,dword ptr [EBP + 0x8]
005ac584  IMUL ECX,ECX,0x58
005ac587  MOV EDX,dword ptr [EBP + -0xc]
005ac58a  LEA EAX,[EDX + ECX*0x1 + 0x28]
005ac58e  MOV ECX,dword ptr [EBP + -0x4]
005ac591  MOV EDX,dword ptr [EAX + ECX*0x4]
005ac594  MOV EAX,dword ptr [EBP + 0x8]
005ac597  IMUL EAX,EAX,0x58
005ac59a  MOV ECX,dword ptr [EBP + -0xc]
005ac59d  LEA EAX,[ECX + EAX*0x1 + 0x28]
005ac5a1  MOV ECX,dword ptr [EBP + -0x4]
005ac5a4  MOV ECX,dword ptr [EAX + ECX*0x4]
005ac5a7  MOV EDX,dword ptr [EDX]
005ac5a9  MOV EAX,dword ptr [EDX + 0x70]
005ac5ac  CALL EAX
005ac5ae  JMP 0x005ac572
005ac5b0  MOV dword ptr [EBP + -0x8],0x0
005ac5b7  JMP 0x005ac5c2
005ac5b9  MOV ECX,dword ptr [EBP + -0x8]
005ac5bc  ADD ECX,0x1
005ac5bf  MOV dword ptr [EBP + -0x8],ECX
005ac5c2  CMP dword ptr [EBP + -0x8],0x16
005ac5c6  JGE 0x005ac60b
005ac5c8  MOV EDX,dword ptr [EBP + -0x8]
005ac5cb  PUSH EDX
005ac5cc  MOV EAX,dword ptr [EBP + 0x8]
005ac5cf  PUSH EAX
005ac5d0  MOV ECX,dword ptr [EBP + -0xc]
005ac5d3  MOV EDX,dword ptr [ECX + 0x4]
005ac5d6  PUSH EDX
005ac5d7  MOV ECX,dword ptr [0x00793604]
005ac5dd  CALL 0x005b5c60
005ac5e2  MOVZX EAX,AX
005ac5e5  TEST EAX,EAX
005ac5e7  JNZ 0x005ac5eb
005ac5e9  JMP 0x005ac5b9
005ac5eb  MOV CL,byte ptr [EBP + 0xc]
005ac5ee  PUSH ECX
005ac5ef  MOV EDX,dword ptr [EBP + -0x8]
005ac5f2  PUSH EDX
005ac5f3  MOV EAX,dword ptr [EBP + 0x8]
005ac5f6  PUSH EAX
005ac5f7  MOV ECX,dword ptr [EBP + -0xc]
005ac5fa  MOV EDX,dword ptr [ECX + 0x4]
005ac5fd  PUSH EDX
005ac5fe  MOV ECX,dword ptr [0x007935f8]
005ac604  CALL 0x005a82a0
005ac609  JMP 0x005ac5b9
005ac60b  MOV ESP,EBP
005ac60d  POP EBP
005ac60e  RET 0x8
