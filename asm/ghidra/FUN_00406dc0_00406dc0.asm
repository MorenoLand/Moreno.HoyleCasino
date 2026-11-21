; FUN_00406dc0  00406dc0
00406dc0  PUSH EBP
00406dc1  MOV EBP,ESP
00406dc3  SUB ESP,0x18
00406dc6  MOV dword ptr [EBP + -0x18],ECX
00406dc9  PUSH 0x0
00406dcb  MOV ECX,dword ptr [EBP + 0x8]
00406dce  CALL 0x0063aae0
00406dd3  MOV dword ptr [EBP + -0x4],EAX
00406dd6  MOV EAX,dword ptr [EBP + -0x4]
00406dd9  MOV ECX,dword ptr [EAX + 0x4]
00406ddc  MOV EDX,dword ptr [EBP + -0x4]
00406ddf  ADD ECX,dword ptr [EDX + 0xc]
00406de2  MOV EAX,dword ptr [EBP + 0xc]
00406de5  ADD ECX,dword ptr [EAX]
00406de7  MOV EDX,dword ptr [EBP + 0xc]
00406dea  MOV dword ptr [EDX],ECX
00406dec  MOV EAX,dword ptr [EBP + 0xc]
00406def  MOV ECX,dword ptr [EAX + 0x4]
00406df2  MOV EDX,dword ptr [EBP + -0x4]
00406df5  ADD ECX,dword ptr [EDX + 0x8]
00406df8  MOV EAX,dword ptr [EBP + 0xc]
00406dfb  MOV dword ptr [EAX + 0x4],ECX
00406dfe  MOV ECX,dword ptr [EBP + 0x10]
00406e01  MOV EDX,dword ptr [ECX]
00406e03  MOV EAX,dword ptr [EBP + -0x4]
00406e06  ADD EDX,dword ptr [EAX + 0x4]
00406e09  MOV ECX,dword ptr [EBP + 0x10]
00406e0c  MOV dword ptr [ECX],EDX
00406e0e  MOV EDX,dword ptr [EBP + 0x10]
00406e11  MOV EAX,dword ptr [EDX + 0x4]
00406e14  MOV ECX,dword ptr [EBP + -0x4]
00406e17  ADD EAX,dword ptr [ECX + 0x8]
00406e1a  MOV EDX,dword ptr [EBP + 0x10]
00406e1d  MOV dword ptr [EDX + 0x4],EAX
00406e20  MOV EAX,dword ptr [EBP + 0x14]
00406e23  MOV ECX,dword ptr [EAX]
00406e25  MOV EDX,dword ptr [EBP + -0x4]
00406e28  ADD ECX,dword ptr [EDX + 0xc]
00406e2b  MOV EAX,dword ptr [EBP + 0x14]
00406e2e  MOV dword ptr [EAX],ECX
00406e30  MOV ECX,dword ptr [EBP + 0x14]
00406e33  MOV EDX,dword ptr [ECX + 0x4]
00406e36  MOV EAX,dword ptr [EBP + -0x4]
00406e39  ADD EDX,dword ptr [EAX + 0x10]
00406e3c  MOV ECX,dword ptr [EBP + 0x14]
00406e3f  MOV dword ptr [ECX + 0x4],EDX
00406e42  PUSH -0x1
00406e44  MOV EDX,dword ptr [0x007947e0]
00406e4a  MOV EAX,dword ptr [EDX]
00406e4c  MOV ECX,dword ptr [0x007947e0]
00406e52  MOV EDX,dword ptr [EAX + 0x33c]
00406e58  CALL EDX
00406e5a  MOVZX EAX,AL
00406e5d  TEST EAX,EAX
00406e5f  JZ 0x00406ede
00406e61  MOV ECX,dword ptr [0x0162ee84]
00406e67  CALL 0x005f3bf0
00406e6c  TEST EAX,EAX
00406e6e  JNZ 0x00406ede
00406e70  LEA ECX,[EBP + -0xc]
00406e73  PUSH ECX
00406e74  LEA EDX,[EBP + -0x14]
00406e77  PUSH EDX
00406e78  MOV EAX,dword ptr [EBP + 0x8]
00406e7b  PUSH EAX
00406e7c  MOV ECX,dword ptr [0x007947e0]
00406e82  CALL 0x005e0c40
00406e87  MOV ECX,dword ptr [EBP + -0x14]
00406e8a  ADD ECX,dword ptr [EBP + -0xc]
00406e8d  MOV EDX,dword ptr [EBP + 0xc]
00406e90  ADD ECX,dword ptr [EDX]
00406e92  MOV EAX,dword ptr [EBP + 0xc]
00406e95  MOV dword ptr [EAX],ECX
00406e97  MOV ECX,dword ptr [EBP + 0xc]
00406e9a  MOV EDX,dword ptr [ECX + 0x4]
00406e9d  ADD EDX,dword ptr [EBP + -0x10]
00406ea0  MOV EAX,dword ptr [EBP + 0xc]
00406ea3  MOV dword ptr [EAX + 0x4],EDX
00406ea6  MOV ECX,dword ptr [EBP + 0x10]
00406ea9  MOV EDX,dword ptr [ECX]
00406eab  ADD EDX,dword ptr [EBP + -0x14]
00406eae  MOV EAX,dword ptr [EBP + 0x10]
00406eb1  MOV dword ptr [EAX],EDX
00406eb3  MOV ECX,dword ptr [EBP + 0x10]
00406eb6  MOV EDX,dword ptr [ECX + 0x4]
00406eb9  ADD EDX,dword ptr [EBP + -0x10]
00406ebc  MOV EAX,dword ptr [EBP + 0x10]
00406ebf  MOV dword ptr [EAX + 0x4],EDX
00406ec2  MOV ECX,dword ptr [EBP + 0x14]
00406ec5  MOV EDX,dword ptr [ECX]
00406ec7  ADD EDX,dword ptr [EBP + -0xc]
00406eca  MOV EAX,dword ptr [EBP + 0x14]
00406ecd  MOV dword ptr [EAX],EDX
00406ecf  MOV ECX,dword ptr [EBP + 0x14]
00406ed2  MOV EDX,dword ptr [ECX + 0x4]
00406ed5  ADD EDX,dword ptr [EBP + -0x8]
00406ed8  MOV EAX,dword ptr [EBP + 0x14]
00406edb  MOV dword ptr [EAX + 0x4],EDX
00406ede  MOV ESP,EBP
00406ee0  POP EBP
00406ee1  RET 0x10
