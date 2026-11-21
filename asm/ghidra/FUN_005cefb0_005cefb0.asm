; FUN_005cefb0  005cefb0
005cefb0  PUSH EBP
005cefb1  MOV EBP,ESP
005cefb3  PUSH -0x1
005cefb5  PUSH 0x6a8c97
005cefba  MOV EAX,FS:[0x0]
005cefc0  PUSH EAX
005cefc1  PUSH ECX
005cefc2  MOV EAX,[0x00781870]
005cefc7  XOR EAX,EBP
005cefc9  PUSH EAX
005cefca  LEA EAX,[EBP + -0xc]
005cefcd  MOV FS:[0x0],EAX
005cefd3  MOV dword ptr [EBP + -0x10],ECX
005cefd6  PUSH 0x0
005cefd8  PUSH 0x1
005cefda  MOV ECX,dword ptr [EBP + -0x10]
005cefdd  CALL 0x005f71f0
005cefe2  MOV dword ptr [EBP + -0x4],0x0
005cefe9  MOV EAX,dword ptr [EBP + -0x10]
005cefec  MOV dword ptr [EAX],0x6d2f14
005ceff2  PUSH 0x0
005ceff4  PUSH 0x4e6
005ceff9  MOV ECX,dword ptr [EBP + -0x10]
005ceffc  CALL 0x005f83d0
005cf001  MOV ECX,dword ptr [EBP + -0x10]
005cf004  MOV byte ptr [ECX + 0x1bc],0x0
005cf00b  MOV EDX,dword ptr [EBP + -0x10]
005cf00e  MOV dword ptr [EDX + 0x1c0],0x0
005cf018  MOV dword ptr [EBP + -0x4],0xffffffff
005cf01f  MOV EAX,dword ptr [EBP + -0x10]
005cf022  MOV ECX,dword ptr [EBP + -0xc]
005cf025  MOV dword ptr FS:[0x0],ECX
005cf02c  POP ECX
005cf02d  MOV ESP,EBP
005cf02f  POP EBP
005cf030  RET
