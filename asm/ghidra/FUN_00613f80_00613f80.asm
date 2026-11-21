; FUN_00613f80  00613f80
00613f80  PUSH EBP
00613f81  MOV EBP,ESP
00613f83  SUB ESP,0x1c
00613f86  MOV dword ptr [EBP + -0x1c],ECX
00613f89  MOV EAX,dword ptr [EBP + -0x1c]
00613f8c  ADD EAX,0x18
00613f8f  MOV ECX,dword ptr [EAX]
00613f91  MOV dword ptr [EBP + -0x10],ECX
00613f94  MOV EDX,dword ptr [EAX + 0x4]
00613f97  MOV dword ptr [EBP + -0xc],EDX
00613f9a  MOV ECX,dword ptr [EAX + 0x8]
00613f9d  MOV dword ptr [EBP + -0x8],ECX
00613fa0  MOV EDX,dword ptr [EAX + 0xc]
00613fa3  MOV dword ptr [EBP + -0x4],EDX
00613fa6  MOV EAX,dword ptr [EBP + -0x1c]
00613fa9  MOV ECX,dword ptr [EAX + 0x1c]
00613fac  NEG ECX
00613fae  MOV dword ptr [EBP + -0x18],ECX
00613fb1  MOV EDX,dword ptr [EBP + -0x1c]
00613fb4  MOV EAX,dword ptr [EDX + 0x18]
00613fb7  NEG EAX
00613fb9  MOV dword ptr [EBP + -0x14],EAX
00613fbc  MOV ECX,dword ptr [EBP + -0x10]
00613fbf  ADD ECX,dword ptr [EBP + -0x14]
00613fc2  MOV dword ptr [EBP + -0x10],ECX
00613fc5  MOV EDX,dword ptr [EBP + -0xc]
00613fc8  ADD EDX,dword ptr [EBP + -0x18]
00613fcb  MOV dword ptr [EBP + -0xc],EDX
00613fce  MOV EAX,dword ptr [EBP + -0x8]
00613fd1  ADD EAX,dword ptr [EBP + -0x14]
00613fd4  MOV dword ptr [EBP + -0x8],EAX
00613fd7  MOV ECX,dword ptr [EBP + -0x4]
00613fda  ADD ECX,dword ptr [EBP + -0x18]
00613fdd  MOV dword ptr [EBP + -0x4],ECX
00613fe0  LEA EDX,[EBP + -0x10]
00613fe3  PUSH EDX
00613fe4  MOV ECX,dword ptr [EBP + -0x1c]
00613fe7  CALL 0x00613e30
00613fec  MOV ESP,EBP
00613fee  POP EBP
00613fef  RET
