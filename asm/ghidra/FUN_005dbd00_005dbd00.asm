; FUN_005dbd00  005dbd00
005dbd00  PUSH EBP
005dbd01  MOV EBP,ESP
005dbd03  PUSH -0x1
005dbd05  PUSH 0x6a935b
005dbd0a  MOV EAX,FS:[0x0]
005dbd10  PUSH EAX
005dbd11  SUB ESP,0x18
005dbd14  MOV EAX,[0x00781870]
005dbd19  XOR EAX,EBP
005dbd1b  PUSH EAX
005dbd1c  LEA EAX,[EBP + -0xc]
005dbd1f  MOV FS:[0x0],EAX
005dbd25  MOV dword ptr [EBP + -0x20],ECX
005dbd28  PUSH 0x0
005dbd2a  CALL 0x005dcb00
005dbd2f  ADD ESP,0x4
005dbd32  PUSH EAX
005dbd33  LEA EAX,[EBP + -0x14]
005dbd36  PUSH EAX
005dbd37  MOV ECX,dword ptr [EBP + -0x20]
005dbd3a  MOV EDX,dword ptr [ECX]
005dbd3c  MOV ECX,dword ptr [EBP + -0x20]
005dbd3f  MOV EAX,dword ptr [EDX + 0x2a8]
005dbd45  CALL EAX
005dbd47  CMP dword ptr [EBP + -0x14],0x3e8
005dbd4e  JGE 0x005dbd7b
005dbd50  PUSH 0x0
005dbd52  PUSH 0x6d43e8
005dbd57  CALL 0x00630f40
005dbd5c  ADD ESP,0x4
005dbd5f  PUSH EAX
005dbd60  PUSH 0x6d4530
005dbd65  CALL 0x00630f40
005dbd6a  ADD ESP,0x4
005dbd6d  PUSH EAX
005dbd6e  CALL 0x0062ff10
005dbd73  ADD ESP,0xc
005dbd76  JMP 0x005dbe00
005dbd7b  CMP dword ptr [0x007947bc],0x0
005dbd82  JNZ 0x005dbdf5
005dbd84  PUSH 0x1c4
005dbd89  CALL 0x00686d82
005dbd8e  ADD ESP,0x4
005dbd91  MOV dword ptr [EBP + -0x1c],EAX
005dbd94  MOV dword ptr [EBP + -0x4],0x0
005dbd9b  CMP dword ptr [EBP + -0x1c],0x0
005dbd9f  JZ 0x005dbdb6
005dbda1  MOV ECX,dword ptr [EBP + 0xc]
005dbda4  PUSH ECX
005dbda5  MOV EDX,dword ptr [EBP + 0x8]
005dbda8  PUSH EDX
005dbda9  MOV ECX,dword ptr [EBP + -0x1c]
005dbdac  CALL 0x005ce650
005dbdb1  MOV dword ptr [EBP + -0x24],EAX
005dbdb4  JMP 0x005dbdbd
005dbdb6  MOV dword ptr [EBP + -0x24],0x0
005dbdbd  MOV EAX,dword ptr [EBP + -0x24]
005dbdc0  MOV dword ptr [EBP + -0x18],EAX
005dbdc3  MOV dword ptr [EBP + -0x4],0xffffffff
005dbdca  MOV ECX,dword ptr [EBP + -0x18]
005dbdcd  MOV dword ptr [0x007947bc],ECX
005dbdd3  MOV EDX,dword ptr [0x007947bc]
005dbdd9  MOV EAX,dword ptr [EDX]
005dbddb  MOV ECX,dword ptr [0x007947bc]
005dbde1  MOV EDX,dword ptr [EAX + 0x3c]
005dbde4  CALL EDX
005dbde6  PUSH 0x0
005dbde8  PUSH 0x0
005dbdea  MOV ECX,dword ptr [0x007947bc]
005dbdf0  CALL 0x005f7340
005dbdf5  MOV ECX,dword ptr [0x007947bc]
005dbdfb  CALL 0x005f85d0
005dbe00  MOV ECX,dword ptr [EBP + -0xc]
005dbe03  MOV dword ptr FS:[0x0],ECX
005dbe0a  POP ECX
005dbe0b  MOV ESP,EBP
005dbe0d  POP EBP
005dbe0e  RET 0x8
