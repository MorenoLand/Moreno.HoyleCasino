; FUN_00420c40  00420c40
00420c40  PUSH EBP
00420c41  MOV EBP,ESP
00420c43  PUSH -0x1
00420c45  PUSH 0x69e0f8
00420c4a  MOV EAX,FS:[0x0]
00420c50  PUSH EAX
00420c51  SUB ESP,0x38
00420c54  MOV EAX,[0x00781870]
00420c59  XOR EAX,EBP
00420c5b  PUSH EAX
00420c5c  LEA EAX,[EBP + -0xc]
00420c5f  MOV FS:[0x0],EAX
00420c65  MOV dword ptr [EBP + -0x34],ECX
00420c68  MOV EAX,dword ptr [EBP + -0x34]
00420c6b  MOV dword ptr [EAX],0x6b5ed4
00420c71  MOV dword ptr [EBP + -0x4],0x0
00420c78  MOV ECX,dword ptr [EBP + -0x34]
00420c7b  MOV EDX,dword ptr [ECX + 0x4]
00420c7e  MOV dword ptr [EBP + -0x18],EDX
00420c81  MOV EAX,dword ptr [EBP + -0x18]
00420c84  MOV dword ptr [EBP + -0x14],EAX
00420c87  CMP dword ptr [EBP + -0x14],0x0
00420c8b  JZ 0x00420ca0
00420c8d  PUSH 0x1
00420c8f  MOV ECX,dword ptr [EBP + -0x14]
00420c92  MOV EDX,dword ptr [ECX]
00420c94  MOV ECX,dword ptr [EBP + -0x14]
00420c97  MOV EAX,dword ptr [EDX]
00420c99  CALL EAX
00420c9b  MOV dword ptr [EBP + -0x38],EAX
00420c9e  JMP 0x00420ca7
00420ca0  MOV dword ptr [EBP + -0x38],0x0
00420ca7  MOV dword ptr [EBP + -0x10],0x0
00420cae  JMP 0x00420cb9
00420cb0  MOV ECX,dword ptr [EBP + -0x10]
00420cb3  ADD ECX,0x1
00420cb6  MOV dword ptr [EBP + -0x10],ECX
00420cb9  CMP dword ptr [EBP + -0x10],0x3
00420cbd  JGE 0x00420cf4
00420cbf  MOV EDX,dword ptr [EBP + -0x10]
00420cc2  MOV EAX,dword ptr [EBP + -0x34]
00420cc5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00420cc9  MOV dword ptr [EBP + -0x20],ECX
00420ccc  MOV EDX,dword ptr [EBP + -0x20]
00420ccf  MOV dword ptr [EBP + -0x1c],EDX
00420cd2  CMP dword ptr [EBP + -0x1c],0x0
00420cd6  JZ 0x00420ceb
00420cd8  PUSH 0x1
00420cda  MOV EAX,dword ptr [EBP + -0x1c]
00420cdd  MOV EDX,dword ptr [EAX]
00420cdf  MOV ECX,dword ptr [EBP + -0x1c]
00420ce2  MOV EAX,dword ptr [EDX]
00420ce4  CALL EAX
00420ce6  MOV dword ptr [EBP + -0x3c],EAX
00420ce9  JMP 0x00420cf2
00420ceb  MOV dword ptr [EBP + -0x3c],0x0
00420cf2  JMP 0x00420cb0
00420cf4  MOV dword ptr [EBP + -0x10],0x0
00420cfb  JMP 0x00420d06
00420cfd  MOV ECX,dword ptr [EBP + -0x10]
00420d00  ADD ECX,0x1
00420d03  MOV dword ptr [EBP + -0x10],ECX
00420d06  CMP dword ptr [EBP + -0x10],0xc
00420d0a  JGE 0x00420d41
00420d0c  MOV EDX,dword ptr [EBP + -0x10]
00420d0f  MOV EAX,dword ptr [EBP + -0x34]
00420d12  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x14]
00420d16  MOV dword ptr [EBP + -0x28],ECX
00420d19  MOV EDX,dword ptr [EBP + -0x28]
00420d1c  MOV dword ptr [EBP + -0x24],EDX
00420d1f  CMP dword ptr [EBP + -0x24],0x0
00420d23  JZ 0x00420d38
00420d25  PUSH 0x1
00420d27  MOV EAX,dword ptr [EBP + -0x24]
00420d2a  MOV EDX,dword ptr [EAX]
00420d2c  MOV ECX,dword ptr [EBP + -0x24]
00420d2f  MOV EAX,dword ptr [EDX]
00420d31  CALL EAX
00420d33  MOV dword ptr [EBP + -0x40],EAX
00420d36  JMP 0x00420d3f
00420d38  MOV dword ptr [EBP + -0x40],0x0
00420d3f  JMP 0x00420cfd
00420d41  MOV ECX,dword ptr [EBP + -0x34]
00420d44  MOV EDX,dword ptr [ECX + 0x44]
00420d47  MOV dword ptr [EBP + -0x30],EDX
00420d4a  MOV EAX,dword ptr [EBP + -0x30]
00420d4d  MOV dword ptr [EBP + -0x2c],EAX
00420d50  CMP dword ptr [EBP + -0x2c],0x0
00420d54  JZ 0x00420d69
00420d56  PUSH 0x1
00420d58  MOV ECX,dword ptr [EBP + -0x2c]
00420d5b  MOV EDX,dword ptr [ECX]
00420d5d  MOV ECX,dword ptr [EBP + -0x2c]
00420d60  MOV EAX,dword ptr [EDX]
00420d62  CALL EAX
00420d64  MOV dword ptr [EBP + -0x44],EAX
00420d67  JMP 0x00420d70
00420d69  MOV dword ptr [EBP + -0x44],0x0
00420d70  MOV dword ptr [EBP + -0x4],0xffffffff
00420d77  MOV ECX,dword ptr [EBP + -0x34]
00420d7a  CALL 0x005e9e40
00420d7f  MOV ECX,dword ptr [EBP + -0xc]
00420d82  MOV dword ptr FS:[0x0],ECX
00420d89  POP ECX
00420d8a  MOV ESP,EBP
00420d8c  POP EBP
00420d8d  RET
