; FUN_0058a8c0  0058a8c0
0058a8c0  PUSH EBP
0058a8c1  MOV EBP,ESP
0058a8c3  SUB ESP,0xc
0058a8c6  PUSH ESI
0058a8c7  MOV dword ptr [EBP + -0xc],ECX
0058a8ca  MOV ECX,dword ptr [EBP + -0xc]
0058a8cd  CALL 0x0058a550
0058a8d2  MOV dword ptr [EBP + -0x8],EAX
0058a8d5  MOV ECX,dword ptr [EBP + -0xc]
0058a8d8  CALL 0x0058acf0
0058a8dd  MOV EAX,dword ptr [EBP + -0xc]
0058a8e0  MOV ECX,dword ptr [EAX + 0x3c08]
0058a8e6  IMUL ECX,ECX,0xe10
0058a8ec  MOV EDX,dword ptr [EBP + -0xc]
0058a8ef  LEA EAX,[EDX + ECX*0x1 + 0x328]
0058a8f6  MOV ECX,dword ptr [EBP + -0x8]
0058a8f9  IMUL ECX,ECX,0x24
0058a8fc  MOV EDX,dword ptr [EBP + -0xc]
0058a8ff  MOV EDX,dword ptr [EDX + 0x3b68]
0058a905  MOV EDX,dword ptr [EDX + 0x4]
0058a908  MOV AL,byte ptr [EAX + ECX*0x1]
0058a90b  MOV byte ptr [EDX],AL
0058a90d  MOV ECX,dword ptr [EBP + -0xc]
0058a910  MOV EDX,dword ptr [ECX + 0x3c08]
0058a916  IMUL EDX,EDX,0xe10
0058a91c  MOV EAX,dword ptr [EBP + -0xc]
0058a91f  LEA ECX,[EAX + EDX*0x1 + 0x328]
0058a926  MOV EDX,dword ptr [EBP + -0x8]
0058a929  IMUL EDX,EDX,0x24
0058a92c  MOV EAX,dword ptr [EBP + -0xc]
0058a92f  MOV EAX,dword ptr [EAX + 0x3b68]
0058a935  MOV EAX,dword ptr [EAX + 0x4]
0058a938  MOV CL,byte ptr [ECX + EDX*0x1 + 0x1]
0058a93c  MOV byte ptr [EAX + 0x1],CL
0058a93f  MOV EDX,dword ptr [EBP + -0xc]
0058a942  MOV EAX,dword ptr [EDX + 0x3c08]
0058a948  IMUL EAX,EAX,0xe10
0058a94e  MOV ECX,dword ptr [EBP + -0xc]
0058a951  LEA EDX,[ECX + EAX*0x1 + 0x328]
0058a958  MOV EAX,dword ptr [EBP + -0x8]
0058a95b  IMUL EAX,EAX,0x24
0058a95e  MOV ECX,dword ptr [EBP + -0xc]
0058a961  MOV ECX,dword ptr [ECX + 0x3b68]
0058a967  MOV ECX,dword ptr [ECX + 0x4]
0058a96a  MOV DL,byte ptr [EDX + EAX*0x1 + 0x2]
0058a96e  MOV byte ptr [ECX + 0x2],DL
0058a971  MOV EAX,dword ptr [EBP + -0xc]
0058a974  MOV ECX,dword ptr [EAX + 0x3c08]
0058a97a  IMUL ECX,ECX,0xe10
0058a980  MOV EDX,dword ptr [EBP + -0xc]
0058a983  LEA EAX,[EDX + ECX*0x1 + 0x328]
0058a98a  MOV ECX,dword ptr [EBP + -0x8]
0058a98d  IMUL ECX,ECX,0x24
0058a990  MOV EDX,dword ptr [EBP + -0xc]
0058a993  MOV EDX,dword ptr [EDX + 0x3b68]
0058a999  MOV EDX,dword ptr [EDX + 0x4]
0058a99c  MOV AL,byte ptr [EAX + ECX*0x1 + 0x3]
0058a9a0  MOV byte ptr [EDX + 0x3],AL
0058a9a3  MOV dword ptr [EBP + -0x4],0x0
0058a9aa  JMP 0x0058a9b5
0058a9ac  MOV ECX,dword ptr [EBP + -0x4]
0058a9af  ADD ECX,0x1
0058a9b2  MOV dword ptr [EBP + -0x4],ECX
0058a9b5  CMP dword ptr [EBP + -0x4],0x14
0058a9b9  JGE 0x0058a9f8
0058a9bb  MOV EDX,dword ptr [EBP + -0xc]
0058a9be  MOV EAX,dword ptr [EDX + 0x3c08]
0058a9c4  IMUL EAX,EAX,0xe10
0058a9ca  MOV ECX,dword ptr [EBP + -0xc]
0058a9cd  LEA EDX,[ECX + EAX*0x1 + 0x328]
0058a9d4  MOV EAX,dword ptr [EBP + -0x8]
0058a9d7  IMUL EAX,EAX,0x24
0058a9da  ADD EDX,EAX
0058a9dc  MOV ECX,dword ptr [EBP + -0xc]
0058a9df  MOV EAX,dword ptr [ECX + 0x3b68]
0058a9e5  MOV ECX,dword ptr [EAX + 0x4]
0058a9e8  MOV EAX,dword ptr [EBP + -0x4]
0058a9eb  MOV ESI,dword ptr [EBP + -0x4]
0058a9ee  MOV DL,byte ptr [EDX + ESI*0x1 + 0x5]
0058a9f2  MOV byte ptr [ECX + EAX*0x1 + 0x5],DL
0058a9f6  JMP 0x0058a9ac
0058a9f8  MOV ECX,dword ptr [EBP + -0xc]
0058a9fb  CALL 0x00589290
0058aa00  POP ESI
0058aa01  MOV ESP,EBP
0058aa03  POP EBP
0058aa04  RET
