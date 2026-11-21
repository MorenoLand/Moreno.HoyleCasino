; FUN_0042dcf0  0042dcf0
0042dcf0  PUSH EBP
0042dcf1  MOV EBP,ESP
0042dcf3  PUSH -0x1
0042dcf5  PUSH 0x69e672
0042dcfa  MOV EAX,FS:[0x0]
0042dd00  PUSH EAX
0042dd01  SUB ESP,0x10
0042dd04  MOV EAX,[0x00781870]
0042dd09  XOR EAX,EBP
0042dd0b  PUSH EAX
0042dd0c  LEA EAX,[EBP + -0xc]
0042dd0f  MOV FS:[0x0],EAX
0042dd15  MOV dword ptr [EBP + -0x18],ECX
0042dd18  PUSH 0x1
0042dd1a  MOV EAX,[0x0162ee80]
0042dd1f  MOV ECX,dword ptr [EAX + 0x4]
0042dd22  MOV EDX,dword ptr [0x0162ee80]
0042dd28  MOV EAX,dword ptr [EDX + 0x4]
0042dd2b  MOV EDX,dword ptr [ECX]
0042dd2d  MOV ECX,EAX
0042dd2f  MOV EAX,dword ptr [EDX + 0x4]
0042dd32  CALL EAX
0042dd34  MOV ECX,dword ptr [0x007906d4]
0042dd3a  CALL 0x0043b250
0042dd3f  MOVZX ECX,AL
0042dd42  TEST ECX,ECX
0042dd44  JZ 0x0042ddfa
0042dd4a  MOV ECX,dword ptr [0x0162ee84]
0042dd50  CALL 0x00637630
0042dd55  MOVZX EDX,AL
0042dd58  TEST EDX,EDX
0042dd5a  JZ 0x0042ddfa
0042dd60  MOVZX EAX,byte ptr [0x00795f94]
0042dd67  TEST EAX,EAX
0042dd69  JNZ 0x0042ddfa
0042dd6f  MOV ECX,dword ptr [EBP + -0x18]
0042dd72  MOV dword ptr [ECX + 0x178],0x5
0042dd7c  PUSH 0xfcc
0042dd81  MOV ECX,dword ptr [EBP + -0x18]
0042dd84  CALL 0x005eaf00
0042dd89  PUSH 0x0
0042dd8b  MOV EDX,dword ptr [EBP + -0x18]
0042dd8e  MOV EAX,dword ptr [EDX]
0042dd90  MOV ECX,dword ptr [EBP + -0x18]
0042dd93  MOV EDX,dword ptr [EAX + 0xb0]
0042dd99  CALL EDX
0042dd9b  PUSH 0x20
0042dd9d  CALL 0x00686d82
0042dda2  ADD ESP,0x4
0042dda5  MOV dword ptr [EBP + -0x14],EAX
0042dda8  MOV dword ptr [EBP + -0x4],0x0
0042ddaf  CMP dword ptr [EBP + -0x14],0x0
0042ddb3  JZ 0x0042ddcb
0042ddb5  MOV EAX,[0x0162ee80]
0042ddba  MOV ECX,dword ptr [EAX + 0x4]
0042ddbd  PUSH ECX
0042ddbe  MOV ECX,dword ptr [EBP + -0x14]
0042ddc1  CALL 0x006010a0
0042ddc6  MOV dword ptr [EBP + -0x1c],EAX
0042ddc9  JMP 0x0042ddd2
0042ddcb  MOV dword ptr [EBP + -0x1c],0x0
0042ddd2  MOV EDX,dword ptr [EBP + -0x1c]
0042ddd5  MOV dword ptr [EBP + -0x10],EDX
0042ddd8  MOV dword ptr [EBP + -0x4],0xffffffff
0042dddf  MOV EAX,dword ptr [EBP + -0x10]
0042dde2  PUSH EAX
0042dde3  MOV ECX,dword ptr [EBP + -0x18]
0042dde6  CALL 0x005f5d50
0042ddeb  MOV ECX,dword ptr [EBP + -0x18]
0042ddee  MOV EDX,dword ptr [ECX]
0042ddf0  MOV ECX,dword ptr [EBP + -0x18]
0042ddf3  MOV EAX,dword ptr [EDX + 0x74]
0042ddf6  CALL EAX
0042ddf8  JMP 0x0042de14
0042ddfa  PUSH 0x0
0042ddfc  MOV ECX,dword ptr [0x0162ee80]
0042de02  MOV EDX,dword ptr [ECX + 0x4]
0042de05  MOV EAX,[0x0162ee80]
0042de0a  MOV ECX,dword ptr [EAX + 0x4]
0042de0d  MOV EDX,dword ptr [EDX]
0042de0f  MOV EAX,dword ptr [EDX + 0x1c]
0042de12  CALL EAX
0042de14  MOV ECX,dword ptr [EBP + -0xc]
0042de17  MOV dword ptr FS:[0x0],ECX
0042de1e  POP ECX
0042de1f  MOV ESP,EBP
0042de21  POP EBP
0042de22  RET
