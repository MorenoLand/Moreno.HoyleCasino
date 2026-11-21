; FUN_0056ae50  0056ae50
0056ae50  PUSH EBP
0056ae51  MOV EBP,ESP
0056ae53  SUB ESP,0x1c
0056ae56  MOV EAX,[0x00781870]
0056ae5b  XOR EAX,EBP
0056ae5d  MOV dword ptr [EBP + -0x8],EAX
0056ae60  MOV dword ptr [EBP + -0x1c],ECX
0056ae63  LEA EAX,[EBP + -0x14]
0056ae66  PUSH EAX
0056ae67  MOV ECX,dword ptr [EBP + 0x8]
0056ae6a  PUSH ECX
0056ae6b  MOV ECX,dword ptr [EBP + -0x1c]
0056ae6e  CALL 0x0056adb0
0056ae73  MOV dword ptr [EBP + -0x4],0x0
0056ae7a  JMP 0x0056ae85
0056ae7c  MOV EDX,dword ptr [EBP + -0x4]
0056ae7f  ADD EDX,0x1
0056ae82  MOV dword ptr [EBP + -0x4],EDX
0056ae85  CMP dword ptr [EBP + -0x4],0x5
0056ae89  JGE 0x0056aeb1
0056ae8b  MOV EAX,dword ptr [EBP + -0x4]
0056ae8e  MOV CX,word ptr [EBP + EAX*0x2 + -0x14]
0056ae93  MOV word ptr [EBP + -0x18],CX
0056ae97  MOVZX EDX,word ptr [EBP + -0x18]
0056ae9b  TEST EDX,EDX
0056ae9d  JZ 0x0056aeaf
0056ae9f  MOV EAX,dword ptr [EBP + -0x4]
0056aea2  PUSH EAX
0056aea3  MOV ECX,dword ptr [EBP + 0x8]
0056aea6  PUSH ECX
0056aea7  MOV ECX,dword ptr [EBP + -0x1c]
0056aeaa  CALL 0x0056b490
0056aeaf  JMP 0x0056ae7c
0056aeb1  MOV ECX,dword ptr [EBP + -0x8]
0056aeb4  XOR ECX,EBP
0056aeb6  CALL 0x00686d72
0056aebb  MOV ESP,EBP
0056aebd  POP EBP
0056aebe  RET 0x4
