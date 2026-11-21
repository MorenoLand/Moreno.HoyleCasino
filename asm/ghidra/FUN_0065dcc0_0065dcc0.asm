; FUN_0065dcc0  0065dcc0
0065dcc0  PUSH EBP
0065dcc1  MOV EBP,ESP
0065dcc3  PUSH -0x1
0065dcc5  PUSH 0x6ac8bb
0065dcca  MOV EAX,FS:[0x0]
0065dcd0  PUSH EAX
0065dcd1  SUB ESP,0x28
0065dcd4  MOV EAX,[0x00781870]
0065dcd9  XOR EAX,EBP
0065dcdb  PUSH EAX
0065dcdc  LEA EAX,[EBP + -0xc]
0065dcdf  MOV FS:[0x0],EAX
0065dce5  MOV dword ptr [EBP + -0x28],ECX
0065dce8  MOV EAX,dword ptr [EBP + -0x28]
0065dceb  MOV dword ptr [EAX],0x6deac4
0065dcf1  MOV dword ptr [EBP + -0x4],0x0
0065dcf8  MOV ECX,dword ptr [EBP + -0x28]
0065dcfb  CMP dword ptr [ECX + 0x1c8],0x0
0065dd02  JZ 0x0065dd36
0065dd04  MOV EDX,dword ptr [EBP + -0x28]
0065dd07  MOV EAX,dword ptr [EDX + 0x1c8]
0065dd0d  MOV dword ptr [EBP + -0x14],EAX
0065dd10  MOV ECX,dword ptr [EBP + -0x14]
0065dd13  MOV dword ptr [EBP + -0x10],ECX
0065dd16  CMP dword ptr [EBP + -0x10],0x0
0065dd1a  JZ 0x0065dd2f
0065dd1c  PUSH 0x1
0065dd1e  MOV EDX,dword ptr [EBP + -0x10]
0065dd21  MOV EAX,dword ptr [EDX]
0065dd23  MOV ECX,dword ptr [EBP + -0x10]
0065dd26  MOV EDX,dword ptr [EAX]
0065dd28  CALL EDX
0065dd2a  MOV dword ptr [EBP + -0x2c],EAX
0065dd2d  JMP 0x0065dd36
0065dd2f  MOV dword ptr [EBP + -0x2c],0x0
0065dd36  MOV EAX,dword ptr [EBP + -0x28]
0065dd39  MOV ECX,dword ptr [EAX + 0x1d0]
0065dd3f  MOV dword ptr [EBP + -0x1c],ECX
0065dd42  MOV EDX,dword ptr [EBP + -0x1c]
0065dd45  MOV dword ptr [EBP + -0x18],EDX
0065dd48  CMP dword ptr [EBP + -0x18],0x0
0065dd4c  JZ 0x0065dd61
0065dd4e  PUSH 0x1
0065dd50  MOV EAX,dword ptr [EBP + -0x18]
0065dd53  MOV EDX,dword ptr [EAX]
0065dd55  MOV ECX,dword ptr [EBP + -0x18]
0065dd58  MOV EAX,dword ptr [EDX]
0065dd5a  CALL EAX
0065dd5c  MOV dword ptr [EBP + -0x30],EAX
0065dd5f  JMP 0x0065dd68
0065dd61  MOV dword ptr [EBP + -0x30],0x0
0065dd68  MOV ECX,dword ptr [EBP + -0x28]
0065dd6b  MOV EDX,dword ptr [ECX + 0x1cc]
0065dd71  MOV dword ptr [EBP + -0x24],EDX
0065dd74  MOV EAX,dword ptr [EBP + -0x24]
0065dd77  MOV dword ptr [EBP + -0x20],EAX
0065dd7a  CMP dword ptr [EBP + -0x20],0x0
0065dd7e  JZ 0x0065dd93
0065dd80  PUSH 0x1
0065dd82  MOV ECX,dword ptr [EBP + -0x20]
0065dd85  MOV EDX,dword ptr [ECX]
0065dd87  MOV ECX,dword ptr [EBP + -0x20]
0065dd8a  MOV EAX,dword ptr [EDX]
0065dd8c  CALL EAX
0065dd8e  MOV dword ptr [EBP + -0x34],EAX
0065dd91  JMP 0x0065dd9a
0065dd93  MOV dword ptr [EBP + -0x34],0x0
0065dd9a  MOV dword ptr [EBP + -0x4],0xffffffff
0065dda1  MOV ECX,dword ptr [EBP + -0x28]
0065dda4  CALL 0x0065bae0
0065dda9  MOV ECX,dword ptr [EBP + -0xc]
0065ddac  MOV dword ptr FS:[0x0],ECX
0065ddb3  POP ECX
0065ddb4  MOV ESP,EBP
0065ddb6  POP EBP
0065ddb7  RET
