; FUN_00613d20  00613d20
00613d20  PUSH EBP
00613d21  MOV EBP,ESP
00613d23  SUB ESP,0x1c
00613d26  MOV dword ptr [EBP + -0x1c],ECX
00613d29  MOV EAX,dword ptr [EBP + -0x1c]
00613d2c  ADD EAX,0x18
00613d2f  MOV ECX,dword ptr [EAX]
00613d31  MOV dword ptr [EBP + -0x10],ECX
00613d34  MOV EDX,dword ptr [EAX + 0x4]
00613d37  MOV dword ptr [EBP + -0xc],EDX
00613d3a  MOV ECX,dword ptr [EAX + 0x8]
00613d3d  MOV dword ptr [EBP + -0x8],ECX
00613d40  MOV EDX,dword ptr [EAX + 0xc]
00613d43  MOV dword ptr [EBP + -0x4],EDX
00613d46  MOV EAX,dword ptr [EBP + -0x1c]
00613d49  MOV ECX,dword ptr [EAX + 0x1c]
00613d4c  NEG ECX
00613d4e  MOV dword ptr [EBP + -0x18],ECX
00613d51  MOV EDX,dword ptr [EBP + -0x1c]
00613d54  MOV EAX,dword ptr [EDX + 0x18]
00613d57  NEG EAX
00613d59  MOV dword ptr [EBP + -0x14],EAX
00613d5c  MOV ECX,dword ptr [EBP + -0x10]
00613d5f  ADD ECX,dword ptr [EBP + -0x14]
00613d62  MOV dword ptr [EBP + -0x10],ECX
00613d65  MOV EDX,dword ptr [EBP + -0xc]
00613d68  ADD EDX,dword ptr [EBP + -0x18]
00613d6b  MOV dword ptr [EBP + -0xc],EDX
00613d6e  MOV EAX,dword ptr [EBP + -0x8]
00613d71  ADD EAX,dword ptr [EBP + -0x14]
00613d74  MOV dword ptr [EBP + -0x8],EAX
00613d77  MOV ECX,dword ptr [EBP + -0x4]
00613d7a  ADD ECX,dword ptr [EBP + -0x18]
00613d7d  MOV dword ptr [EBP + -0x4],ECX
00613d80  LEA EDX,[EBP + -0x10]
00613d83  PUSH EDX
00613d84  MOV EAX,dword ptr [EBP + -0x1c]
00613d87  MOV EDX,dword ptr [EAX]
00613d89  MOV ECX,dword ptr [EBP + -0x1c]
00613d8c  MOV EAX,dword ptr [EDX + 0x14]
00613d8f  CALL EAX
00613d91  MOV ESP,EBP
00613d93  POP EBP
00613d94  RET
