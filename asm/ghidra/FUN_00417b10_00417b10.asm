; FUN_00417b10  00417b10
00417b10  PUSH EBP
00417b11  MOV EBP,ESP
00417b13  SUB ESP,0x18
00417b16  MOV dword ptr [EBP + -0x18],ECX
00417b19  PUSH 0x2
00417b1b  MOV ECX,dword ptr [EBP + 0x8]
00417b1e  CALL 0x0063aae0
00417b23  MOV dword ptr [EBP + -0x4],EAX
00417b26  MOV EAX,dword ptr [EBP + -0x4]
00417b29  MOV ECX,dword ptr [EAX + 0x10]
00417b2c  MOV EDX,dword ptr [EBP + -0x4]
00417b2f  ADD ECX,dword ptr [EDX + 0x18]
00417b32  MOV EAX,dword ptr [EBP + 0xc]
00417b35  ADD ECX,dword ptr [EAX]
00417b37  MOV EDX,dword ptr [EBP + 0xc]
00417b3a  MOV dword ptr [EDX],ECX
00417b3c  MOV EAX,dword ptr [EBP + 0xc]
00417b3f  MOV ECX,dword ptr [EAX + 0x4]
00417b42  MOV EDX,dword ptr [EBP + -0x4]
00417b45  ADD ECX,dword ptr [EDX + 0x14]
00417b48  MOV EAX,dword ptr [EBP + 0xc]
00417b4b  MOV dword ptr [EAX + 0x4],ECX
00417b4e  MOV ECX,dword ptr [EBP + 0x10]
00417b51  MOV EDX,dword ptr [ECX]
00417b53  MOV EAX,dword ptr [EBP + -0x4]
00417b56  ADD EDX,dword ptr [EAX + 0x10]
00417b59  MOV ECX,dword ptr [EBP + 0x10]
00417b5c  MOV dword ptr [ECX],EDX
00417b5e  MOV EDX,dword ptr [EBP + 0x10]
00417b61  MOV EAX,dword ptr [EDX + 0x4]
00417b64  MOV ECX,dword ptr [EBP + -0x4]
00417b67  ADD EAX,dword ptr [ECX + 0x14]
00417b6a  MOV EDX,dword ptr [EBP + 0x10]
00417b6d  MOV dword ptr [EDX + 0x4],EAX
00417b70  MOV EAX,dword ptr [EBP + 0x14]
00417b73  MOV ECX,dword ptr [EAX]
00417b75  MOV EDX,dword ptr [EBP + -0x4]
00417b78  ADD ECX,dword ptr [EDX + 0x18]
00417b7b  MOV EAX,dword ptr [EBP + 0x14]
00417b7e  MOV dword ptr [EAX],ECX
00417b80  MOV ECX,dword ptr [EBP + 0x14]
00417b83  MOV EDX,dword ptr [ECX + 0x4]
00417b86  MOV EAX,dword ptr [EBP + -0x4]
00417b89  ADD EDX,dword ptr [EAX + 0x1c]
00417b8c  MOV ECX,dword ptr [EBP + 0x14]
00417b8f  MOV dword ptr [ECX + 0x4],EDX
00417b92  PUSH -0x1
00417b94  MOV EDX,dword ptr [0x007947e0]
00417b9a  MOV EAX,dword ptr [EDX]
00417b9c  MOV ECX,dword ptr [0x007947e0]
00417ba2  MOV EDX,dword ptr [EAX + 0x33c]
00417ba8  CALL EDX
00417baa  MOVZX EAX,AL
00417bad  TEST EAX,EAX
00417baf  JZ 0x00417c2f
00417bb1  MOV ECX,dword ptr [0x0162ee84]
00417bb7  CALL 0x005f3bf0
00417bbc  CMP EAX,0x2
00417bbf  JNZ 0x00417c2f
00417bc1  LEA ECX,[EBP + -0xc]
00417bc4  PUSH ECX
00417bc5  LEA EDX,[EBP + -0x14]
00417bc8  PUSH EDX
00417bc9  MOV EAX,dword ptr [EBP + 0x8]
00417bcc  PUSH EAX
00417bcd  MOV ECX,dword ptr [0x007947e0]
00417bd3  CALL 0x005e0c40
00417bd8  MOV ECX,dword ptr [EBP + -0x14]
00417bdb  ADD ECX,dword ptr [EBP + -0xc]
00417bde  MOV EDX,dword ptr [EBP + 0xc]
00417be1  ADD ECX,dword ptr [EDX]
00417be3  MOV EAX,dword ptr [EBP + 0xc]
00417be6  MOV dword ptr [EAX],ECX
00417be8  MOV ECX,dword ptr [EBP + 0xc]
00417beb  MOV EDX,dword ptr [ECX + 0x4]
00417bee  ADD EDX,dword ptr [EBP + -0x10]
00417bf1  MOV EAX,dword ptr [EBP + 0xc]
00417bf4  MOV dword ptr [EAX + 0x4],EDX
00417bf7  MOV ECX,dword ptr [EBP + 0x10]
00417bfa  MOV EDX,dword ptr [ECX]
00417bfc  ADD EDX,dword ptr [EBP + -0x14]
00417bff  MOV EAX,dword ptr [EBP + 0x10]
00417c02  MOV dword ptr [EAX],EDX
00417c04  MOV ECX,dword ptr [EBP + 0x10]
00417c07  MOV EDX,dword ptr [ECX + 0x4]
00417c0a  ADD EDX,dword ptr [EBP + -0x10]
00417c0d  MOV EAX,dword ptr [EBP + 0x10]
00417c10  MOV dword ptr [EAX + 0x4],EDX
00417c13  MOV ECX,dword ptr [EBP + 0x14]
00417c16  MOV EDX,dword ptr [ECX]
00417c18  ADD EDX,dword ptr [EBP + -0xc]
00417c1b  MOV EAX,dword ptr [EBP + 0x14]
00417c1e  MOV dword ptr [EAX],EDX
00417c20  MOV ECX,dword ptr [EBP + 0x14]
00417c23  MOV EDX,dword ptr [ECX + 0x4]
00417c26  ADD EDX,dword ptr [EBP + -0x8]
00417c29  MOV EAX,dword ptr [EBP + 0x14]
00417c2c  MOV dword ptr [EAX + 0x4],EDX
00417c2f  MOV ESP,EBP
00417c31  POP EBP
00417c32  RET 0x10
