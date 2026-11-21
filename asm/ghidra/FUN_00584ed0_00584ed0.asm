; FUN_00584ed0  00584ed0
00584ed0  PUSH EBP
00584ed1  MOV EBP,ESP
00584ed3  PUSH ECX
00584ed4  MOV dword ptr [EBP + -0x4],ECX
00584ed7  MOV EAX,dword ptr [EBP + -0x4]
00584eda  MOV ECX,dword ptr [EBP + 0x8]
00584edd  MOV dword ptr [EAX + 0x78],ECX
00584ee0  MOV EDX,dword ptr [EBP + -0x4]
00584ee3  MOV EAX,dword ptr [EBP + 0xc]
00584ee6  MOV dword ptr [EDX + 0x7c],EAX
00584ee9  MOV ECX,dword ptr [EBP + -0x4]
00584eec  MOV EDX,dword ptr [EBP + 0x10]
00584eef  MOV dword ptr [ECX + 0x80],EDX
00584ef5  MOV EAX,dword ptr [EBP + -0x4]
00584ef8  MOV ECX,dword ptr [EAX + 0x78]
00584efb  PUSH ECX
00584efc  MOV EDX,dword ptr [EBP + -0x4]
00584eff  MOV EAX,dword ptr [EDX + 0x5c]
00584f02  MOV ECX,dword ptr [EBP + -0x4]
00584f05  MOV ECX,dword ptr [ECX + 0x5c]
00584f08  MOV EDX,dword ptr [EAX]
00584f0a  MOV EAX,dword ptr [EDX + 0xc8]
00584f10  CALL EAX
00584f12  MOV ECX,dword ptr [EBP + -0x4]
00584f15  MOV EDX,dword ptr [ECX + 0x7c]
00584f18  PUSH EDX
00584f19  MOV EAX,dword ptr [EBP + -0x4]
00584f1c  MOV ECX,dword ptr [EAX + 0x60]
00584f1f  MOV EDX,dword ptr [EBP + -0x4]
00584f22  MOV EAX,dword ptr [EDX + 0x60]
00584f25  MOV EDX,dword ptr [ECX]
00584f27  MOV ECX,EAX
00584f29  MOV EAX,dword ptr [EDX + 0xc8]
00584f2f  CALL EAX
00584f31  MOV ECX,dword ptr [EBP + -0x4]
00584f34  MOV EDX,dword ptr [ECX + 0x80]
00584f3a  PUSH EDX
00584f3b  MOV EAX,dword ptr [EBP + -0x4]
00584f3e  MOV ECX,dword ptr [EAX + 0x64]
00584f41  CALL 0x005eaf00
00584f46  MOV ESP,EBP
00584f48  POP EBP
00584f49  RET 0xc
