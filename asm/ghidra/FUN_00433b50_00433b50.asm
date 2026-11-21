; FUN_00433b50  00433b50
00433b50  PUSH EBP
00433b51  MOV EBP,ESP
00433b53  SUB ESP,0x18
00433b56  MOV dword ptr [EBP + -0x18],ECX
00433b59  PUSH 0x4
00433b5b  MOV ECX,dword ptr [EBP + 0x8]
00433b5e  CALL 0x0063aae0
00433b63  MOV dword ptr [EBP + -0x4],EAX
00433b66  MOV EAX,dword ptr [EBP + -0x4]
00433b69  MOV ECX,dword ptr [EAX + 0x8]
00433b6c  MOV EDX,dword ptr [EBP + -0x4]
00433b6f  ADD ECX,dword ptr [EDX + 0x10]
00433b72  MOV EAX,dword ptr [EBP + 0xc]
00433b75  ADD ECX,dword ptr [EAX]
00433b77  MOV EDX,dword ptr [EBP + 0xc]
00433b7a  MOV dword ptr [EDX],ECX
00433b7c  MOV EAX,dword ptr [EBP + 0xc]
00433b7f  MOV ECX,dword ptr [EAX + 0x4]
00433b82  MOV EDX,dword ptr [EBP + -0x4]
00433b85  ADD ECX,dword ptr [EDX + 0xc]
00433b88  MOV EAX,dword ptr [EBP + 0xc]
00433b8b  MOV dword ptr [EAX + 0x4],ECX
00433b8e  MOV ECX,dword ptr [EBP + 0x10]
00433b91  MOV EDX,dword ptr [ECX]
00433b93  MOV EAX,dword ptr [EBP + -0x4]
00433b96  ADD EDX,dword ptr [EAX + 0x8]
00433b99  MOV ECX,dword ptr [EBP + 0x10]
00433b9c  MOV dword ptr [ECX],EDX
00433b9e  MOV EDX,dword ptr [EBP + 0x10]
00433ba1  MOV EAX,dword ptr [EDX + 0x4]
00433ba4  MOV ECX,dword ptr [EBP + -0x4]
00433ba7  ADD EAX,dword ptr [ECX + 0xc]
00433baa  MOV EDX,dword ptr [EBP + 0x10]
00433bad  MOV dword ptr [EDX + 0x4],EAX
00433bb0  MOV EAX,dword ptr [EBP + 0x14]
00433bb3  MOV ECX,dword ptr [EAX]
00433bb5  MOV EDX,dword ptr [EBP + -0x4]
00433bb8  ADD ECX,dword ptr [EDX + 0x10]
00433bbb  MOV EAX,dword ptr [EBP + 0x14]
00433bbe  MOV dword ptr [EAX],ECX
00433bc0  MOV ECX,dword ptr [EBP + 0x14]
00433bc3  MOV EDX,dword ptr [ECX + 0x4]
00433bc6  MOV EAX,dword ptr [EBP + -0x4]
00433bc9  ADD EDX,dword ptr [EAX + 0x14]
00433bcc  MOV ECX,dword ptr [EBP + 0x14]
00433bcf  MOV dword ptr [ECX + 0x4],EDX
00433bd2  PUSH -0x1
00433bd4  MOV EDX,dword ptr [0x007947e0]
00433bda  MOV EAX,dword ptr [EDX]
00433bdc  MOV ECX,dword ptr [0x007947e0]
00433be2  MOV EDX,dword ptr [EAX + 0x33c]
00433be8  CALL EDX
00433bea  MOVZX EAX,AL
00433bed  TEST EAX,EAX
00433bef  JZ 0x00433c6f
00433bf1  MOV ECX,dword ptr [0x0162ee84]
00433bf7  CALL 0x005f3bf0
00433bfc  CMP EAX,0x4
00433bff  JNZ 0x00433c6f
00433c01  LEA ECX,[EBP + -0xc]
00433c04  PUSH ECX
00433c05  LEA EDX,[EBP + -0x14]
00433c08  PUSH EDX
00433c09  MOV EAX,dword ptr [EBP + 0x8]
00433c0c  PUSH EAX
00433c0d  MOV ECX,dword ptr [0x007947e0]
00433c13  CALL 0x005e0c40
00433c18  MOV ECX,dword ptr [EBP + -0x14]
00433c1b  ADD ECX,dword ptr [EBP + -0xc]
00433c1e  MOV EDX,dword ptr [EBP + 0xc]
00433c21  ADD ECX,dword ptr [EDX]
00433c23  MOV EAX,dword ptr [EBP + 0xc]
00433c26  MOV dword ptr [EAX],ECX
00433c28  MOV ECX,dword ptr [EBP + 0xc]
00433c2b  MOV EDX,dword ptr [ECX + 0x4]
00433c2e  ADD EDX,dword ptr [EBP + -0x10]
00433c31  MOV EAX,dword ptr [EBP + 0xc]
00433c34  MOV dword ptr [EAX + 0x4],EDX
00433c37  MOV ECX,dword ptr [EBP + 0x10]
00433c3a  MOV EDX,dword ptr [ECX]
00433c3c  ADD EDX,dword ptr [EBP + -0x14]
00433c3f  MOV EAX,dword ptr [EBP + 0x10]
00433c42  MOV dword ptr [EAX],EDX
00433c44  MOV ECX,dword ptr [EBP + 0x10]
00433c47  MOV EDX,dword ptr [ECX + 0x4]
00433c4a  ADD EDX,dword ptr [EBP + -0x10]
00433c4d  MOV EAX,dword ptr [EBP + 0x10]
00433c50  MOV dword ptr [EAX + 0x4],EDX
00433c53  MOV ECX,dword ptr [EBP + 0x14]
00433c56  MOV EDX,dword ptr [ECX]
00433c58  ADD EDX,dword ptr [EBP + -0xc]
00433c5b  MOV EAX,dword ptr [EBP + 0x14]
00433c5e  MOV dword ptr [EAX],EDX
00433c60  MOV ECX,dword ptr [EBP + 0x14]
00433c63  MOV EDX,dword ptr [ECX + 0x4]
00433c66  ADD EDX,dword ptr [EBP + -0x8]
00433c69  MOV EAX,dword ptr [EBP + 0x14]
00433c6c  MOV dword ptr [EAX + 0x4],EDX
00433c6f  MOV ESP,EBP
00433c71  POP EBP
00433c72  RET 0x10
