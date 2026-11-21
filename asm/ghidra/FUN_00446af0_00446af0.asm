; FUN_00446af0  00446af0
00446af0  PUSH EBP
00446af1  MOV EBP,ESP
00446af3  SUB ESP,0x8
00446af6  MOV dword ptr [EBP + -0x8],ECX
00446af9  MOV ECX,dword ptr [EBP + -0x8]
00446afc  CALL 0x005e9e20
00446b01  MOV EAX,dword ptr [EBP + -0x8]
00446b04  MOV dword ptr [EAX],0x6b8a6c
00446b0a  MOV dword ptr [EBP + -0x4],0x0
00446b11  JMP 0x00446b1c
00446b13  MOV ECX,dword ptr [EBP + -0x4]
00446b16  ADD ECX,0x1
00446b19  MOV dword ptr [EBP + -0x4],ECX
00446b1c  CMP dword ptr [EBP + -0x4],0x4
00446b20  JGE 0x00446b40
00446b22  MOV EDX,dword ptr [EBP + -0x4]
00446b25  MOV EAX,dword ptr [EBP + -0x8]
00446b28  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00446b30  MOV ECX,dword ptr [EBP + -0x4]
00446b33  MOV EDX,dword ptr [EBP + -0x8]
00446b36  MOV dword ptr [EDX + ECX*0x4 + 0x54],0x0
00446b3e  JMP 0x00446b13
00446b40  MOV dword ptr [EBP + -0x4],0x0
00446b47  JMP 0x00446b52
00446b49  MOV EAX,dword ptr [EBP + -0x4]
00446b4c  ADD EAX,0x1
00446b4f  MOV dword ptr [EBP + -0x4],EAX
00446b52  CMP dword ptr [EBP + -0x4],0xc
00446b56  JGE 0x00446b68
00446b58  MOV ECX,dword ptr [EBP + -0x4]
00446b5b  MOV EDX,dword ptr [EBP + -0x8]
00446b5e  MOV dword ptr [EDX + ECX*0x4 + 0x14],0x0
00446b66  JMP 0x00446b49
00446b68  MOV dword ptr [EBP + -0x4],0x0
00446b6f  JMP 0x00446b7a
00446b71  MOV EAX,dword ptr [EBP + -0x4]
00446b74  ADD EAX,0x1
00446b77  MOV dword ptr [EBP + -0x4],EAX
00446b7a  CMP dword ptr [EBP + -0x4],0x2
00446b7e  JGE 0x00446b90
00446b80  MOV ECX,dword ptr [EBP + -0x4]
00446b83  MOV EDX,dword ptr [EBP + -0x8]
00446b86  MOV dword ptr [EDX + ECX*0x4 + 0x44],0x0
00446b8e  JMP 0x00446b71
00446b90  MOV EAX,dword ptr [EBP + -0x8]
00446b93  MOV dword ptr [EAX + 0x4c],0x0
00446b9a  MOV ECX,dword ptr [EBP + -0x8]
00446b9d  MOV dword ptr [ECX + 0x64],0x0
00446ba4  MOV EDX,dword ptr [EBP + -0x8]
00446ba7  MOV dword ptr [EDX + 0x68],0x0
00446bae  MOV EAX,dword ptr [EBP + -0x8]
00446bb1  MOV dword ptr [EAX + 0x6c],0x0
00446bb8  MOV ECX,dword ptr [EBP + -0x8]
00446bbb  MOV dword ptr [ECX + 0x50],0x0
00446bc2  MOV EAX,dword ptr [EBP + -0x8]
00446bc5  MOV ESP,EBP
00446bc7  POP EBP
00446bc8  RET
