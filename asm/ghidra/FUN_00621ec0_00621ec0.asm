; FUN_00621ec0  00621ec0
00621ec0  PUSH EBP
00621ec1  MOV EBP,ESP
00621ec3  SUB ESP,0x10
00621ec6  MOV dword ptr [EBP + -0x8],0x0
00621ecd  MOV dword ptr [EBP + -0xc],0x0
00621ed4  MOV dword ptr [EBP + -0x4],0x0
00621edb  MOV EAX,dword ptr [EBP + 0x8]
00621ede  MOV dword ptr [EBP + -0x10],EAX
00621ee1  JMP 0x00621ef5
00621ee3  MOV ECX,dword ptr [EBP + -0x4]
00621ee6  ADD ECX,0x1
00621ee9  MOV dword ptr [EBP + -0x4],ECX
00621eec  MOV EDX,dword ptr [EBP + -0x10]
00621eef  ADD EDX,0x20
00621ef2  MOV dword ptr [EBP + -0x10],EDX
00621ef5  MOV EAX,dword ptr [EBP + -0x4]
00621ef8  CMP EAX,dword ptr [EBP + 0xc]
00621efb  JGE 0x00621f22
00621efd  MOV ECX,dword ptr [EBP + -0x10]
00621f00  MOV EDX,dword ptr [ECX + 0x1c]
00621f03  CMP EDX,dword ptr [EBP + -0x8]
00621f06  JLE 0x00621f20
00621f08  MOV EAX,dword ptr [EBP + -0x10]
00621f0b  CMP dword ptr [EAX + 0x18],0x0
00621f0f  JLE 0x00621f20
00621f11  MOV ECX,dword ptr [EBP + -0x10]
00621f14  MOV dword ptr [EBP + -0xc],ECX
00621f17  MOV EDX,dword ptr [EBP + -0x10]
00621f1a  MOV EAX,dword ptr [EDX + 0x1c]
00621f1d  MOV dword ptr [EBP + -0x8],EAX
00621f20  JMP 0x00621ee3
00621f22  MOV EAX,dword ptr [EBP + -0xc]
00621f25  MOV ESP,EBP
00621f27  POP EBP
00621f28  RET
