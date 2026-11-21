; FUN_00570ad0  00570ad0
00570ad0  PUSH EBP
00570ad1  MOV EBP,ESP
00570ad3  PUSH ECX
00570ad4  MOV dword ptr [EBP + -0x4],ECX
00570ad7  PUSH 0x0
00570ad9  MOV ECX,dword ptr [EBP + -0x4]
00570adc  CALL 0x005fc0d0
00570ae1  MOV EAX,dword ptr [EBP + -0x4]
00570ae4  MOV dword ptr [EAX],0x6ca638
00570aea  MOV ECX,dword ptr [EBP + -0x4]
00570aed  MOV EDX,dword ptr [EBP + 0x8]
00570af0  MOV dword ptr [ECX + 0x20],EDX
00570af3  MOV EAX,dword ptr [EBP + -0x4]
00570af6  MOV ECX,dword ptr [EBP + 0xc]
00570af9  MOV dword ptr [EAX + 0x30],ECX
00570afc  MOV EDX,dword ptr [EBP + -0x4]
00570aff  MOV dword ptr [EDX + 0x24],0x1
00570b06  CALL dword ptr [0x006b20bc]
00570b0c  MOV ECX,dword ptr [EBP + -0x4]
00570b0f  MOV dword ptr [ECX + 0x28],EAX
00570b12  MOV EDX,dword ptr [EBP + -0x4]
00570b15  MOV EAX,dword ptr [EDX + 0x30]
00570b18  MOV ECX,dword ptr [EBP + -0x4]
00570b1b  MOV EDX,dword ptr [ECX + 0x20]
00570b1e  CMP EDX,dword ptr [EAX + 0x188]
00570b24  JGE 0x00570b2f
00570b26  MOV EAX,dword ptr [EBP + -0x4]
00570b29  MOV byte ptr [EAX + 0x2c],0x0
00570b2d  JMP 0x00570b36
00570b2f  MOV ECX,dword ptr [EBP + -0x4]
00570b32  MOV byte ptr [ECX + 0x2c],0x1
00570b36  MOV EAX,dword ptr [EBP + -0x4]
00570b39  MOV ESP,EBP
00570b3b  POP EBP
00570b3c  RET 0x8
