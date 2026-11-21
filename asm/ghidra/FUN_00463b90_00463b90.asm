; FUN_00463b90  00463b90
00463b90  PUSH EBP
00463b91  MOV EBP,ESP
00463b93  PUSH -0x1
00463b95  PUSH 0x69f3db
00463b9a  MOV EAX,FS:[0x0]
00463ba0  PUSH EAX
00463ba1  SUB ESP,0x10
00463ba4  MOV EAX,[0x00781870]
00463ba9  XOR EAX,EBP
00463bab  PUSH EAX
00463bac  LEA EAX,[EBP + -0xc]
00463baf  MOV FS:[0x0],EAX
00463bb5  MOV dword ptr [EBP + -0x18],ECX
00463bb8  MOV EAX,dword ptr [EBP + -0x18]
00463bbb  CMP dword ptr [EAX + 0x8],0x0
00463bbf  JNZ 0x00463c08
00463bc1  PUSH 0x190
00463bc6  CALL 0x00686d82
00463bcb  ADD ESP,0x4
00463bce  MOV dword ptr [EBP + -0x14],EAX
00463bd1  MOV dword ptr [EBP + -0x4],0x0
00463bd8  CMP dword ptr [EBP + -0x14],0x0
00463bdc  JZ 0x00463beb
00463bde  MOV ECX,dword ptr [EBP + -0x14]
00463be1  CALL 0x00463b50
00463be6  MOV dword ptr [EBP + -0x1c],EAX
00463be9  JMP 0x00463bf2
00463beb  MOV dword ptr [EBP + -0x1c],0x0
00463bf2  MOV ECX,dword ptr [EBP + -0x1c]
00463bf5  MOV dword ptr [EBP + -0x10],ECX
00463bf8  MOV dword ptr [EBP + -0x4],0xffffffff
00463bff  MOV EDX,dword ptr [EBP + -0x18]
00463c02  MOV EAX,dword ptr [EBP + -0x10]
00463c05  MOV dword ptr [EDX + 0x8],EAX
00463c08  MOV ECX,dword ptr [EBP + -0x18]
00463c0b  MOV EDX,dword ptr [ECX + 0x8]
00463c0e  MOV EAX,dword ptr [EBP + -0x18]
00463c11  MOV ECX,dword ptr [EAX + 0x8]
00463c14  MOV EDX,dword ptr [EDX]
00463c16  MOV EAX,dword ptr [EDX + 0x70]
00463c19  CALL EAX
00463c1b  PUSH 0x186a1
00463c20  MOV ECX,dword ptr [EBP + -0x18]
00463c23  MOV ECX,dword ptr [ECX + 0x8]
00463c26  CALL 0x005eaf00
00463c2b  PUSH 0x0
00463c2d  MOV EDX,dword ptr [EBP + -0x18]
00463c30  MOV EAX,dword ptr [EDX + 0x8]
00463c33  MOV ECX,dword ptr [EBP + -0x18]
00463c36  MOV ECX,dword ptr [ECX + 0x8]
00463c39  MOV EDX,dword ptr [EAX]
00463c3b  MOV EAX,dword ptr [EDX + 0xb0]
00463c41  CALL EAX
00463c43  MOV ECX,dword ptr [EBP + -0x18]
00463c46  MOV EDX,dword ptr [ECX + 0x8]
00463c49  MOV EAX,dword ptr [EBP + -0x18]
00463c4c  MOV ECX,dword ptr [EAX + 0x8]
00463c4f  MOV EDX,dword ptr [EDX]
00463c51  MOV EAX,dword ptr [EDX + 0x40]
00463c54  CALL EAX
00463c56  MOV ECX,dword ptr [EBP + -0xc]
00463c59  MOV dword ptr FS:[0x0],ECX
00463c60  POP ECX
00463c61  MOV ESP,EBP
00463c63  POP EBP
00463c64  RET
