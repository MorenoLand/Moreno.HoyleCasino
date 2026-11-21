; FUN_00544fb0  00544fb0
00544fb0  PUSH EBP
00544fb1  MOV EBP,ESP
00544fb3  PUSH ECX
00544fb4  MOV dword ptr [EBP + -0x4],ECX
00544fb7  MOV EAX,dword ptr [EBP + 0xc]
00544fba  IMUL EAX,EAX,0x18
00544fbd  MOV ECX,dword ptr [EBP + -0x4]
00544fc0  LEA EDX,[ECX + EAX*0x1 + 0x44]
00544fc4  MOV EAX,dword ptr [EBP + 0x10]
00544fc7  MOV ECX,dword ptr [EDX + EAX*0x4]
00544fca  MOV DX,word ptr [EBP + 0x8]
00544fce  MOV word ptr [ECX + 0x190],DX
00544fd5  MOV EAX,dword ptr [EBP + 0xc]
00544fd8  IMUL EAX,EAX,0x18
00544fdb  MOV ECX,dword ptr [EBP + -0x4]
00544fde  LEA EDX,[ECX + EAX*0x1 + 0x44]
00544fe2  MOV EAX,dword ptr [EBP + 0x10]
00544fe5  MOV ECX,dword ptr [EDX + EAX*0x4]
00544fe8  MOV EDX,dword ptr [EBP + 0xc]
00544feb  IMUL EDX,EDX,0x18
00544fee  MOV EAX,dword ptr [EBP + -0x4]
00544ff1  LEA EDX,[EAX + EDX*0x1 + 0x44]
00544ff5  MOV EAX,dword ptr [EBP + 0x10]
00544ff8  MOV EDX,dword ptr [EDX + EAX*0x4]
00544ffb  MOV EAX,dword ptr [ECX]
00544ffd  MOV ECX,EDX
00544fff  MOV EDX,dword ptr [EAX + 0x74]
00545002  CALL EDX
00545004  MOV ESP,EBP
00545006  POP EBP
00545007  RET 0xc
