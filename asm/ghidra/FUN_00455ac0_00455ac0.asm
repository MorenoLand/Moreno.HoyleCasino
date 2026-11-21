; FUN_00455ac0  00455ac0
00455ac0  PUSH EBP
00455ac1  MOV EBP,ESP
00455ac3  SUB ESP,0x2c
00455ac6  PUSH ESI
00455ac7  MOV dword ptr [EBP + -0x2c],ECX
00455aca  MOV dword ptr [EBP + -0x1c],0xffffffff
00455ad1  MOV dword ptr [EBP + -0xc],0xffffffff
00455ad8  LEA EAX,[EBP + -0x24]
00455adb  PUSH EAX
00455adc  LEA ECX,[EBP + -0x14]
00455adf  PUSH ECX
00455ae0  MOV ECX,dword ptr [EBP + -0x2c]
00455ae3  CALL 0x00452010
00455ae8  MOV EDX,dword ptr [EBP + -0x14]
00455aeb  MOV EAX,dword ptr [EBP + -0x2c]
00455aee  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455af3  PUSH ECX
00455af4  MOV ECX,dword ptr [EBP + -0x2c]
00455af7  CALL 0x0044f680
00455afc  MOV ESI,EAX
00455afe  MOV EDX,dword ptr [EBP + -0x24]
00455b01  MOV EAX,dword ptr [EBP + -0x2c]
00455b04  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00455b09  PUSH ECX
00455b0a  MOV ECX,dword ptr [EBP + -0x2c]
00455b0d  CALL 0x0044f680
00455b12  CMP ESI,EAX
00455b14  JNZ 0x00455b42
00455b16  MOV EDX,dword ptr [EBP + -0x14]
00455b19  MOV dword ptr [EBP + -0x1c],EDX
00455b1c  MOV EAX,dword ptr [EBP + -0x24]
00455b1f  MOV dword ptr [EBP + -0xc],EAX
00455b22  MOV ECX,dword ptr [EBP + 0xc]
00455b25  PUSH ECX
00455b26  MOV EDX,dword ptr [EBP + 0x8]
00455b29  PUSH EDX
00455b2a  MOV EAX,dword ptr [EBP + -0xc]
00455b2d  PUSH EAX
00455b2e  MOV ECX,dword ptr [EBP + -0x1c]
00455b31  PUSH ECX
00455b32  MOV ECX,dword ptr [EBP + -0x2c]
00455b35  CALL 0x0044f840
00455b3a  XOR AX,AX
00455b3d  JMP 0x00455ca5
00455b42  MOV dword ptr [EBP + -0x10],0xffffffff
00455b49  MOV dword ptr [EBP + -0x20],0xffffffff
00455b50  MOV dword ptr [EBP + -0x28],0xffffffff
00455b57  MOV dword ptr [EBP + -0x4],0xffffffff
00455b5e  MOV dword ptr [EBP + -0x8],0x0
00455b65  JMP 0x00455b70
00455b67  MOV EDX,dword ptr [EBP + -0x8]
00455b6a  ADD EDX,0x1
00455b6d  MOV dword ptr [EBP + -0x8],EDX
00455b70  CMP dword ptr [EBP + -0x8],0x7
00455b74  JGE 0x00455c46
00455b7a  MOV EAX,dword ptr [EBP + -0x8]
00455b7d  MOV ECX,dword ptr [EBP + -0x2c]
00455b80  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455b85  PUSH EDX
00455b86  MOV ECX,dword ptr [EBP + -0x2c]
00455b89  CALL 0x0044f680
00455b8e  PUSH EAX
00455b8f  MOV ECX,dword ptr [EBP + -0x2c]
00455b92  CALL 0x0044f700
00455b97  CMP EAX,0x2
00455b9a  JNZ 0x00455be3
00455b9c  CMP dword ptr [EBP + -0x10],-0x1
00455ba0  JNZ 0x00455bbb
00455ba2  MOV EAX,dword ptr [EBP + -0x8]
00455ba5  MOV ECX,dword ptr [EBP + -0x2c]
00455ba8  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455bad  PUSH EDX
00455bae  MOV ECX,dword ptr [EBP + -0x2c]
00455bb1  CALL 0x0044f680
00455bb6  MOV dword ptr [EBP + -0x10],EAX
00455bb9  JMP 0x00455bd8
00455bbb  CMP dword ptr [EBP + -0x20],-0x1
00455bbf  JNZ 0x00455bd8
00455bc1  MOV EAX,dword ptr [EBP + -0x8]
00455bc4  MOV ECX,dword ptr [EBP + -0x2c]
00455bc7  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00455bcc  PUSH EDX
00455bcd  MOV ECX,dword ptr [EBP + -0x2c]
00455bd0  CALL 0x0044f680
00455bd5  MOV dword ptr [EBP + -0x20],EAX
00455bd8  MOV EAX,dword ptr [EBP + -0x8]
00455bdb  ADD EAX,0x1
00455bde  MOV dword ptr [EBP + -0x8],EAX
00455be1  JMP 0x00455b67
00455be3  MOV ECX,dword ptr [EBP + -0x8]
00455be6  MOV EDX,dword ptr [EBP + -0x2c]
00455be9  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00455bee  PUSH EAX
00455bef  MOV ECX,dword ptr [EBP + -0x2c]
00455bf2  CALL 0x0044f680
00455bf7  PUSH EAX
00455bf8  MOV ECX,dword ptr [EBP + -0x2c]
00455bfb  CALL 0x0044f700
00455c00  CMP EAX,0x1
00455c03  JNZ 0x00455c41
00455c05  CMP dword ptr [EBP + -0x28],-0x1
00455c09  JNZ 0x00455c24
00455c0b  MOV ECX,dword ptr [EBP + -0x8]
00455c0e  MOV EDX,dword ptr [EBP + -0x2c]
00455c11  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00455c16  PUSH EAX
00455c17  MOV ECX,dword ptr [EBP + -0x2c]
00455c1a  CALL 0x0044f680
00455c1f  MOV dword ptr [EBP + -0x28],EAX
00455c22  JMP 0x00455c41
00455c24  CMP dword ptr [EBP + -0x4],-0x1
00455c28  JNZ 0x00455c41
00455c2a  MOV ECX,dword ptr [EBP + -0x8]
00455c2d  MOV EDX,dword ptr [EBP + -0x2c]
00455c30  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00455c35  PUSH EAX
00455c36  MOV ECX,dword ptr [EBP + -0x2c]
00455c39  CALL 0x0044f680
00455c3e  MOV dword ptr [EBP + -0x4],EAX
00455c41  JMP 0x00455b67
00455c46  MOV ECX,dword ptr [EBP + -0x10]
00455c49  ADD ECX,dword ptr [EBP + -0x20]
00455c4c  CMP ECX,0x7
00455c4f  JG 0x00455c87
00455c51  CMP dword ptr [EBP + -0x28],0xb
00455c55  JG 0x00455c87
00455c57  CMP dword ptr [EBP + -0x4],0xa
00455c5b  JG 0x00455c87
00455c5d  MOV EDX,dword ptr [EBP + -0x14]
00455c60  MOV dword ptr [EBP + -0x1c],EDX
00455c63  MOV EAX,dword ptr [EBP + -0x24]
00455c66  MOV dword ptr [EBP + -0xc],EAX
00455c69  MOV ECX,dword ptr [EBP + 0xc]
00455c6c  PUSH ECX
00455c6d  MOV EDX,dword ptr [EBP + 0x8]
00455c70  PUSH EDX
00455c71  MOV EAX,dword ptr [EBP + -0xc]
00455c74  PUSH EAX
00455c75  MOV ECX,dword ptr [EBP + -0x1c]
00455c78  PUSH ECX
00455c79  MOV ECX,dword ptr [EBP + -0x2c]
00455c7c  CALL 0x0044f840
00455c81  MOV AX,0x3
00455c85  JMP 0x00455ca5
00455c87  MOV EDX,dword ptr [EBP + 0xc]
00455c8a  PUSH EDX
00455c8b  MOV EAX,dword ptr [EBP + 0x8]
00455c8e  PUSH EAX
00455c8f  MOV ECX,dword ptr [EBP + -0x2c]
00455c92  CALL 0x00453e00
00455c97  MOVSX ECX,AX
00455c9a  ADD ECX,0x1
00455c9d  MOV word ptr [EBP + -0x18],CX
00455ca1  MOV AX,word ptr [EBP + -0x18]
00455ca5  POP ESI
00455ca6  MOV ESP,EBP
00455ca8  POP EBP
00455ca9  RET 0x8
