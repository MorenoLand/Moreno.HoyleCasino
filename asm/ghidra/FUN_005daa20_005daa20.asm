; FUN_005daa20  005daa20
005daa20  PUSH EBP
005daa21  MOV EBP,ESP
005daa23  SUB ESP,0x2c
005daa26  MOV dword ptr [EBP + -0x2c],ECX
005daa29  MOV ECX,dword ptr [0x0162ee84]
005daa2f  CALL 0x00636610
005daa34  MOV dword ptr [EBP + -0x8],EAX
005daa37  PUSH 0x0
005daa39  PUSH 0x0
005daa3b  CALL 0x0064c8a0
005daa40  ADD ESP,0x8
005daa43  MOV dword ptr [EBP + -0x18],EAX
005daa46  MOV dword ptr [EBP + -0x14],EDX
005daa49  MOV EAX,dword ptr [EBP + -0x18]
005daa4c  MOV dword ptr [EBP + -0x10],EAX
005daa4f  MOV ECX,dword ptr [EBP + -0x14]
005daa52  MOV dword ptr [EBP + -0xc],ECX
005daa55  MOV dword ptr [EBP + -0x4],0x0
005daa5c  JMP 0x005daa67
005daa5e  MOV EDX,dword ptr [EBP + -0x4]
005daa61  ADD EDX,0x1
005daa64  MOV dword ptr [EBP + -0x4],EDX
005daa67  MOV EAX,dword ptr [EBP + -0x4]
005daa6a  CMP EAX,dword ptr [EBP + -0x8]
005daa6d  JGE 0x005daac0
005daa6f  MOV ECX,dword ptr [EBP + -0xc]
005daa72  PUSH ECX
005daa73  MOV EDX,dword ptr [EBP + -0x10]
005daa76  PUSH EDX
005daa77  LEA EAX,[EBP + -0x20]
005daa7a  PUSH EAX
005daa7b  MOV ECX,dword ptr [EBP + -0x4]
005daa7e  PUSH ECX
005daa7f  CALL 0x005dcb00
005daa84  ADD ESP,0x4
005daa87  MOV ECX,EAX
005daa89  CALL 0x005d5a90
005daa8e  MOV ECX,EAX
005daa90  CALL 0x0064c6e0
005daa95  MOVZX EDX,AL
005daa98  TEST EDX,EDX
005daa9a  JZ 0x005daabe
005daa9c  LEA EAX,[EBP + -0x28]
005daa9f  PUSH EAX
005daaa0  MOV ECX,dword ptr [EBP + -0x4]
005daaa3  PUSH ECX
005daaa4  CALL 0x005dcb00
005daaa9  ADD ESP,0x4
005daaac  MOV ECX,EAX
005daaae  CALL 0x005d5a90
005daab3  MOV EDX,dword ptr [EAX]
005daab5  MOV EAX,dword ptr [EAX + 0x4]
005daab8  MOV dword ptr [EBP + -0x10],EDX
005daabb  MOV dword ptr [EBP + -0xc],EAX
005daabe  JMP 0x005daa5e
005daac0  MOV ECX,dword ptr [EBP + 0x8]
005daac3  MOV EDX,dword ptr [EBP + -0x10]
005daac6  MOV dword ptr [ECX],EDX
005daac8  MOV EAX,dword ptr [EBP + -0xc]
005daacb  MOV dword ptr [ECX + 0x4],EAX
005daace  MOV EAX,dword ptr [EBP + 0x8]
005daad1  MOV ESP,EBP
005daad3  POP EBP
005daad4  RET 0x4
