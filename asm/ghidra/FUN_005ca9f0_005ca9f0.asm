; FUN_005ca9f0  005ca9f0
005ca9f0  PUSH EBP
005ca9f1  MOV EBP,ESP
005ca9f3  PUSH -0x1
005ca9f5  PUSH 0x6a8a46
005ca9fa  MOV EAX,FS:[0x0]
005caa00  PUSH EAX
005caa01  PUSH ECX
005caa02  MOV EAX,[0x00781870]
005caa07  XOR EAX,EBP
005caa09  PUSH EAX
005caa0a  LEA EAX,[EBP + -0xc]
005caa0d  MOV FS:[0x0],EAX
005caa13  MOV dword ptr [EBP + -0x10],ECX
005caa16  MOV ECX,dword ptr [EBP + -0x10]
005caa19  CALL 0x00601a80
005caa1e  MOV dword ptr [EBP + -0x4],0x0
005caa25  MOV EAX,dword ptr [EBP + -0x10]
005caa28  MOV dword ptr [EAX],0x6d2444
005caa2e  MOV ECX,dword ptr [EBP + -0x10]
005caa31  FLD double ptr [EBP + 0x8]
005caa34  FSTP double ptr [ECX + 0x1e0]
005caa3a  MOV EDX,dword ptr [EBP + -0x10]
005caa3d  MOV byte ptr [EDX + 0x1b5],0x1
005caa44  PUSH 0x1
005caa46  MOV ECX,dword ptr [EBP + -0x10]
005caa49  CALL 0x005eb700
005caa4e  PUSH 0x6
005caa50  PUSH 0x3c
005caa52  MOV ECX,dword ptr [EBP + -0x10]
005caa55  CALL 0x00602ef0
005caa5a  MOV dword ptr [EBP + -0x4],0xffffffff
005caa61  MOV EAX,dword ptr [EBP + -0x10]
005caa64  MOV ECX,dword ptr [EBP + -0xc]
005caa67  MOV dword ptr FS:[0x0],ECX
005caa6e  POP ECX
005caa6f  MOV ESP,EBP
005caa71  POP EBP
005caa72  RET 0x8
