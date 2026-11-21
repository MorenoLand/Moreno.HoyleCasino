; FUN_00627c00  00627c00
00627c00  PUSH EBP
00627c01  MOV EBP,ESP
00627c03  SUB ESP,0x24
00627c06  MOV dword ptr [EBP + -0x24],ECX
00627c09  MOV EAX,dword ptr [EBP + -0x24]
00627c0c  MOV ECX,dword ptr [EBP + -0x24]
00627c0f  MOV EDX,dword ptr [EAX + 0x1c]
00627c12  SUB EDX,dword ptr [ECX + 0x14]
00627c15  MOV EAX,dword ptr [EBP + -0x24]
00627c18  MOV ECX,dword ptr [EAX + 0x14]
00627c1b  LEA EDX,[ECX + EDX*0x1 + 0x1]
00627c1f  MOV dword ptr [EBP + -0x20],EDX
00627c22  MOV EAX,dword ptr [EBP + -0x24]
00627c25  MOV ECX,dword ptr [EBP + -0x24]
00627c28  MOV EDX,dword ptr [EAX + 0x18]
00627c2b  SUB EDX,dword ptr [ECX + 0x10]
00627c2e  MOV EAX,dword ptr [EBP + -0x24]
00627c31  MOV ECX,dword ptr [EAX + 0x10]
00627c34  LEA EDX,[ECX + EDX*0x1 + 0x1]
00627c38  MOV dword ptr [EBP + -0x1c],EDX
00627c3b  MOV EAX,dword ptr [EBP + -0x24]
00627c3e  MOV ECX,dword ptr [EAX + 0x14]
00627c41  MOV dword ptr [EBP + -0x18],ECX
00627c44  MOV EDX,dword ptr [EBP + -0x24]
00627c47  MOV EAX,dword ptr [EDX + 0x10]
00627c4a  MOV dword ptr [EBP + -0x14],EAX
00627c4d  MOV ECX,dword ptr [EBP + -0x14]
00627c50  MOV dword ptr [EBP + -0x10],ECX
00627c53  MOV EDX,dword ptr [EBP + -0x18]
00627c56  MOV dword ptr [EBP + -0xc],EDX
00627c59  MOV EAX,dword ptr [EBP + -0x1c]
00627c5c  MOV dword ptr [EBP + -0x8],EAX
00627c5f  MOV ECX,dword ptr [EBP + -0x20]
00627c62  MOV dword ptr [EBP + -0x4],ECX
00627c65  LEA EDX,[EBP + -0x10]
00627c68  PUSH EDX
00627c69  MOV ECX,dword ptr [EBP + -0x24]
00627c6c  CALL 0x005f5940
00627c71  MOV ESP,EBP
00627c73  POP EBP
00627c74  RET
