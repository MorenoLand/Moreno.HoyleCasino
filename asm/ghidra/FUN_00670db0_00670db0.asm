; FUN_00670db0  00670db0
00670db0  PUSH EBP
00670db1  MOV EBP,ESP
00670db3  PUSH ECX
00670db4  MOV dword ptr [EBP + -0x4],ECX
00670db7  MOV ECX,dword ptr [EBP + -0x4]
00670dba  CALL 0x005eb5a0
00670dbf  MOV EAX,dword ptr [EBP + -0x4]
00670dc2  MOV ECX,dword ptr [EAX + 0x188]
00670dc8  MOV EDX,dword ptr [EBP + -0x4]
00670dcb  MOV EAX,dword ptr [EDX + 0x188]
00670dd1  MOV EDX,dword ptr [ECX]
00670dd3  MOV ECX,EAX
00670dd5  MOV EAX,dword ptr [EDX + 0x70]
00670dd8  CALL EAX
00670dda  MOV ECX,dword ptr [EBP + -0x4]
00670ddd  MOV EDX,dword ptr [ECX + 0x190]
00670de3  MOV EAX,dword ptr [EBP + -0x4]
00670de6  MOV ECX,dword ptr [EAX + 0x190]
00670dec  MOV EDX,dword ptr [EDX]
00670dee  MOV EAX,dword ptr [EDX + 0x70]
00670df1  CALL EAX
00670df3  MOV ECX,dword ptr [EBP + -0x4]
00670df6  MOV EDX,dword ptr [ECX + 0x18c]
00670dfc  MOV EAX,dword ptr [EBP + -0x4]
00670dff  MOV ECX,dword ptr [EAX + 0x18c]
00670e05  MOV EDX,dword ptr [EDX]
00670e07  MOV EAX,dword ptr [EDX + 0x70]
00670e0a  CALL EAX
00670e0c  MOV ECX,dword ptr [EBP + -0x4]
00670e0f  MOV EDX,dword ptr [ECX + 0x194]
00670e15  MOV EAX,dword ptr [EBP + -0x4]
00670e18  MOV ECX,dword ptr [EAX + 0x194]
00670e1e  MOV EDX,dword ptr [EDX]
00670e20  MOV EAX,dword ptr [EDX + 0x70]
00670e23  CALL EAX
00670e25  MOV ESP,EBP
00670e27  POP EBP
00670e28  RET
