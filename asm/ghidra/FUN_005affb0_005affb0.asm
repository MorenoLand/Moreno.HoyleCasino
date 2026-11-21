; FUN_005affb0  005affb0
005affb0  PUSH EBP
005affb1  MOV EBP,ESP
005affb3  SUB ESP,0x2c
005affb6  MOV dword ptr [EBP + -0x2c],ECX
005affb9  PUSH 0x0
005affbb  PUSH 0x0
005affbd  CALL 0x0064c8a0
005affc2  ADD ESP,0x8
005affc5  MOV dword ptr [EBP + -0x8],EAX
005affc8  MOV dword ptr [EBP + -0x4],EDX
005affcb  MOV EAX,dword ptr [EBP + 0xc]
005affce  MOV ECX,dword ptr [EBP + -0x8]
005affd1  MOV dword ptr [EAX],ECX
005affd3  MOV EDX,dword ptr [EBP + -0x4]
005affd6  MOV dword ptr [EAX + 0x4],EDX
005affd9  MOV EAX,dword ptr [EBP + 0x8]
005affdc  PUSH EAX
005affdd  CALL 0x005dcb00
005affe2  ADD ESP,0x4
005affe5  MOV dword ptr [EBP + -0x24],EAX
005affe8  MOV ECX,dword ptr [EBP + -0x24]
005affeb  MOV DL,byte ptr [ECX + 0x4a2]
005afff1  MOV byte ptr [EBP + -0x25],DL
005afff4  MOVZX EAX,byte ptr [EBP + -0x25]
005afff8  TEST EAX,EAX
005afffa  JZ 0x005afffe
005afffc  JMP 0x005b0057
005afffe  MOV ECX,dword ptr [EBP + 0x8]
005b0001  PUSH ECX
005b0002  LEA EDX,[EBP + -0x18]
005b0005  PUSH EDX
005b0006  MOV EAX,dword ptr [EBP + 0x8]
005b0009  MOV ECX,dword ptr [0x00793604]
005b000f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x634]
005b0016  CALL 0x005cb880
005b001b  MOV EDX,dword ptr [EAX + 0x4]
005b001e  PUSH EDX
005b001f  MOV EAX,dword ptr [EAX]
005b0021  PUSH EAX
005b0022  LEA ECX,[EBP + -0x20]
005b0025  PUSH ECX
005b0026  MOV EDX,dword ptr [EBP + 0x8]
005b0029  PUSH EDX
005b002a  LEA EAX,[EBP + -0x10]
005b002d  PUSH EAX
005b002e  MOV ECX,dword ptr [EBP + 0x8]
005b0031  MOV EDX,dword ptr [0x00793604]
005b0037  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x580]
005b003e  CALL 0x005cb880
005b0043  MOV ECX,EAX
005b0045  CALL 0x0064c5c0
005b004a  MOV ECX,dword ptr [EAX]
005b004c  MOV EDX,dword ptr [EAX + 0x4]
005b004f  MOV EAX,dword ptr [EBP + 0xc]
005b0052  MOV dword ptr [EAX],ECX
005b0054  MOV dword ptr [EAX + 0x4],EDX
005b0057  MOV ESP,EBP
005b0059  POP EBP
005b005a  RET 0x8
