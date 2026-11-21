; FUN_00602bb0  00602bb0
00602bb0  PUSH EBP
00602bb1  MOV EBP,ESP
00602bb3  SUB ESP,0x8
00602bb6  MOV dword ptr [EBP + -0x8],ECX
00602bb9  MOV EAX,dword ptr [EBP + -0x8]
00602bbc  CMP dword ptr [EAX + 0x190],0x0
00602bc3  JZ 0x00602bd9
00602bc5  MOV ECX,dword ptr [EBP + -0x8]
00602bc8  MOV EDX,dword ptr [ECX + 0x190]
00602bce  MOV EAX,dword ptr [EDX + 0x60]
00602bd1  MOV dword ptr [EBP + -0x4],EAX
00602bd4  MOV EAX,dword ptr [EBP + -0x4]
00602bd7  JMP 0x00602bdc
00602bd9  OR EAX,0xffffffff
00602bdc  MOV ESP,EBP
00602bde  POP EBP
00602bdf  RET
