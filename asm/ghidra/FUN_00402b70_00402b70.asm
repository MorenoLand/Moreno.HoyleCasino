; FUN_00402b70  00402b70
00402b70  PUSH EBP
00402b71  MOV EBP,ESP
00402b73  PUSH -0x1
00402b75  PUSH 0x69d6a8
00402b7a  MOV EAX,FS:[0x0]
00402b80  PUSH EAX
00402b81  SUB ESP,0x10
00402b84  MOV EAX,[0x00781870]
00402b89  XOR EAX,EBP
00402b8b  PUSH EAX
00402b8c  LEA EAX,[EBP + -0xc]
00402b8f  MOV FS:[0x0],EAX
00402b95  MOV dword ptr [EBP + -0x18],ECX
00402b98  MOV EAX,dword ptr [EBP + -0x18]
00402b9b  MOV dword ptr [EAX],0x6b28fc
00402ba1  MOV dword ptr [EBP + -0x4],0x0
00402ba8  MOV ECX,dword ptr [EBP + -0x18]
00402bab  MOV EDX,dword ptr [ECX + 0xae4]
00402bb1  MOV dword ptr [EBP + -0x14],EDX
00402bb4  MOV EAX,dword ptr [EBP + -0x14]
00402bb7  MOV dword ptr [EBP + -0x10],EAX
00402bba  CMP dword ptr [EBP + -0x10],0x0
00402bbe  JZ 0x00402bd3
00402bc0  PUSH 0x1
00402bc2  MOV ECX,dword ptr [EBP + -0x10]
00402bc5  MOV EDX,dword ptr [ECX]
00402bc7  MOV ECX,dword ptr [EBP + -0x10]
00402bca  MOV EAX,dword ptr [EDX]
00402bcc  CALL EAX
00402bce  MOV dword ptr [EBP + -0x1c],EAX
00402bd1  JMP 0x00402bda
00402bd3  MOV dword ptr [EBP + -0x1c],0x0
00402bda  MOV dword ptr [EBP + -0x4],0xffffffff
00402be1  MOV ECX,dword ptr [EBP + -0x18]
00402be4  CALL 0x005cc230
00402be9  MOV ECX,dword ptr [EBP + -0xc]
00402bec  MOV dword ptr FS:[0x0],ECX
00402bf3  POP ECX
00402bf4  MOV ESP,EBP
00402bf6  POP EBP
00402bf7  RET
