; FUN_005fec50  005fec50
005fec50  PUSH EBP
005fec51  MOV EBP,ESP
005fec53  SUB ESP,0x3c
005fec56  MOV EAX,[0x00781870]
005fec5b  XOR EAX,EBP
005fec5d  MOV dword ptr [EBP + -0x4],EAX
005fec60  MOV dword ptr [EBP + -0x3c],ECX
005fec63  LEA EAX,[EBP + -0x38]
005fec66  PUSH EAX
005fec67  MOV CL,byte ptr [EBP + 0x14]
005fec6a  PUSH ECX
005fec6b  MOV ECX,dword ptr [EBP + -0x3c]
005fec6e  CALL 0x005fe770
005fec73  PUSH EAX
005fec74  MOV EDX,dword ptr [EBP + 0xc]
005fec77  PUSH EDX
005fec78  MOV EAX,[0x015e55e8]
005fec7d  MOV EDX,dword ptr [EAX]
005fec7f  MOV ECX,dword ptr [0x015e55e8]
005fec85  MOV EAX,dword ptr [EDX + 0x14]
005fec88  CALL EAX
005fec8a  PUSH EAX
005fec8b  MOV ECX,dword ptr [EBP + -0x3c]
005fec8e  CALL 0x005fea30
005fec93  MOV ECX,dword ptr [EBP + -0x4]
005fec96  XOR ECX,EBP
005fec98  CALL 0x00686d72
005fec9d  MOV ESP,EBP
005fec9f  POP EBP
005feca0  RET 0x10
