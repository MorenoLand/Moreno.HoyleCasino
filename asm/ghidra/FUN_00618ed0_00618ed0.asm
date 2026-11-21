; FUN_00618ed0  00618ed0
00618ed0  PUSH EBP
00618ed1  MOV EBP,ESP
00618ed3  SUB ESP,0xd8
00618ed9  PUSH EBX
00618eda  PUSH ESI
00618edb  PUSH EDI
00618edc  MOV dword ptr [EBP + -0xc],0x4
00618ee3  MOV EAX,dword ptr [EBP + 0xc]
00618ee6  MOVZX ECX,byte ptr [EAX]
00618ee9  MOV dword ptr [EBP + -0x20],ECX
00618eec  MOV EDX,dword ptr [EBP + 0xc]
00618eef  MOV AX,word ptr [EDX + 0x1]
00618ef3  MOV word ptr [EBP + -0x28],AX
00618ef7  MOV ECX,dword ptr [EBP + 0xc]
00618efa  ADD ECX,0x3
00618efd  MOV dword ptr [EBP + 0xc],ECX
00618f00  MOVZX EDX,word ptr [EBP + -0x28]
00618f04  CMP dword ptr [EBP + 0x10],EDX
00618f07  JL 0x00618fda
00618f0d  MOVZX EAX,word ptr [EBP + -0x28]
00618f11  TEST EAX,EAX
00618f13  JLE 0x00618fda
00618f19  MOVZX ECX,word ptr [EBP + -0x28]
00618f1d  MOV EDX,dword ptr [EBP + 0x10]
00618f20  SUB EDX,ECX
00618f22  MOV dword ptr [EBP + 0x10],EDX
00618f25  MOV EAX,dword ptr [EBP + -0x20]
00618f28  MOV dword ptr [EBP + 0xffffff30],EAX
00618f2e  MOV ECX,dword ptr [EBP + 0xffffff30]
00618f34  SUB ECX,0x2
00618f37  MOV dword ptr [EBP + 0xffffff30],ECX
00618f3d  CMP dword ptr [EBP + 0xffffff30],0x86
00618f47  JA 0x00618fb8
00618f49  MOV EDX,dword ptr [EBP + 0xffffff30]
00618f4f  MOVZX EAX,byte ptr [EDX + 0x619c18]
00618f56  JMP dword ptr [EAX*0x4 + 0x619bf8]
00618fb8  MOV EAX,dword ptr [EBP + 0xc]
00618fbb  MOVZX ECX,byte ptr [EAX]
00618fbe  MOV dword ptr [EBP + -0x20],ECX
00618fc1  MOV EDX,dword ptr [EBP + 0xc]
00618fc4  MOV AX,word ptr [EDX + 0x1]
00618fc8  MOV word ptr [EBP + -0x28],AX
00618fcc  MOV ECX,dword ptr [EBP + 0xc]
00618fcf  ADD ECX,0x3
00618fd2  MOV dword ptr [EBP + 0xc],ECX
00618fd5  JMP 0x00618f00
00618fda  CMP dword ptr [EBP + 0x14],0x0
00618fde  JLE 0x00619bf1
00618fe4  MOVZX EDX,word ptr [EBP + -0x28]
00618fe8  TEST EDX,EDX
00618fea  JLE 0x00619bf1
00618ff0  MOVZX EAX,word ptr [EBP + -0x28]
00618ff4  SUB EAX,dword ptr [EBP + 0x10]
00618ff7  MOV word ptr [EBP + -0x28],AX
00618ffb  MOV ECX,dword ptr [EBP + -0x20]
00618ffe  MOV dword ptr [EBP + 0xffffff2c],ECX
00619004  MOV EDX,dword ptr [EBP + 0xffffff2c]
0061900a  SUB EDX,0x1
0061900d  MOV dword ptr [EBP + 0xffffff2c],EDX
00619013  CMP dword ptr [EBP + 0xffffff2c],0x87
0061901d  JA 0x00619bbd
00619023  MOV EAX,dword ptr [EBP + 0xffffff2c]
00619029  MOVZX ECX,byte ptr [EAX + 0x619cd4]
00619030  JMP dword ptr [ECX*0x4 + 0x619ca0]
00619bbd  CMP dword ptr [EBP + 0x14],0x0
00619bc1  JZ 0x00619bec
00619bc3  MOVZX EDX,word ptr [EBP + -0x28]
00619bc7  MOV EAX,dword ptr [EBP + 0x14]
00619bca  SUB EAX,EDX
00619bcc  MOV dword ptr [EBP + 0x14],EAX
00619bcf  MOV ECX,dword ptr [EBP + 0xc]
00619bd2  MOVZX EDX,byte ptr [ECX]
00619bd5  MOV dword ptr [EBP + -0x20],EDX
00619bd8  MOV EAX,dword ptr [EBP + 0xc]
00619bdb  MOV CX,word ptr [EAX + 0x1]
00619bdf  MOV word ptr [EBP + -0x28],CX
00619be3  MOV EDX,dword ptr [EBP + 0xc]
00619be6  ADD EDX,0x3
00619be9  MOV dword ptr [EBP + 0xc],EDX
00619bec  JMP 0x00618fda
00619bf1  POP EDI
00619bf2  POP ESI
00619bf3  POP EBX
00619bf4  MOV ESP,EBP
00619bf6  POP EBP
00619bf7  RET
