; FUN_00567da0  00567da0
00567da0  PUSH EBP
00567da1  MOV EBP,ESP
00567da3  SUB ESP,0x18
00567da6  MOV dword ptr [EBP + -0x18],ECX
00567da9  PUSH 0x11
00567dab  MOV ECX,dword ptr [EBP + 0x8]
00567dae  CALL 0x0063aae0
00567db3  MOV dword ptr [EBP + -0x4],EAX
00567db6  PUSH -0x1
00567db8  MOV EAX,[0x007947e0]
00567dbd  MOV EDX,dword ptr [EAX]
00567dbf  MOV ECX,dword ptr [0x007947e0]
00567dc5  MOV EAX,dword ptr [EDX + 0x33c]
00567dcb  CALL EAX
00567dcd  MOVZX ECX,AL
00567dd0  TEST ECX,ECX
00567dd2  JZ 0x00567e9c
00567dd8  MOV ECX,dword ptr [0x0162ee84]
00567dde  CALL 0x005f3bf0
00567de3  CMP EAX,0x12
00567de6  JNZ 0x00567e9c
00567dec  MOV EDX,dword ptr [EBP + 0xc]
00567def  MOV EAX,dword ptr [EDX]
00567df1  MOV ECX,dword ptr [EBP + -0x4]
00567df4  ADD EAX,dword ptr [ECX]
00567df6  MOV EDX,dword ptr [EBP + 0xc]
00567df9  MOV dword ptr [EDX],EAX
00567dfb  MOV EAX,dword ptr [EBP + 0xc]
00567dfe  MOV ECX,dword ptr [EAX + 0x4]
00567e01  MOV EDX,dword ptr [EBP + -0x4]
00567e04  ADD ECX,dword ptr [EDX + 0x4]
00567e07  MOV EAX,dword ptr [EBP + 0xc]
00567e0a  MOV dword ptr [EAX + 0x4],ECX
00567e0d  MOV ECX,dword ptr [EBP + 0x10]
00567e10  MOV EDX,dword ptr [ECX]
00567e12  MOV EAX,dword ptr [EBP + -0x4]
00567e15  ADD EDX,dword ptr [EAX]
00567e17  MOV ECX,dword ptr [EBP + 0x10]
00567e1a  MOV dword ptr [ECX],EDX
00567e1c  MOV EDX,dword ptr [EBP + 0x10]
00567e1f  MOV EAX,dword ptr [EDX + 0x4]
00567e22  MOV ECX,dword ptr [EBP + -0x4]
00567e25  ADD EAX,dword ptr [ECX + 0x4]
00567e28  MOV EDX,dword ptr [EBP + 0x10]
00567e2b  MOV dword ptr [EDX + 0x4],EAX
00567e2e  LEA EAX,[EBP + -0xc]
00567e31  PUSH EAX
00567e32  LEA ECX,[EBP + -0x14]
00567e35  PUSH ECX
00567e36  MOV EDX,dword ptr [EBP + 0x8]
00567e39  PUSH EDX
00567e3a  MOV ECX,dword ptr [0x007947e0]
00567e40  CALL 0x005e0c40
00567e45  MOV EAX,dword ptr [EBP + -0x14]
00567e48  ADD EAX,dword ptr [EBP + -0xc]
00567e4b  MOV ECX,dword ptr [EBP + 0xc]
00567e4e  ADD EAX,dword ptr [ECX]
00567e50  MOV EDX,dword ptr [EBP + 0xc]
00567e53  MOV dword ptr [EDX],EAX
00567e55  MOV EAX,dword ptr [EBP + 0xc]
00567e58  MOV ECX,dword ptr [EAX + 0x4]
00567e5b  ADD ECX,dword ptr [EBP + -0x10]
00567e5e  MOV EDX,dword ptr [EBP + 0xc]
00567e61  MOV dword ptr [EDX + 0x4],ECX
00567e64  MOV EAX,dword ptr [EBP + 0x10]
00567e67  MOV ECX,dword ptr [EAX]
00567e69  ADD ECX,dword ptr [EBP + -0x14]
00567e6c  MOV EDX,dword ptr [EBP + 0x10]
00567e6f  MOV dword ptr [EDX],ECX
00567e71  MOV EAX,dword ptr [EBP + 0x10]
00567e74  MOV ECX,dword ptr [EAX + 0x4]
00567e77  ADD ECX,dword ptr [EBP + -0x10]
00567e7a  MOV EDX,dword ptr [EBP + 0x10]
00567e7d  MOV dword ptr [EDX + 0x4],ECX
00567e80  MOV EAX,dword ptr [EBP + 0x14]
00567e83  MOV ECX,dword ptr [EAX]
00567e85  ADD ECX,dword ptr [EBP + -0xc]
00567e88  MOV EDX,dword ptr [EBP + 0x14]
00567e8b  MOV dword ptr [EDX],ECX
00567e8d  MOV EAX,dword ptr [EBP + 0x14]
00567e90  MOV ECX,dword ptr [EAX + 0x4]
00567e93  ADD ECX,dword ptr [EBP + -0x8]
00567e96  MOV EDX,dword ptr [EBP + 0x14]
00567e99  MOV dword ptr [EDX + 0x4],ECX
00567e9c  MOV ESP,EBP
00567e9e  POP EBP
00567e9f  RET 0x10
