; FUN_00622d10  00622d10
00622d10  PUSH EBP
00622d11  MOV EBP,ESP
00622d13  SUB ESP,0x10
00622d16  PUSH 0x1ff0
00622d1b  CALL 0x00686d82
00622d20  ADD ESP,0x4
00622d23  MOV dword ptr [EBP + -0x10],EAX
00622d26  MOV EAX,dword ptr [EBP + -0x10]
00622d29  MOV dword ptr [EBP + -0x8],EAX
00622d2c  MOV ECX,dword ptr [EBP + -0x8]
00622d2f  ADD ECX,0x3fc
00622d35  MOV dword ptr [EBP + -0x8],ECX
00622d38  MOV dword ptr [EBP + -0xc],0x0
00622d3f  MOV dword ptr [EBP + -0x4],0x0
00622d46  JMP 0x00622d5a
00622d48  MOV EDX,dword ptr [EBP + -0x4]
00622d4b  ADD EDX,0x1
00622d4e  MOV dword ptr [EBP + -0x4],EDX
00622d51  MOV EAX,dword ptr [EBP + -0xc]
00622d54  ADD EAX,0x1
00622d57  MOV dword ptr [EBP + -0xc],EAX
00622d5a  CMP dword ptr [EBP + -0x4],0x10
00622d5e  JGE 0x00622d7e
00622d60  MOV ECX,dword ptr [EBP + -0x4]
00622d63  MOV EDX,dword ptr [EBP + -0x8]
00622d66  MOV EAX,dword ptr [EBP + -0xc]
00622d69  MOV dword ptr [EDX + ECX*0x4],EAX
00622d6c  MOV ECX,dword ptr [EBP + -0xc]
00622d6f  NEG ECX
00622d71  MOV EDX,dword ptr [EBP + -0x4]
00622d74  NEG EDX
00622d76  MOV EAX,dword ptr [EBP + -0x8]
00622d79  MOV dword ptr [EAX + EDX*0x4],ECX
00622d7c  JMP 0x00622d48
00622d7e  JMP 0x00622d9c
00622d80  MOV ECX,dword ptr [EBP + -0x4]
00622d83  ADD ECX,0x1
00622d86  MOV dword ptr [EBP + -0x4],ECX
00622d89  MOV EDX,dword ptr [EBP + -0x4]
00622d8c  AND EDX,0x1
00622d8f  NEG EDX
00622d91  SBB EDX,EDX
00622d93  ADD EDX,0x1
00622d96  ADD EDX,dword ptr [EBP + -0xc]
00622d99  MOV dword ptr [EBP + -0xc],EDX
00622d9c  CMP dword ptr [EBP + -0x4],0x30
00622da0  JGE 0x00622dc0
00622da2  MOV EAX,dword ptr [EBP + -0x4]
00622da5  MOV ECX,dword ptr [EBP + -0x8]
00622da8  MOV EDX,dword ptr [EBP + -0xc]
00622dab  MOV dword ptr [ECX + EAX*0x4],EDX
00622dae  MOV EAX,dword ptr [EBP + -0xc]
00622db1  NEG EAX
00622db3  MOV ECX,dword ptr [EBP + -0x4]
00622db6  NEG ECX
00622db8  MOV EDX,dword ptr [EBP + -0x8]
00622dbb  MOV dword ptr [EDX + ECX*0x4],EAX
00622dbe  JMP 0x00622d80
00622dc0  JMP 0x00622dcb
00622dc2  MOV EAX,dword ptr [EBP + -0x4]
00622dc5  ADD EAX,0x1
00622dc8  MOV dword ptr [EBP + -0x4],EAX
00622dcb  CMP dword ptr [EBP + -0x4],0xff
00622dd2  JG 0x00622df2
00622dd4  MOV ECX,dword ptr [EBP + -0x4]
00622dd7  MOV EDX,dword ptr [EBP + -0x8]
00622dda  MOV EAX,dword ptr [EBP + -0xc]
00622ddd  MOV dword ptr [EDX + ECX*0x4],EAX
00622de0  MOV ECX,dword ptr [EBP + -0xc]
00622de3  NEG ECX
00622de5  MOV EDX,dword ptr [EBP + -0x4]
00622de8  NEG EDX
00622dea  MOV EAX,dword ptr [EBP + -0x8]
00622ded  MOV dword ptr [EAX + EDX*0x4],ECX
00622df0  JMP 0x00622dc2
00622df2  MOV EAX,dword ptr [EBP + -0x8]
00622df5  MOV ESP,EBP
00622df7  POP EBP
00622df8  RET
