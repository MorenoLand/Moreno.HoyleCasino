; FUN_005fadd0  005fadd0
005fadd0  PUSH EBP
005fadd1  MOV EBP,ESP
005fadd3  PUSH -0x1
005fadd5  PUSH 0x6aa4f0
005fadda  MOV EAX,FS:[0x0]
005fade0  PUSH EAX
005fade1  SUB ESP,0x10
005fade4  MOV EAX,[0x00781870]
005fade9  XOR EAX,EBP
005fadeb  PUSH EAX
005fadec  LEA EAX,[EBP + -0xc]
005fadef  MOV FS:[0x0],EAX
005fadf5  MOV dword ptr [EBP + -0x18],ECX
005fadf8  CMP dword ptr [EBP + 0x8],0x0
005fadfc  JNZ 0x005fae3f
005fadfe  PUSH 0x70
005fae00  CALL 0x00686d82
005fae05  ADD ESP,0x4
005fae08  MOV dword ptr [EBP + -0x14],EAX
005fae0b  MOV dword ptr [EBP + -0x4],0x0
005fae12  CMP dword ptr [EBP + -0x14],0x0
005fae16  JZ 0x005fae25
005fae18  MOV ECX,dword ptr [EBP + -0x14]
005fae1b  CALL 0x00629e40
005fae20  MOV dword ptr [EBP + -0x1c],EAX
005fae23  JMP 0x005fae2c
005fae25  MOV dword ptr [EBP + -0x1c],0x0
005fae2c  MOV EAX,dword ptr [EBP + -0x1c]
005fae2f  MOV dword ptr [EBP + -0x10],EAX
005fae32  MOV dword ptr [EBP + -0x4],0xffffffff
005fae39  MOV ECX,dword ptr [EBP + -0x10]
005fae3c  MOV dword ptr [EBP + 0x8],ECX
005fae3f  MOV EDX,dword ptr [EBP + 0x8]
005fae42  PUSH EDX
005fae43  MOV ECX,dword ptr [EBP + -0x18]
005fae46  ADD ECX,0x84
005fae4c  CALL 0x0060c840
005fae51  MOV EAX,dword ptr [EBP + 0x8]
005fae54  MOV ECX,dword ptr [EBP + -0x18]
005fae57  MOV dword ptr [EAX + 0x4],ECX
005fae5a  MOV EDX,dword ptr [EBP + 0xc]
005fae5d  PUSH EDX
005fae5e  MOV EAX,dword ptr [EBP + 0x60]
005fae61  PUSH EAX
005fae62  MOV ECX,dword ptr [EBP + 0x5c]
005fae65  PUSH ECX
005fae66  MOV EDX,dword ptr [EBP + 0x58]
005fae69  PUSH EDX
005fae6a  MOV EAX,dword ptr [EBP + 0x54]
005fae6d  PUSH EAX
005fae6e  MOV ECX,dword ptr [EBP + 0x50]
005fae71  PUSH ECX
005fae72  MOV EDX,dword ptr [EBP + 0x4c]
005fae75  PUSH EDX
005fae76  MOV EAX,dword ptr [EBP + 0x48]
005fae79  PUSH EAX
005fae7a  MOV ECX,dword ptr [EBP + 0x44]
005fae7d  PUSH ECX
005fae7e  MOV EDX,dword ptr [EBP + 0x40]
005fae81  PUSH EDX
005fae82  MOV EAX,dword ptr [EBP + 0x3c]
005fae85  PUSH EAX
005fae86  MOV ECX,dword ptr [EBP + 0x38]
005fae89  PUSH ECX
005fae8a  MOV EDX,dword ptr [EBP + 0x34]
005fae8d  PUSH EDX
005fae8e  MOV EAX,dword ptr [EBP + 0x30]
005fae91  PUSH EAX
005fae92  MOV ECX,dword ptr [EBP + 0x2c]
005fae95  PUSH ECX
005fae96  MOV EDX,dword ptr [EBP + 0x28]
005fae99  PUSH EDX
005fae9a  MOV EAX,dword ptr [EBP + 0x24]
005fae9d  PUSH EAX
005fae9e  MOV ECX,dword ptr [EBP + 0x20]
005faea1  PUSH ECX
005faea2  MOV EDX,dword ptr [EBP + 0x1c]
005faea5  PUSH EDX
005faea6  MOV EAX,dword ptr [EBP + 0x18]
005faea9  PUSH EAX
005faeaa  MOV ECX,dword ptr [EBP + 0x14]
005faead  PUSH ECX
005faeae  MOV EDX,dword ptr [EBP + 0x10]
005faeb1  PUSH EDX
005faeb2  MOV ECX,dword ptr [EBP + 0x8]
005faeb5  CALL 0x0062a070
005faeba  MOV EAX,dword ptr [EBP + 0x8]
005faebd  MOV EDX,dword ptr [EAX]
005faebf  MOV ECX,dword ptr [EBP + 0x8]
005faec2  MOV EAX,dword ptr [EDX + 0x74]
005faec5  CALL EAX
005faec7  MOV EAX,dword ptr [EBP + 0x8]
005faeca  MOV ECX,dword ptr [EBP + -0xc]
005faecd  MOV dword ptr FS:[0x0],ECX
005faed4  POP ECX
005faed5  MOV ESP,EBP
005faed7  POP EBP
005faed8  RET 0x5c
