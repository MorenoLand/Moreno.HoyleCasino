; FUN_0061cd70  0061cd70
0061cd70  PUSH EBP
0061cd71  MOV EBP,ESP
0061cd73  SUB ESP,0x8
0061cd76  MOV EAX,dword ptr [EBP + 0x8]
0061cd79  ADD EAX,0x4
0061cd7c  MOV dword ptr [EBP + 0x8],EAX
0061cd7f  MOV ECX,dword ptr [EBP + 0x8]
0061cd82  ADD ECX,0x4
0061cd85  MOV dword ptr [EBP + 0x8],ECX
0061cd88  MOV EDX,dword ptr [EBP + 0x8]
0061cd8b  ADD EDX,0x300
0061cd91  MOV dword ptr [EBP + 0x8],EDX
0061cd94  MOV EAX,dword ptr [EBP + 0x8]
0061cd97  MOV CX,word ptr [EAX]
0061cd9a  MOV word ptr [EBP + -0x8],CX
0061cd9e  MOV EDX,dword ptr [EBP + 0x8]
0061cda1  ADD EDX,0x2
0061cda4  MOV dword ptr [EBP + 0x8],EDX
0061cda7  MOV dword ptr [EBP + -0x4],0x0
0061cdae  JMP 0x0061cdb9
0061cdb0  MOV EAX,dword ptr [EBP + -0x4]
0061cdb3  ADD EAX,0x1
0061cdb6  MOV dword ptr [EBP + -0x4],EAX
0061cdb9  MOVZX ECX,word ptr [EBP + -0x8]
0061cdbd  CMP dword ptr [EBP + -0x4],ECX
0061cdc0  JGE 0x0061cdd8
0061cdc2  MOV EDX,dword ptr [EBP + 0x10]
0061cdc5  PUSH EDX
0061cdc6  MOV EAX,dword ptr [EBP + 0xc]
0061cdc9  PUSH EAX
0061cdca  LEA ECX,[EBP + 0x8]
0061cdcd  PUSH ECX
0061cdce  CALL 0x0061cde0
0061cdd3  ADD ESP,0xc
0061cdd6  JMP 0x0061cdb0
0061cdd8  MOV ESP,EBP
0061cdda  POP EBP
0061cddb  RET
