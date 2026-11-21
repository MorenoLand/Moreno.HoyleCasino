; FUN_00604ef0  00604ef0
00604ef0  PUSH EBP
00604ef1  MOV EBP,ESP
00604ef3  SUB ESP,0xc
00604ef6  MOV dword ptr [EBP + -0xc],ECX
00604ef9  MOV EAX,dword ptr [EBP + -0xc]
00604efc  MOV ECX,dword ptr [EAX + 0x4c]
00604eff  MOV EDX,dword ptr [EBP + -0xc]
00604f02  MOV EAX,dword ptr [EDX + 0x4c]
00604f05  MOV EDX,dword ptr [ECX]
00604f07  MOV ECX,EAX
00604f09  MOV EAX,dword ptr [EDX + 0x4c]
00604f0c  CALL EAX
00604f0e  MOV ECX,dword ptr [EBP + 0x8]
00604f11  SUB ECX,EAX
00604f13  MOV dword ptr [EBP + -0x8],ECX
00604f16  MOV EDX,dword ptr [EBP + -0xc]
00604f19  MOV EAX,dword ptr [EDX + 0x4c]
00604f1c  MOV ECX,dword ptr [EBP + -0xc]
00604f1f  MOV ECX,dword ptr [ECX + 0x4c]
00604f22  MOV EDX,dword ptr [EAX]
00604f24  MOV EAX,dword ptr [EDX + 0x54]
00604f27  CALL EAX
00604f29  MOV ECX,dword ptr [EBP + 0xc]
00604f2c  SUB ECX,EAX
00604f2e  MOV dword ptr [EBP + -0x4],ECX
00604f31  MOV EDX,dword ptr [EBP + 0xc]
00604f34  PUSH EDX
00604f35  MOV EAX,dword ptr [EBP + 0x8]
00604f38  PUSH EAX
00604f39  MOV ECX,dword ptr [EBP + -0xc]
00604f3c  MOV EDX,dword ptr [ECX + 0x4c]
00604f3f  MOV EAX,dword ptr [EBP + -0xc]
00604f42  MOV ECX,dword ptr [EAX + 0x4c]
00604f45  MOV EDX,dword ptr [EDX]
00604f47  MOV EAX,dword ptr [EDX + 0x44]
00604f4a  CALL EAX
00604f4c  MOV ECX,dword ptr [EBP + -0xc]
00604f4f  MOV EDX,dword ptr [ECX + 0x48]
00604f52  MOV EAX,dword ptr [EBP + -0xc]
00604f55  MOV ECX,dword ptr [EAX + 0x48]
00604f58  MOV EDX,dword ptr [EDX]
00604f5a  MOV EAX,dword ptr [EDX + 0x54]
00604f5d  CALL EAX
00604f5f  ADD EAX,dword ptr [EBP + -0x4]
00604f62  PUSH EAX
00604f63  MOV ECX,dword ptr [EBP + -0xc]
00604f66  MOV EDX,dword ptr [ECX + 0x48]
00604f69  MOV EAX,dword ptr [EBP + -0xc]
00604f6c  MOV ECX,dword ptr [EAX + 0x48]
00604f6f  MOV EDX,dword ptr [EDX]
00604f71  MOV EAX,dword ptr [EDX + 0x4c]
00604f74  CALL EAX
00604f76  ADD EAX,dword ptr [EBP + -0x8]
00604f79  PUSH EAX
00604f7a  MOV ECX,dword ptr [EBP + -0xc]
00604f7d  MOV EDX,dword ptr [ECX + 0x48]
00604f80  MOV EAX,dword ptr [EBP + -0xc]
00604f83  MOV ECX,dword ptr [EAX + 0x48]
00604f86  MOV EDX,dword ptr [EDX]
00604f88  MOV EAX,dword ptr [EDX + 0x44]
00604f8b  CALL EAX
00604f8d  MOV ESP,EBP
00604f8f  POP EBP
00604f90  RET 0x8
