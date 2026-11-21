; FUN_00537de0  00537de0
00537de0  PUSH EBP
00537de1  MOV EBP,ESP
00537de3  SUB ESP,0x8
00537de6  MOV dword ptr [EBP + -0x8],ECX
00537de9  MOV dword ptr [EBP + -0x4],0x0
00537df0  MOV EAX,dword ptr [EBP + 0x8]
00537df3  CMP dword ptr [EAX],0x64
00537df6  JZ 0x00537e01
00537df8  MOV ECX,dword ptr [EBP + -0x4]
00537dfb  ADD ECX,0x1
00537dfe  MOV dword ptr [EBP + -0x4],ECX
00537e01  MOV EDX,dword ptr [EBP + 0x8]
00537e04  CMP dword ptr [EDX + 0x4],0x64
00537e08  JZ 0x00537e13
00537e0a  MOV EAX,dword ptr [EBP + -0x4]
00537e0d  ADD EAX,0x1
00537e10  MOV dword ptr [EBP + -0x4],EAX
00537e13  MOV ECX,dword ptr [EBP + 0x8]
00537e16  CMP dword ptr [ECX + 0x8],0x64
00537e1a  JZ 0x00537e25
00537e1c  MOV EDX,dword ptr [EBP + -0x4]
00537e1f  ADD EDX,0x1
00537e22  MOV dword ptr [EBP + -0x4],EDX
00537e25  MOV EAX,dword ptr [EBP + 0x8]
00537e28  CMP dword ptr [EAX + 0xc],0x64
00537e2c  JZ 0x00537e37
00537e2e  MOV ECX,dword ptr [EBP + -0x4]
00537e31  ADD ECX,0x1
00537e34  MOV dword ptr [EBP + -0x4],ECX
00537e37  MOV EDX,dword ptr [EBP + 0x8]
00537e3a  CMP dword ptr [EDX + 0x10],0x64
00537e3e  JZ 0x00537e49
00537e40  MOV EAX,dword ptr [EBP + -0x4]
00537e43  ADD EAX,0x1
00537e46  MOV dword ptr [EBP + -0x4],EAX
00537e49  MOV EAX,dword ptr [EBP + -0x4]
00537e4c  MOV ESP,EBP
00537e4e  POP EBP
00537e4f  RET 0x4
