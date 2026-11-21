; FUN_0044eaf0  0044eaf0
0044eaf0  PUSH EBP
0044eaf1  MOV EBP,ESP
0044eaf3  SUB ESP,0x20
0044eaf6  MOV EAX,[0x00781870]
0044eafb  XOR EAX,EBP
0044eafd  MOV dword ptr [EBP + -0x4],EAX
0044eb00  MOV dword ptr [EBP + -0x1c],ECX
0044eb03  MOV byte ptr [EBP + -0x15],0x0
0044eb07  MOV byte ptr [EBP + -0x16],0x0
0044eb0b  LEA EAX,[EBP + -0x14]
0044eb0e  PUSH EAX
0044eb0f  MOV ECX,dword ptr [EBP + 0x8]
0044eb12  MOV EDX,dword ptr [0x00790738]
0044eb18  MOV AX,word ptr [EDX + ECX*0x2 + 0xac]
0044eb20  PUSH EAX
0044eb21  MOV ECX,dword ptr [EBP + 0x8]
0044eb24  MOV EDX,dword ptr [0x00790738]
0044eb2a  MOV AX,word ptr [EDX + ECX*0x2 + 0xa2]
0044eb32  PUSH EAX
0044eb33  MOV ECX,dword ptr [EBP + -0x1c]
0044eb36  CALL 0x00452fd0
0044eb3b  LEA ECX,[EBP + -0xc]
0044eb3e  PUSH ECX
0044eb3f  MOV EDX,dword ptr [EBP + 0x8]
0044eb42  MOV EAX,[0x00790738]
0044eb47  MOV CX,word ptr [EAX + EDX*0x2 + 0xac]
0044eb4f  PUSH ECX
0044eb50  MOV EDX,dword ptr [EBP + 0x8]
0044eb53  MOV EAX,[0x00790738]
0044eb58  MOV CX,word ptr [EAX + EDX*0x2 + 0xa2]
0044eb60  PUSH ECX
0044eb61  MOV EDX,dword ptr [EBP + 0x8]
0044eb64  PUSH EDX
0044eb65  MOV ECX,dword ptr [EBP + -0x1c]
0044eb68  CALL 0x004530b0
0044eb6d  MOVSX EAX,byte ptr [EBP + -0x14]
0044eb71  CMP EAX,0x2
0044eb74  JNZ 0x0044eb7a
0044eb76  MOV byte ptr [EBP + -0x15],0x1
0044eb7a  MOVSX ECX,byte ptr [EBP + -0xc]
0044eb7e  CMP ECX,0x3
0044eb81  JL 0x0044eb87
0044eb83  MOV byte ptr [EBP + -0x16],0x1
0044eb87  MOVZX EDX,byte ptr [EBP + -0x15]
0044eb8b  TEST EDX,EDX
0044eb8d  JZ 0x0044eba0
0044eb8f  MOVZX EAX,byte ptr [EBP + -0x16]
0044eb93  TEST EAX,EAX
0044eb95  JZ 0x0044eba0
0044eb97  MOV dword ptr [EBP + -0x20],0x1
0044eb9e  JMP 0x0044eba7
0044eba0  MOV dword ptr [EBP + -0x20],0x0
0044eba7  MOV AL,byte ptr [EBP + -0x20]
0044ebaa  MOV ECX,dword ptr [EBP + -0x4]
0044ebad  XOR ECX,EBP
0044ebaf  CALL 0x00686d72
0044ebb4  MOV ESP,EBP
0044ebb6  POP EBP
0044ebb7  RET 0x4
