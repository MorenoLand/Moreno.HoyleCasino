; FUN_00602be0  00602be0
00602be0  PUSH EBP
00602be1  MOV EBP,ESP
00602be3  SUB ESP,0x14
00602be6  PUSH ESI
00602be7  MOV dword ptr [EBP + -0x14],ECX
00602bea  MOV EAX,dword ptr [EBP + -0x14]
00602bed  CMP dword ptr [EAX + 0x4c],0x0
00602bf1  JZ 0x00602c20
00602bf3  LEA ECX,[EBP + -0x10]
00602bf6  PUSH ECX
00602bf7  MOV ECX,dword ptr [EBP + -0x14]
00602bfa  CALL 0x005ebf80
00602bff  MOV EDX,dword ptr [EBP + -0x14]
00602c02  ADD EDX,0x1b8
00602c08  MOV ECX,dword ptr [EAX]
00602c0a  MOV dword ptr [EDX],ECX
00602c0c  MOV ECX,dword ptr [EAX + 0x4]
00602c0f  MOV dword ptr [EDX + 0x4],ECX
00602c12  MOV ECX,dword ptr [EAX + 0x8]
00602c15  MOV dword ptr [EDX + 0x8],ECX
00602c18  MOV EAX,dword ptr [EAX + 0xc]
00602c1b  MOV dword ptr [EDX + 0xc],EAX
00602c1e  JMP 0x00602c5c
00602c20  MOV ECX,dword ptr [EBP + -0x14]
00602c23  MOV dword ptr [ECX + 0x1b8],0x0
00602c2d  MOV ECX,dword ptr [EBP + -0x14]
00602c30  CALL 0x005f5550
00602c35  MOV EDX,dword ptr [EBP + -0x14]
00602c38  MOV dword ptr [EDX + 0x1c0],EAX
00602c3e  MOV EAX,dword ptr [EBP + -0x14]
00602c41  MOV dword ptr [EAX + 0x1bc],0x0
00602c4b  MOV ECX,dword ptr [EBP + -0x14]
00602c4e  CALL 0x005f5590
00602c53  MOV ECX,dword ptr [EBP + -0x14]
00602c56  MOV dword ptr [ECX + 0x1c4],EAX
00602c5c  MOV EDX,dword ptr [EBP + -0x14]
00602c5f  MOV EAX,dword ptr [EBP + -0x14]
00602c62  MOV ECX,dword ptr [EDX + 0x1c0]
00602c68  SUB ECX,dword ptr [EAX + 0x1b8]
00602c6e  ADD ECX,0x1
00602c71  PUSH ECX
00602c72  MOV EDX,dword ptr [EBP + -0x14]
00602c75  MOV ECX,dword ptr [EDX + 0x190]
00602c7b  CALL 0x005ecc60
00602c80  MOV EAX,dword ptr [EBP + -0x14]
00602c83  MOV ECX,dword ptr [EBP + -0x14]
00602c86  MOV EDX,dword ptr [EAX + 0x1c4]
00602c8c  SUB EDX,dword ptr [ECX + 0x1bc]
00602c92  ADD EDX,0x1
00602c95  PUSH EDX
00602c96  MOV EAX,dword ptr [EBP + -0x14]
00602c99  MOV ECX,dword ptr [EAX + 0x190]
00602c9f  CALL 0x005eccb0
00602ca4  MOV ECX,dword ptr [EBP + -0x14]
00602ca7  MOV EDX,dword ptr [ECX]
00602ca9  MOV ECX,dword ptr [EBP + -0x14]
00602cac  MOV EAX,dword ptr [EDX + 0x54]
00602caf  CALL EAX
00602cb1  MOV ESI,EAX
00602cb3  MOV ECX,dword ptr [EBP + -0x14]
00602cb6  ADD ESI,dword ptr [ECX + 0x1bc]
00602cbc  MOV ECX,dword ptr [EBP + -0x14]
00602cbf  CALL 0x005eb4b0
00602cc4  ADD ESI,EAX
00602cc6  PUSH ESI
00602cc7  MOV EDX,dword ptr [EBP + -0x14]
00602cca  MOV EAX,dword ptr [EDX]
00602ccc  MOV ECX,dword ptr [EBP + -0x14]
00602ccf  MOV EDX,dword ptr [EAX + 0x4c]
00602cd2  CALL EDX
00602cd4  MOV ESI,EAX
00602cd6  MOV EAX,dword ptr [EBP + -0x14]
00602cd9  ADD ESI,dword ptr [EAX + 0x1b8]
00602cdf  MOV ECX,dword ptr [EBP + -0x14]
00602ce2  CALL 0x005eb470
00602ce7  ADD ESI,EAX
00602ce9  PUSH ESI
00602cea  MOV ECX,dword ptr [EBP + -0x14]
00602ced  MOV EDX,dword ptr [ECX + 0x190]
00602cf3  MOV EAX,dword ptr [EBP + -0x14]
00602cf6  MOV ECX,dword ptr [EAX + 0x190]
00602cfc  MOV EDX,dword ptr [EDX]
00602cfe  MOV EAX,dword ptr [EDX + 0x44]
00602d01  CALL EAX
00602d03  POP ESI
00602d04  MOV ESP,EBP
00602d06  POP EBP
00602d07  RET
