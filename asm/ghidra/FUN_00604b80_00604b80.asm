; FUN_00604b80  00604b80
00604b80  PUSH EBP
00604b81  MOV EBP,ESP
00604b83  PUSH -0x1
00604b85  PUSH 0x6aab1e
00604b8a  MOV EAX,FS:[0x0]
00604b90  PUSH EAX
00604b91  SUB ESP,0x1c
00604b94  MOV EAX,[0x00781870]
00604b99  XOR EAX,EBP
00604b9b  PUSH EAX
00604b9c  LEA EAX,[EBP + -0xc]
00604b9f  MOV FS:[0x0],EAX
00604ba5  MOV dword ptr [EBP + -0x20],ECX
00604ba8  MOV ECX,dword ptr [EBP + -0x20]
00604bab  CALL 0x005f49d0
00604bb0  MOV dword ptr [EBP + -0x4],0x0
00604bb7  MOV EAX,dword ptr [EBP + -0x20]
00604bba  MOV dword ptr [EAX],0x6d788c
00604bc0  MOV ECX,dword ptr [EBP + -0x20]
00604bc3  MOV dword ptr [ECX + 0x80],0x1
00604bcd  MOV EDX,dword ptr [EBP + -0x20]
00604bd0  MOV byte ptr [EDX + 0x6c],0x1
00604bd4  MOV EAX,dword ptr [EBP + -0x20]
00604bd7  MOV dword ptr [EAX + 0x70],0xffffffff
00604bde  MOV ECX,dword ptr [EBP + -0x20]
00604be1  MOV dword ptr [ECX + 0x74],0xffffffff
00604be8  MOV EDX,dword ptr [EBP + -0x20]
00604beb  MOV dword ptr [EDX + 0x78],0xffffffff
00604bf2  MOV EAX,dword ptr [EBP + -0x20]
00604bf5  MOV dword ptr [EAX + 0x7c],0xffffffff
00604bfc  MOV ECX,dword ptr [EBP + -0x20]
00604bff  MOV dword ptr [ECX + 0x50],0xffffffff
00604c06  MOV EDX,dword ptr [EBP + -0x20]
00604c09  MOV dword ptr [EDX + 0x54],0xffffffff
00604c10  MOV EAX,dword ptr [EBP + -0x20]
00604c13  MOV dword ptr [EAX + 0x58],0xffffffff
00604c1a  PUSH 0x188
00604c1f  CALL 0x00686d82
00604c24  ADD ESP,0x4
00604c27  MOV dword ptr [EBP + -0x14],EAX
00604c2a  MOV byte ptr [EBP + -0x4],0x1
00604c2e  CMP dword ptr [EBP + -0x14],0x0
00604c32  JZ 0x00604c45
00604c34  MOV ECX,dword ptr [EBP + -0x20]
00604c37  PUSH ECX
00604c38  MOV ECX,dword ptr [EBP + -0x14]
00604c3b  CALL 0x00605540
00604c40  MOV dword ptr [EBP + -0x24],EAX
00604c43  JMP 0x00604c4c
00604c45  MOV dword ptr [EBP + -0x24],0x0
00604c4c  MOV EDX,dword ptr [EBP + -0x24]
00604c4f  MOV dword ptr [EBP + -0x10],EDX
00604c52  MOV byte ptr [EBP + -0x4],0x0
00604c56  MOV EAX,dword ptr [EBP + -0x20]
00604c59  MOV ECX,dword ptr [EBP + -0x10]
00604c5c  MOV dword ptr [EAX + 0x48],ECX
00604c5f  PUSH 0x17c
00604c64  CALL 0x00686d82
00604c69  ADD ESP,0x4
00604c6c  MOV dword ptr [EBP + -0x1c],EAX
00604c6f  MOV byte ptr [EBP + -0x4],0x2
00604c73  CMP dword ptr [EBP + -0x1c],0x0
00604c77  JZ 0x00604c8a
00604c79  MOV EDX,dword ptr [EBP + -0x20]
00604c7c  PUSH EDX
00604c7d  MOV ECX,dword ptr [EBP + -0x1c]
00604c80  CALL 0x006058b0
00604c85  MOV dword ptr [EBP + -0x28],EAX
00604c88  JMP 0x00604c91
00604c8a  MOV dword ptr [EBP + -0x28],0x0
00604c91  MOV EAX,dword ptr [EBP + -0x28]
00604c94  MOV dword ptr [EBP + -0x18],EAX
00604c97  MOV byte ptr [EBP + -0x4],0x0
00604c9b  MOV ECX,dword ptr [EBP + -0x20]
00604c9e  MOV EDX,dword ptr [EBP + -0x18]
00604ca1  MOV dword ptr [ECX + 0x4c],EDX
00604ca4  MOV dword ptr [EBP + -0x4],0xffffffff
00604cab  MOV EAX,dword ptr [EBP + -0x20]
00604cae  MOV ECX,dword ptr [EBP + -0xc]
00604cb1  MOV dword ptr FS:[0x0],ECX
00604cb8  POP ECX
00604cb9  MOV ESP,EBP
00604cbb  POP EBP
00604cbc  RET
