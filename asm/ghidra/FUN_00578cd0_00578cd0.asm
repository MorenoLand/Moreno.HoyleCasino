; FUN_00578cd0  00578cd0
00578cd0  PUSH EBP
00578cd1  MOV EBP,ESP
00578cd3  SUB ESP,0x8
00578cd6  MOV dword ptr [EBP + -0x4],ECX
00578cd9  MOV EAX,dword ptr [EBP + 0x8]
00578cdc  MOV dword ptr [EBP + -0x8],EAX
00578cdf  MOV ECX,dword ptr [EBP + -0x8]
00578ce2  SUB ECX,0x30ef5a
00578ce8  MOV dword ptr [EBP + -0x8],ECX
00578ceb  CMP dword ptr [EBP + -0x8],0x4
00578cef  JA 0x00578d95
00578cf5  MOV EDX,dword ptr [EBP + -0x8]
00578cf8  JMP dword ptr [EDX*0x4 + 0x578dac]
00578d95  MOV ECX,dword ptr [EBP + 0xc]
00578d98  PUSH ECX
00578d99  MOV EDX,dword ptr [EBP + 0x8]
00578d9c  PUSH EDX
00578d9d  MOV ECX,dword ptr [EBP + -0x4]
00578da0  CALL 0x005dc7d0
00578da5  MOV ESP,EBP
00578da7  POP EBP
00578da8  RET 0x8
