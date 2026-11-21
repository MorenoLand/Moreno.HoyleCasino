; FUN_006817a0  006817a0
006817a0  MOV EDX,dword ptr [ESP + 0x4]
006817a4  XOR ECX,ECX
006817a6  CMP EDX,ECX
006817a8  JZ 0x006817f7
006817aa  MOV EAX,dword ptr [EDX + 0x1c]
006817ad  CMP EAX,ECX
006817af  JZ 0x006817f7
006817b1  MOV dword ptr [EAX + 0x1c],ECX
006817b4  MOV dword ptr [EDX + 0x14],ECX
006817b7  MOV dword ptr [EDX + 0x8],ECX
006817ba  MOV dword ptr [EDX + 0x18],ECX
006817bd  MOV dword ptr [EDX + 0x30],0x1
006817c4  MOV dword ptr [EAX],ECX
006817c6  MOV dword ptr [EAX + 0x4],ECX
006817c9  MOV dword ptr [EAX + 0xc],ECX
006817cc  MOV dword ptr [EAX + 0x20],ECX
006817cf  MOV dword ptr [EAX + 0x28],ECX
006817d2  MOV dword ptr [EAX + 0x2c],ECX
006817d5  MOV dword ptr [EAX + 0x30],ECX
006817d8  MOV dword ptr [EAX + 0x38],ECX
006817db  MOV dword ptr [EAX + 0x3c],ECX
006817de  LEA ECX,[EAX + 0x530]
006817e4  MOV dword ptr [EAX + 0x14],0x8000
006817eb  MOV dword ptr [EAX + 0x6c],ECX
006817ee  MOV dword ptr [EAX + 0x50],ECX
006817f1  MOV dword ptr [EAX + 0x4c],ECX
006817f4  XOR EAX,EAX
006817f6  RET
006817f7  MOV EAX,0xfffffffe
006817fc  RET
