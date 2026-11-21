; FUN_00425c40  00425c40
00425c40  PUSH EBP
00425c41  MOV EBP,ESP
00425c43  PUSH -0x1
00425c45  PUSH 0x69e3a8
00425c4a  MOV EAX,FS:[0x0]
00425c50  PUSH EAX
00425c51  SUB ESP,0x20
00425c54  MOV EAX,[0x00781870]
00425c59  XOR EAX,EBP
00425c5b  PUSH EAX
00425c5c  LEA EAX,[EBP + -0xc]
00425c5f  MOV FS:[0x0],EAX
00425c65  MOV dword ptr [EBP + -0x24],ECX
00425c68  MOV EAX,dword ptr [EBP + -0x24]
00425c6b  MOV dword ptr [EAX],0x6b6780
00425c71  MOV dword ptr [EBP + -0x4],0x0
00425c78  MOV ECX,dword ptr [EBP + -0x24]
00425c7b  MOV EDX,dword ptr [ECX + 0x4]
00425c7e  MOV dword ptr [EBP + -0x18],EDX
00425c81  MOV EAX,dword ptr [EBP + -0x18]
00425c84  MOV dword ptr [EBP + -0x14],EAX
00425c87  CMP dword ptr [EBP + -0x14],0x0
00425c8b  JZ 0x00425ca0
00425c8d  PUSH 0x1
00425c8f  MOV ECX,dword ptr [EBP + -0x14]
00425c92  MOV EDX,dword ptr [ECX]
00425c94  MOV ECX,dword ptr [EBP + -0x14]
00425c97  MOV EAX,dword ptr [EDX]
00425c99  CALL EAX
00425c9b  MOV dword ptr [EBP + -0x28],EAX
00425c9e  JMP 0x00425ca7
00425ca0  MOV dword ptr [EBP + -0x28],0x0
00425ca7  MOV dword ptr [EBP + -0x10],0x0
00425cae  JMP 0x00425cb9
00425cb0  MOV ECX,dword ptr [EBP + -0x10]
00425cb3  ADD ECX,0x1
00425cb6  MOV dword ptr [EBP + -0x10],ECX
00425cb9  CMP dword ptr [EBP + -0x10],0x8
00425cbd  JGE 0x00425cf4
00425cbf  MOV EDX,dword ptr [EBP + -0x10]
00425cc2  MOV EAX,dword ptr [EBP + -0x24]
00425cc5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00425cc9  MOV dword ptr [EBP + -0x20],ECX
00425ccc  MOV EDX,dword ptr [EBP + -0x20]
00425ccf  MOV dword ptr [EBP + -0x1c],EDX
00425cd2  CMP dword ptr [EBP + -0x1c],0x0
00425cd6  JZ 0x00425ceb
00425cd8  PUSH 0x1
00425cda  MOV EAX,dword ptr [EBP + -0x1c]
00425cdd  MOV EDX,dword ptr [EAX]
00425cdf  MOV ECX,dword ptr [EBP + -0x1c]
00425ce2  MOV EAX,dword ptr [EDX]
00425ce4  CALL EAX
00425ce6  MOV dword ptr [EBP + -0x2c],EAX
00425ce9  JMP 0x00425cf2
00425ceb  MOV dword ptr [EBP + -0x2c],0x0
00425cf2  JMP 0x00425cb0
00425cf4  MOV dword ptr [EBP + -0x4],0xffffffff
00425cfb  MOV ECX,dword ptr [EBP + -0x24]
00425cfe  CALL 0x005e9e40
00425d03  MOV ECX,dword ptr [EBP + -0xc]
00425d06  MOV dword ptr FS:[0x0],ECX
00425d0d  POP ECX
00425d0e  MOV ESP,EBP
00425d10  POP EBP
00425d11  RET
