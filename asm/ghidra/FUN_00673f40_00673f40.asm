; FUN_00673f40  00673f40
00673f40  PUSH EBP
00673f41  MOV EBP,ESP
00673f43  SUB ESP,0x24
00673f46  MOV dword ptr [EBP + -0x24],ECX
00673f49  MOV EAX,dword ptr [EBP + -0x24]
00673f4c  MOVZX ECX,byte ptr [EAX + 0x24]
00673f50  TEST ECX,ECX
00673f52  JNZ 0x00673fc6
00673f54  MOV ECX,dword ptr [EBP + -0x24]
00673f57  CALL 0x005f5420
00673f5c  MOV EDX,dword ptr [EBP + -0x24]
00673f5f  MOV EAX,dword ptr [EDX + 0x18]
00673f62  MOV dword ptr [EBP + -0x20],EAX
00673f65  MOV ECX,dword ptr [EBP + -0x24]
00673f68  MOV EDX,dword ptr [ECX + 0x1c]
00673f6b  MOV dword ptr [EBP + -0x1c],EDX
00673f6e  MOV EAX,dword ptr [EBP + -0x24]
00673f71  MOV ECX,dword ptr [EAX + 0x10]
00673f74  MOV dword ptr [EBP + -0x18],ECX
00673f77  MOV EDX,dword ptr [EBP + -0x24]
00673f7a  MOV EAX,dword ptr [EDX + 0x14]
00673f7d  MOV dword ptr [EBP + -0x14],EAX
00673f80  MOV ECX,dword ptr [EBP + -0x14]
00673f83  MOV dword ptr [EBP + -0x10],ECX
00673f86  MOV EDX,dword ptr [EBP + -0x18]
00673f89  MOV dword ptr [EBP + -0xc],EDX
00673f8c  MOV EAX,dword ptr [EBP + -0x1c]
00673f8f  MOV dword ptr [EBP + -0x8],EAX
00673f92  MOV ECX,dword ptr [EBP + -0x20]
00673f95  MOV dword ptr [EBP + -0x4],ECX
00673f98  LEA EDX,[EBP + -0x10]
00673f9b  PUSH EDX
00673f9c  MOV EAX,[0x007960d8]
00673fa1  MOV ECX,dword ptr [EAX + 0x10]
00673fa4  MOV EDX,dword ptr [0x007960d8]
00673faa  MOV EAX,dword ptr [EDX + 0x10]
00673fad  MOV EDX,dword ptr [ECX]
00673faf  MOV ECX,EAX
00673fb1  MOV EAX,dword ptr [EDX + 0x14]
00673fb4  CALL EAX
00673fb6  MOV ECX,dword ptr [EBP + -0x24]
00673fb9  MOV EDX,dword ptr [ECX]
00673fbb  MOV ECX,dword ptr [EBP + -0x24]
00673fbe  MOV EAX,dword ptr [EDX + 0xac]
00673fc4  CALL EAX
00673fc6  MOV ESP,EBP
00673fc8  POP EBP
00673fc9  RET
