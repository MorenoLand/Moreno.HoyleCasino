; FUN_00613da0  00613da0
00613da0  PUSH EBP
00613da1  MOV EBP,ESP
00613da3  SUB ESP,0x24
00613da6  MOV dword ptr [EBP + -0x20],ECX
00613da9  MOV ECX,dword ptr [EBP + -0x20]
00613dac  ADD ECX,0x60
00613daf  CALL 0x0062ae50
00613db4  TEST EAX,EAX
00613db6  JZ 0x00613e22
00613db8  PUSH 0x0
00613dba  MOV ECX,dword ptr [EBP + -0x20]
00613dbd  ADD ECX,0x60
00613dc0  CALL 0x0062ade0
00613dc5  MOV dword ptr [EBP + -0x4],EAX
00613dc8  MOV EAX,dword ptr [EBP + -0x4]
00613dcb  ADD EAX,0x8
00613dce  MOV ECX,dword ptr [EAX]
00613dd0  MOV dword ptr [EBP + -0x14],ECX
00613dd3  MOV EDX,dword ptr [EAX + 0x4]
00613dd6  MOV dword ptr [EBP + -0x10],EDX
00613dd9  MOV ECX,dword ptr [EAX + 0x8]
00613ddc  MOV dword ptr [EBP + -0xc],ECX
00613ddf  MOV EDX,dword ptr [EAX + 0xc]
00613de2  MOV dword ptr [EBP + -0x8],EDX
00613de5  MOV EAX,dword ptr [EBP + -0x4]
00613de8  PUSH EAX
00613de9  MOV ECX,dword ptr [EBP + -0x20]
00613dec  ADD ECX,0x60
00613def  CALL 0x0062ab60
00613df4  MOV ECX,dword ptr [EBP + -0x4]
00613df7  MOV dword ptr [EBP + -0x1c],ECX
00613dfa  MOV EDX,dword ptr [EBP + -0x1c]
00613dfd  MOV dword ptr [EBP + -0x18],EDX
00613e00  CMP dword ptr [EBP + -0x18],0x0
00613e04  JZ 0x00613e19
00613e06  PUSH 0x1
00613e08  MOV EAX,dword ptr [EBP + -0x18]
00613e0b  MOV EDX,dword ptr [EAX]
00613e0d  MOV ECX,dword ptr [EBP + -0x18]
00613e10  MOV EAX,dword ptr [EDX]
00613e12  CALL EAX
00613e14  MOV dword ptr [EBP + -0x24],EAX
00613e17  JMP 0x00613e20
00613e19  MOV dword ptr [EBP + -0x24],0x0
00613e20  JMP 0x00613da9
00613e22  MOV ESP,EBP
00613e24  POP EBP
00613e25  RET
