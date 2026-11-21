; FUN_00561f20  00561f20
00561f20  PUSH EBP
00561f21  MOV EBP,ESP
00561f23  SUB ESP,0x24
00561f26  MOV dword ptr [EBP + -0x24],ECX
00561f29  MOV dword ptr [EBP + -0x14],0x7b
00561f30  MOV dword ptr [EBP + -0x10],0xb6
00561f37  MOV dword ptr [EBP + -0xc],0xf1
00561f3e  MOV dword ptr [EBP + -0x8],0x12c
00561f45  MOV dword ptr [EBP + -0x4],0x167
00561f4c  MOV dword ptr [EBP + -0x20],0x0
00561f53  JMP 0x00561f5e
00561f55  MOV EAX,dword ptr [EBP + -0x20]
00561f58  ADD EAX,0x1
00561f5b  MOV dword ptr [EBP + -0x20],EAX
00561f5e  CMP dword ptr [EBP + -0x20],0x5
00561f62  JGE 0x00562001
00561f68  MOV ECX,dword ptr [EBP + -0x20]
00561f6b  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x14]
00561f6f  MOV dword ptr [EBP + -0x1c],EDX
00561f72  MOV dword ptr [EBP + -0x18],0x146
00561f79  MOV EAX,dword ptr [EBP + -0x18]
00561f7c  PUSH EAX
00561f7d  MOV ECX,dword ptr [EBP + -0x1c]
00561f80  PUSH ECX
00561f81  MOV EDX,dword ptr [EBP + -0x20]
00561f84  MOV EAX,dword ptr [EBP + -0x24]
00561f87  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4c]
00561f8b  MOV EDX,dword ptr [EBP + -0x20]
00561f8e  MOV EAX,dword ptr [EBP + -0x24]
00561f91  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4c]
00561f95  MOV EAX,dword ptr [ECX]
00561f97  MOV ECX,EDX
00561f99  MOV EDX,dword ptr [EAX + 0x44]
00561f9c  CALL EDX
00561f9e  MOV EAX,dword ptr [EBP + -0x20]
00561fa1  MOV ECX,dword ptr [EBP + -0x24]
00561fa4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
00561fa8  MOV AX,word ptr [EDX + 0x190]
00561faf  PUSH EAX
00561fb0  MOV ECX,dword ptr [0x0079343c]
00561fb6  CALL 0x00568840
00561fbb  MOVZX ECX,AL
00561fbe  TEST ECX,ECX
00561fc0  JZ 0x00561fe1
00561fc2  MOV EDX,dword ptr [EBP + -0x20]
00561fc5  MOV EAX,dword ptr [EBP + -0x24]
00561fc8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4c]
00561fcc  MOV EDX,dword ptr [EBP + -0x20]
00561fcf  MOV EAX,dword ptr [EBP + -0x24]
00561fd2  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x4c]
00561fd6  MOV EAX,dword ptr [ECX]
00561fd8  MOV ECX,EDX
00561fda  MOV EDX,dword ptr [EAX + 0x74]
00561fdd  CALL EDX
00561fdf  JMP 0x00561ffc
00561fe1  MOV EAX,dword ptr [EBP + -0x20]
00561fe4  MOV ECX,dword ptr [EBP + -0x24]
00561fe7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4c]
00561feb  MOV EAX,dword ptr [EBP + -0x20]
00561fee  MOV ECX,dword ptr [EBP + -0x24]
00561ff1  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4c]
00561ff5  MOV EDX,dword ptr [EDX]
00561ff7  MOV EAX,dword ptr [EDX + 0x70]
00561ffa  CALL EAX
00561ffc  JMP 0x00561f55
00562001  MOV ESP,EBP
00562003  POP EBP
00562004  RET
