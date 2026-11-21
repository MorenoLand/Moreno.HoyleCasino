; FUN_004c76e0  004c76e0
004c76e0  PUSH EBP
004c76e1  MOV EBP,ESP
004c76e3  SUB ESP,0x18
004c76e6  MOV dword ptr [EBP + -0x14],ECX
004c76e9  MOV ECX,dword ptr [EBP + -0x14]
004c76ec  CALL 0x004c70d0
004c76f1  MOV dword ptr [EBP + -0x4],EAX
004c76f4  MOV EAX,dword ptr [EBP + -0x14]
004c76f7  MOV ECX,dword ptr [EAX + 0x8]
004c76fa  CALL 0x0060c9a0
004c76ff  SUB EAX,0x1
004c7702  MOV dword ptr [EBP + -0x10],EAX
004c7705  JMP 0x004c7710
004c7707  MOV ECX,dword ptr [EBP + -0x10]
004c770a  SUB ECX,0x1
004c770d  MOV dword ptr [EBP + -0x10],ECX
004c7710  CMP dword ptr [EBP + -0x10],-0x1
004c7714  JLE 0x004c77f9
004c771a  MOV EDX,dword ptr [EBP + -0x10]
004c771d  PUSH EDX
004c771e  MOV EAX,dword ptr [EBP + -0x14]
004c7721  MOV ECX,dword ptr [EAX + 0x8]
004c7724  PUSH ECX
004c7725  CALL 0x004c7310
004c772a  ADD ESP,0x8
004c772d  MOV dword ptr [EBP + -0xc],EAX
004c7730  MOV EDX,dword ptr [EBP + -0xc]
004c7733  MOV EAX,dword ptr [EDX + 0x8]
004c7736  MOV dword ptr [EBP + -0x8],EAX
004c7739  MOV ECX,dword ptr [EBP + -0x4]
004c773c  MOV dword ptr [EBP + -0x18],ECX
004c773f  MOV EDX,dword ptr [EBP + -0x18]
004c7742  ADD EDX,0x1
004c7745  MOV dword ptr [EBP + -0x18],EDX
004c7748  CMP dword ptr [EBP + -0x18],0x8
004c774c  JA 0x004c77cd
004c774e  MOV EAX,dword ptr [EBP + -0x18]
004c7751  MOVZX ECX,byte ptr [EAX + 0x4c7808]
004c7758  JMP dword ptr [ECX*0x4 + 0x4c7800]
004c775f  MOV EDX,dword ptr [EBP + -0x14]
004c7762  MOV EAX,dword ptr [EDX + 0x14]
004c7765  ADD EAX,0x8
004c7768  PUSH EAX
004c7769  MOV ECX,dword ptr [EBP + -0x14]
004c776c  MOV ECX,dword ptr [ECX + 0x8]
004c776f  CALL 0x0060c9a0
004c7774  SUB EAX,0x1
004c7777  SUB EAX,dword ptr [EBP + -0x10]
004c777a  IMUL EAX,EAX,0xd
004c777d  MOV EDX,dword ptr [EBP + -0x14]
004c7780  MOV ECX,dword ptr [EDX + 0x10]
004c7783  LEA EDX,[EAX + ECX*0x1 + 0x56]
004c7787  PUSH EDX
004c7788  MOV EAX,dword ptr [EBP + -0x8]
004c778b  MOV EDX,dword ptr [EAX]
004c778d  MOV ECX,dword ptr [EBP + -0x8]
004c7790  MOV EAX,dword ptr [EDX + 0x44]
004c7793  CALL EAX
004c7795  JMP 0x004c77cd
004c7797  MOV ECX,dword ptr [EBP + -0x14]
004c779a  MOV EDX,dword ptr [ECX + 0x14]
004c779d  ADD EDX,0x8
004c77a0  PUSH EDX
004c77a1  MOV EAX,dword ptr [EBP + -0x14]
004c77a4  MOV ECX,dword ptr [EAX + 0x8]
004c77a7  CALL 0x0060c9a0
004c77ac  SUB EAX,0x1
004c77af  SUB EAX,dword ptr [EBP + -0x10]
004c77b2  IMUL EAX,EAX,0xd
004c77b5  MOV ECX,dword ptr [EBP + -0x14]
004c77b8  MOV EDX,dword ptr [ECX + 0x10]
004c77bb  LEA EAX,[EAX + EDX*0x1 + -0x55]
004c77bf  PUSH EAX
004c77c0  MOV ECX,dword ptr [EBP + -0x8]
004c77c3  MOV EDX,dword ptr [ECX]
004c77c5  MOV ECX,dword ptr [EBP + -0x8]
004c77c8  MOV EAX,dword ptr [EDX + 0x44]
004c77cb  CALL EAX
004c77cd  MOV ECX,dword ptr [EBP + -0xc]
004c77d0  CALL 0x00463d40
004c77d5  MOV ECX,dword ptr [EBP + -0x14]
004c77d8  MOV ECX,dword ptr [ECX + 0x8]
004c77db  CALL 0x0060c9a0
004c77e0  SUB EAX,dword ptr [EBP + -0x10]
004c77e3  ADD EAX,0x5a
004c77e6  PUSH EAX
004c77e7  MOV EDX,dword ptr [EBP + -0x8]
004c77ea  MOV EAX,dword ptr [EDX]
004c77ec  MOV ECX,dword ptr [EBP + -0x8]
004c77ef  MOV EDX,dword ptr [EAX + 0x6c]
004c77f2  CALL EDX
004c77f4  JMP 0x004c7707
004c77f9  MOV ESP,EBP
004c77fb  POP EBP
004c77fc  RET
