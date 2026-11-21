; FUN_005dd700  005dd700
005dd700  PUSH EBP
005dd701  MOV EBP,ESP
005dd703  SUB ESP,0x158
005dd709  MOV EAX,[0x00781870]
005dd70e  XOR EAX,EBP
005dd710  MOV dword ptr [EBP + -0x4],EAX
005dd713  MOV dword ptr [EBP + 0xfffffeb0],ECX
005dd719  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005dd71f  MOV CL,byte ptr [EAX + 0x25]
005dd722  MOV byte ptr [EBP + 0xfffffeb7],CL
005dd728  MOVZX EDX,byte ptr [EBP + 0xfffffeb7]
005dd72f  TEST EDX,EDX
005dd731  JZ 0x005dd737
005dd733  MOV byte ptr [EBP + 0x8],0x1
005dd737  PUSH -0x1
005dd739  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005dd73f  MOV EDX,dword ptr [EAX]
005dd741  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd747  MOV EAX,dword ptr [EDX + 0x33c]
005dd74d  CALL EAX
005dd74f  MOVZX ECX,AL
005dd752  TEST ECX,ECX
005dd754  JNZ 0x005dd76a
005dd756  MOV DL,byte ptr [EBP + 0x8]
005dd759  PUSH EDX
005dd75a  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd760  CALL 0x005f39c0
005dd765  JMP 0x005dd8f5
005dd76a  CMP dword ptr [0x007947e4],0x0
005dd771  JZ 0x005dd7b0
005dd773  MOV EAX,[0x007947e4]
005dd778  MOV EDX,dword ptr [EAX]
005dd77a  MOV ECX,dword ptr [0x007947e4]
005dd780  MOV EAX,dword ptr [EDX + 0x2d8]
005dd786  CALL EAX
005dd788  MOV dword ptr [EBP + 0xfffffeac],EAX
005dd78e  CMP dword ptr [EBP + 0xfffffeac],0x0
005dd795  JZ 0x005dd7a2
005dd797  CMP dword ptr [EBP + 0xfffffeac],0x1
005dd79e  JZ 0x005dd7a9
005dd7a0  JMP 0x005dd7b0
005dd7a2  XOR AL,AL
005dd7a4  JMP 0x005dd8f5
005dd7a9  MOV AL,0x1
005dd7ab  JMP 0x005dd8f5
005dd7b0  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd7b6  MOVZX EDX,byte ptr [ECX + 0x24]
005dd7ba  TEST EDX,EDX
005dd7bc  JNZ 0x005dd7c6
005dd7be  MOVZX EAX,byte ptr [EBP + 0x8]
005dd7c2  TEST EAX,EAX
005dd7c4  JZ 0x005dd7d5
005dd7c6  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd7cc  MOV byte ptr [ECX + 0x24],0x1
005dd7d0  JMP 0x005dd8bc
005dd7d5  MOV EDX,dword ptr [0x0162ee80]
005dd7db  MOV EAX,dword ptr [EDX]
005dd7dd  MOV ECX,dword ptr [0x0162ee80]
005dd7e3  MOV EDX,dword ptr [EAX + 0x80]
005dd7e9  CALL EDX
005dd7eb  MOVZX EAX,AL
005dd7ee  TEST EAX,EAX
005dd7f0  JZ 0x005dd817
005dd7f2  PUSH 0x795634
005dd7f7  PUSH 0x6bcd54
005dd7fc  CALL 0x00630f40
005dd801  ADD ESP,0x4
005dd804  PUSH EAX
005dd805  LEA ECX,[EBP + 0xfffffef8]
005dd80b  PUSH ECX
005dd80c  CALL dword ptr [0x006b2220]
005dd812  ADD ESP,0xc
005dd815  JMP 0x005dd865
005dd817  LEA EDX,[EBP + 0xfffffeb8]
005dd81d  PUSH EDX
005dd81e  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd824  CALL 0x005f3bf0
005dd829  PUSH EAX
005dd82a  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005dd830  MOV EDX,dword ptr [EAX]
005dd832  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd838  MOV EAX,dword ptr [EDX + 0x338]
005dd83e  CALL EAX
005dd840  LEA ECX,[EBP + 0xfffffeb8]
005dd846  PUSH ECX
005dd847  PUSH 0x6d4b70
005dd84c  CALL 0x00630f40
005dd851  ADD ESP,0x4
005dd854  PUSH EAX
005dd855  LEA EDX,[EBP + 0xfffffef8]
005dd85b  PUSH EDX
005dd85c  CALL dword ptr [0x006b2220]
005dd862  ADD ESP,0xc
005dd865  PUSH 0x4
005dd867  PUSH 0x6bcd40
005dd86c  CALL 0x00630f40
005dd871  ADD ESP,0x4
005dd874  PUSH EAX
005dd875  LEA EAX,[EBP + 0xfffffef8]
005dd87b  PUSH EAX
005dd87c  CALL 0x0062ff10
005dd881  ADD ESP,0xc
005dd884  CMP EAX,0x6
005dd887  JNZ 0x005dd8bc
005dd889  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd88f  CMP dword ptr [ECX + 0x34],0x44c
005dd896  JZ 0x005dd8b2
005dd898  PUSH 0x44c
005dd89d  MOV EDX,dword ptr [EBP + 0xfffffeb0]
005dd8a3  MOV EAX,dword ptr [EDX]
005dd8a5  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd8ab  MOV EDX,dword ptr [EAX + 0x34]
005dd8ae  CALL EDX
005dd8b0  JMP 0x005dd8bc
005dd8b2  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005dd8b8  MOV byte ptr [EAX + 0x24],0x1
005dd8bc  MOV ECX,dword ptr [EBP + 0xfffffeb0]
005dd8c2  MOVZX EDX,byte ptr [ECX + 0x24]
005dd8c6  TEST EDX,EDX
005dd8c8  JNZ 0x005dd8e5
005dd8ca  MOV EAX,dword ptr [EBP + 0xfffffeb0]
005dd8d0  CMP dword ptr [EAX + 0x2c],0x44c
005dd8d7  JZ 0x005dd8e5
005dd8d9  MOV dword ptr [EBP + 0xfffffea8],0x0
005dd8e3  JMP 0x005dd8ef
005dd8e5  MOV dword ptr [EBP + 0xfffffea8],0x1
005dd8ef  MOV AL,byte ptr [EBP + 0xfffffea8]
005dd8f5  MOV ECX,dword ptr [EBP + -0x4]
005dd8f8  XOR ECX,EBP
005dd8fa  CALL 0x00686d72
005dd8ff  MOV ESP,EBP
005dd901  POP EBP
005dd902  RET 0x4
