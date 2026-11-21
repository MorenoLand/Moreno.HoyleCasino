; FUN_00470b20  00470b20
00470b20  PUSH EBP
00470b21  MOV EBP,ESP
00470b23  PUSH -0x1
00470b25  PUSH 0x69fd19
00470b2a  MOV EAX,FS:[0x0]
00470b30  PUSH EAX
00470b31  SUB ESP,0x3c4
00470b37  PUSH ESI
00470b38  PUSH EDI
00470b39  MOV EAX,[0x00781870]
00470b3e  XOR EAX,EBP
00470b40  PUSH EAX
00470b41  LEA EAX,[EBP + -0xc]
00470b44  MOV FS:[0x0],EAX
00470b4a  MOV dword ptr [EBP + 0xfffffda4],ECX
00470b50  MOV dword ptr [EBP + 0xfffffda8],0x0
00470b5a  MOV EAX,dword ptr [EBP + 0xfffffda4]
00470b60  MOV ECX,dword ptr [EAX + 0xc]
00470b63  MOV EDX,dword ptr [ECX + 0x4]
00470b66  MOV dword ptr [EBP + -0x10],EDX
00470b69  PUSH 0x0
00470b6b  PUSH 0x0
00470b6d  CALL 0x0064c8a0
00470b72  ADD ESP,0x8
00470b75  MOV dword ptr [EBP + 0xffffff04],EAX
00470b7b  MOV dword ptr [EBP + 0xffffff08],EDX
00470b81  MOV EAX,dword ptr [EBP + 0xffffff04]
00470b87  MOV dword ptr [EBP + -0x1c],EAX
00470b8a  MOV ECX,dword ptr [EBP + 0xffffff08]
00470b90  MOV dword ptr [EBP + -0x18],ECX
00470b93  MOV EDX,dword ptr [EBP + 0x8]
00470b96  PUSH EDX
00470b97  MOV ECX,dword ptr [EBP + 0xfffffda4]
00470b9d  CALL 0x005fc3a0
00470ba2  MOV EAX,dword ptr [EBP + 0xfffffda4]
00470ba8  MOV ECX,dword ptr [EAX + 0x14]
00470bab  MOV dword ptr [EBP + 0xfffffda0],ECX
00470bb1  CMP dword ptr [EBP + 0xfffffda0],0x2a
00470bb8  JA 0x00477253
00470bbe  MOV EDX,dword ptr [EBP + 0xfffffda0]
00470bc4  JMP dword ptr [EDX*0x4 + 0x477268]
