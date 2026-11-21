; FUN_005fea30  005fea30
005fea30  PUSH EBP
005fea31  MOV EBP,ESP
005fea33  PUSH -0x1
005fea35  PUSH 0x6aa768
005fea3a  MOV EAX,FS:[0x0]
005fea40  PUSH EAX
005fea41  SUB ESP,0x360
005fea47  MOV EAX,[0x00781870]
005fea4c  XOR EAX,EBP
005fea4e  MOV dword ptr [EBP + -0x10],EAX
005fea51  PUSH EAX
005fea52  LEA EAX,[EBP + -0xc]
005fea55  MOV FS:[0x0],EAX
005fea5b  MOV dword ptr [EBP + 0xfffffc94],ECX
005fea61  MOV dword ptr [EBP + 0xfffffe18],0x0
005fea6b  CMP dword ptr [EBP + 0x8],0x0
005fea6f  JZ 0x005fea7b
005fea71  MOV EAX,dword ptr [EBP + 0x8]
005fea74  MOVSX ECX,byte ptr [EAX]
005fea77  TEST ECX,ECX
005fea79  JNZ 0x005fea82
005fea7b  XOR EAX,EAX
005fea7d  JMP 0x005fec2a
005fea82  LEA ECX,[EBP + 0xfffffe1c]
005fea88  CALL 0x005ec5a0
005fea8d  MOV dword ptr [EBP + -0x4],0x0
005fea94  PUSH ECX
005fea95  MOV EDX,ESP
005fea97  MOV AX,[0x0075ee1c]
005fea9d  MOV word ptr [EDX],AX
005feaa0  MOV CL,byte ptr [0x0075ee1e]
005feaa6  MOV byte ptr [EDX + 0x2],CL
005feaa9  PUSH -0x1
005feaab  MOV EDX,dword ptr [0x015e55e8]
005feab1  MOV EAX,dword ptr [EDX]
005feab3  MOV ECX,dword ptr [0x015e55e8]
005feab9  MOV EDX,dword ptr [EAX + 0x54]
005feabc  CALL EDX
005feabe  PUSH EAX
005feabf  LEA ECX,[EBP + 0xfffffe1c]
005feac5  CALL 0x005ecd00
005feaca  MOV EAX,dword ptr [EBP + 0x8]
005feacd  PUSH EAX
005feace  LEA ECX,[EBP + 0xfffffe1c]
005fead4  CALL 0x005ee5e0
005fead9  LEA ECX,[EBP + 0xfffffe1c]
005feadf  CALL 0x005ef3e0
005feae4  LEA ECX,[EBP + 0xfffffe1c]
005feaea  CALL 0x005ef050
005feaef  ADD EAX,dword ptr [EBP + 0xfffffe18]
005feaf5  MOV dword ptr [EBP + 0xfffffe18],EAX
005feafb  CMP dword ptr [EBP + 0xc],0x0
005feaff  JZ 0x005feb72
005feb01  MOV ECX,dword ptr [EBP + 0xc]
005feb04  MOVSX EDX,byte ptr [ECX]
005feb07  TEST EDX,EDX
005feb09  JZ 0x005feb72
005feb0b  PUSH ECX
005feb0c  MOV EAX,ESP
005feb0e  MOV CX,word ptr [0x0075ee1c]
005feb15  MOV word ptr [EAX],CX
005feb18  MOV DL,byte ptr [0x0075ee1e]
005feb1e  MOV byte ptr [EAX + 0x2],DL
005feb21  PUSH -0x1
005feb23  MOV EAX,[0x015e55e8]
005feb28  MOV EDX,dword ptr [EAX]
005feb2a  MOV ECX,dword ptr [0x015e55e8]
005feb30  MOV EAX,dword ptr [EDX + 0x54]
005feb33  CALL EAX
005feb35  PUSH EAX
005feb36  LEA ECX,[EBP + 0xfffffe1c]
005feb3c  CALL 0x005ecd00
005feb41  MOV ECX,dword ptr [EBP + 0xc]
005feb44  PUSH ECX
005feb45  LEA ECX,[EBP + 0xfffffe1c]
005feb4b  CALL 0x005ee5e0
005feb50  LEA ECX,[EBP + 0xfffffe1c]
005feb56  CALL 0x005ef3e0
005feb5b  LEA ECX,[EBP + 0xfffffe1c]
005feb61  CALL 0x005ef050
005feb66  ADD EAX,dword ptr [EBP + 0xfffffe18]
005feb6c  MOV dword ptr [EBP + 0xfffffe18],EAX
005feb72  LEA ECX,[EBP + 0xfffffc9c]
005feb78  CALL 0x005eaaf0
005feb7d  MOV byte ptr [EBP + -0x4],0x1
005feb81  MOV EDX,dword ptr [0x015e55e8]
005feb87  MOV EAX,dword ptr [EDX]
005feb89  MOV ECX,dword ptr [0x015e55e8]
005feb8f  MOV EDX,dword ptr [EAX + 0x64]
005feb92  CALL EDX
005feb94  PUSH EAX
005feb95  LEA ECX,[EBP + 0xfffffc9c]
005feb9b  CALL 0x005eaf00
005feba0  LEA ECX,[EBP + 0xfffffc9c]
005feba6  CALL 0x005eacb0
005febab  LEA ECX,[EBP + 0xfffffc9c]
005febb1  CALL 0x005f5550
005febb6  ADD EAX,dword ptr [EBP + 0xfffffe18]
005febbc  MOV dword ptr [EBP + 0xfffffe18],EAX
005febc2  MOV EAX,[0x015e55e8]
005febc7  MOV EDX,dword ptr [EAX]
005febc9  MOV ECX,dword ptr [0x015e55e8]
005febcf  MOV EAX,dword ptr [EDX + 0x60]
005febd2  CALL EAX
005febd4  PUSH EAX
005febd5  LEA ECX,[EBP + 0xfffffc9c]
005febdb  CALL 0x005eaf00
005febe0  LEA ECX,[EBP + 0xfffffc9c]
005febe6  CALL 0x005f5550
005febeb  ADD EAX,dword ptr [EBP + 0xfffffe18]
005febf1  MOV dword ptr [EBP + 0xfffffe18],EAX
005febf7  MOV ECX,dword ptr [EBP + 0xfffffe18]
005febfd  MOV dword ptr [EBP + 0xfffffc98],ECX
005fec03  MOV byte ptr [EBP + -0x4],0x0
005fec07  LEA ECX,[EBP + 0xfffffc9c]
005fec0d  CALL 0x005eac00
005fec12  MOV dword ptr [EBP + -0x4],0xffffffff
005fec19  LEA ECX,[EBP + 0xfffffe1c]
005fec1f  CALL 0x005ec760
005fec24  MOV EAX,dword ptr [EBP + 0xfffffc98]
005fec2a  MOV ECX,dword ptr [EBP + -0xc]
005fec2d  MOV dword ptr FS:[0x0],ECX
005fec34  POP ECX
005fec35  MOV ECX,dword ptr [EBP + -0x10]
005fec38  XOR ECX,EBP
005fec3a  CALL 0x00686d72
005fec3f  MOV ESP,EBP
005fec41  POP EBP
005fec42  RET 0x8
