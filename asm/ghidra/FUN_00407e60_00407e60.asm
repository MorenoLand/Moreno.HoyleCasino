; FUN_00407e60  00407e60
00407e60  PUSH EBP
00407e61  MOV EBP,ESP
00407e63  SUB ESP,0x20
00407e66  MOV dword ptr [EBP + -0x20],ECX
00407e69  MOV EAX,dword ptr [EBP + 0x8]
00407e6c  IMUL EAX,EAX,0x3
00407e6f  MOV dword ptr [EBP + -0xc],EAX
00407e72  MOV dword ptr [EBP + -0x10],0x0
00407e79  JMP 0x00407e84
00407e7b  MOV ECX,dword ptr [EBP + -0x10]
00407e7e  ADD ECX,0x1
00407e81  MOV dword ptr [EBP + -0x10],ECX
00407e84  CMP dword ptr [EBP + -0x10],0x3
00407e88  JGE 0x00407f49
00407e8e  PUSH 0x0
00407e90  MOV EDX,dword ptr [EBP + 0x8]
00407e93  PUSH EDX
00407e94  MOV EAX,dword ptr [EBP + -0xc]
00407e97  ADD EAX,dword ptr [EBP + -0x10]
00407e9a  MOV ECX,dword ptr [EBP + -0x20]
00407e9d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
00407ea1  CALL 0x005cb7d0
00407ea6  MOVZX EDX,AL
00407ea9  TEST EDX,EDX
00407eab  JZ 0x00407f44
00407eb1  MOV EAX,dword ptr [EBP + -0xc]
00407eb4  ADD EAX,dword ptr [EBP + -0x10]
00407eb7  MOV ECX,dword ptr [EBP + -0x20]
00407eba  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
00407ebe  MOV EAX,dword ptr [EBP + -0xc]
00407ec1  ADD EAX,dword ptr [EBP + -0x10]
00407ec4  MOV ECX,dword ptr [EBP + -0x20]
00407ec7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x4]
00407ecb  MOV EDX,dword ptr [EDX]
00407ecd  MOV EAX,dword ptr [EDX + 0xb4]
00407ed3  CALL EAX
00407ed5  MOVZX ECX,AL
00407ed8  TEST ECX,ECX
00407eda  JZ 0x00407f32
00407edc  MOV EDX,dword ptr [EBP + -0xc]
00407edf  ADD EDX,dword ptr [EBP + -0x10]
00407ee2  MOV EAX,dword ptr [EBP + -0x20]
00407ee5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
00407ee9  MOV dword ptr [EBP + -0x1c],ECX
00407eec  MOV EDX,dword ptr [EBP + 0x8]
00407eef  SHL EDX,0x5
00407ef2  MOV EAX,dword ptr [EBP + -0x1c]
00407ef5  LEA ECX,[EAX + EDX*0x1 + 0x48]
00407ef9  XOR EDX,EDX
00407efb  SHL EDX,0x3
00407efe  MOV EAX,dword ptr [ECX + EDX*0x1]
00407f01  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
00407f05  MOV dword ptr [EBP + -0x18],EAX
00407f08  MOV dword ptr [EBP + -0x14],ECX
00407f0b  MOV EDX,dword ptr [EBP + -0x18]
00407f0e  MOV EAX,dword ptr [EBP + -0x14]
00407f11  MOV dword ptr [EBP + -0x8],EDX
00407f14  MOV dword ptr [EBP + -0x4],EAX
00407f17  MOV ECX,dword ptr [EBP + -0x4]
00407f1a  PUSH ECX
00407f1b  MOV EDX,dword ptr [EBP + -0x8]
00407f1e  PUSH EDX
00407f1f  MOV EAX,dword ptr [EBP + 0x8]
00407f22  PUSH EAX
00407f23  CALL 0x005dcb00
00407f28  ADD ESP,0x4
00407f2b  MOV ECX,EAX
00407f2d  CALL 0x005d5cf0
00407f32  MOV ECX,dword ptr [EBP + -0xc]
00407f35  ADD ECX,dword ptr [EBP + -0x10]
00407f38  MOV EDX,dword ptr [EBP + -0x20]
00407f3b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x4]
00407f3f  CALL 0x005cb9b0
00407f44  JMP 0x00407e7b
00407f49  MOV ESP,EBP
00407f4b  POP EBP
00407f4c  RET 0x4
