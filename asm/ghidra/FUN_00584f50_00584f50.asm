; FUN_00584f50  00584f50
00584f50  PUSH EBP
00584f51  MOV EBP,ESP
00584f53  PUSH ECX
00584f54  MOV dword ptr [EBP + -0x4],ECX
00584f57  MOV ECX,dword ptr [EBP + -0x4]
00584f5a  CALL 0x005f6270
00584f5f  MOV EAX,dword ptr [EBP + -0x4]
00584f62  MOV ECX,dword ptr [EAX + 0x5c]
00584f65  MOV EDX,dword ptr [EBP + -0x4]
00584f68  MOV EAX,dword ptr [EDX + 0x5c]
00584f6b  MOV EDX,dword ptr [ECX]
00584f6d  MOV ECX,EAX
00584f6f  MOV EAX,dword ptr [EDX + 0x74]
00584f72  CALL EAX
00584f74  MOV ECX,dword ptr [EBP + -0x4]
00584f77  MOV EDX,dword ptr [ECX + 0x60]
00584f7a  MOV EAX,dword ptr [EBP + -0x4]
00584f7d  MOV ECX,dword ptr [EAX + 0x60]
00584f80  MOV EDX,dword ptr [EDX]
00584f82  MOV EAX,dword ptr [EDX + 0x74]
00584f85  CALL EAX
00584f87  MOV ECX,dword ptr [EBP + -0x4]
00584f8a  MOVZX EDX,byte ptr [ECX + 0x6c]
00584f8e  TEST EDX,EDX
00584f90  JZ 0x00584fa9
00584f92  MOV EAX,dword ptr [EBP + -0x4]
00584f95  MOV ECX,dword ptr [EAX + 0x64]
00584f98  MOV EDX,dword ptr [EBP + -0x4]
00584f9b  MOV EAX,dword ptr [EDX + 0x64]
00584f9e  MOV EDX,dword ptr [ECX]
00584fa0  MOV ECX,EAX
00584fa2  MOV EAX,dword ptr [EDX + 0x74]
00584fa5  CALL EAX
00584fa7  JMP 0x00584fbc
00584fa9  MOV ECX,dword ptr [EBP + -0x4]
00584fac  MOV EDX,dword ptr [ECX + 0x64]
00584faf  MOV EAX,dword ptr [EBP + -0x4]
00584fb2  MOV ECX,dword ptr [EAX + 0x64]
00584fb5  MOV EDX,dword ptr [EDX]
00584fb7  MOV EAX,dword ptr [EDX + 0x70]
00584fba  CALL EAX
00584fbc  MOV ESP,EBP
00584fbe  POP EBP
00584fbf  RET
