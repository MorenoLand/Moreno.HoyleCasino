; FUN_005feff0  005feff0
005feff0  PUSH EBP
005feff1  MOV EBP,ESP
005feff3  SUB ESP,0x8
005feff6  MOV dword ptr [EBP + -0x8],ECX
005feff9  MOV dword ptr [EBP + -0x4],0x0
005ff000  JMP 0x005ff00b
005ff002  MOV EAX,dword ptr [EBP + -0x4]
005ff005  ADD EAX,0x1
005ff008  MOV dword ptr [EBP + -0x4],EAX
005ff00b  MOV ECX,dword ptr [EBP + -0x8]
005ff00e  CALL 0x005feda0
005ff013  CMP dword ptr [EBP + -0x4],EAX
005ff016  JGE 0x005ff038
005ff018  MOV ECX,dword ptr [EBP + -0x4]
005ff01b  PUSH ECX
005ff01c  MOV ECX,dword ptr [EBP + -0x8]
005ff01f  CALL 0x005ff080
005ff024  MOV EDX,dword ptr [EAX + 0x1ec]
005ff02a  PUSH EDX
005ff02b  MOV ECX,dword ptr [0x015e55e4]
005ff031  CALL 0x005f2840
005ff036  JMP 0x005ff002
005ff038  MOV ESP,EBP
005ff03a  POP EBP
005ff03b  RET
