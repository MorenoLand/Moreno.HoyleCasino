; FUN_005fc680  005fc680
005fc680  PUSH EBP
005fc681  MOV EBP,ESP
005fc683  PUSH -0x1
005fc685  PUSH 0x6aa5a8
005fc68a  MOV EAX,FS:[0x0]
005fc690  PUSH EAX
005fc691  PUSH ECX
005fc692  MOV EAX,[0x00781870]
005fc697  XOR EAX,EBP
005fc699  PUSH EAX
005fc69a  LEA EAX,[EBP + -0xc]
005fc69d  MOV FS:[0x0],EAX
005fc6a3  MOV dword ptr [EBP + -0x10],ECX
005fc6a6  PUSH 0x0
005fc6a8  PUSH 0x0
005fc6aa  PUSH 0x0
005fc6ac  MOV ECX,dword ptr [EBP + -0x10]
005fc6af  CALL 0x00603120
005fc6b4  MOV dword ptr [EBP + -0x4],0x0
005fc6bb  MOV EAX,dword ptr [EBP + -0x10]
005fc6be  MOV dword ptr [EAX],0x6d6ec4
005fc6c4  MOV ECX,dword ptr [EBP + -0x10]
005fc6c7  MOV EDX,dword ptr [EBP + 0x8]
005fc6ca  MOV dword ptr [ECX + 0x1ec],EDX
005fc6d0  MOV EAX,dword ptr [EBP + -0x10]
005fc6d3  MOV ECX,dword ptr [EBP + 0xc]
005fc6d6  MOV dword ptr [EAX + 0x1e8],ECX
005fc6dc  MOV EDX,dword ptr [0x015e55e8]
005fc6e2  MOV EAX,dword ptr [EDX]
005fc6e4  MOV ECX,dword ptr [0x015e55e8]
005fc6ea  MOV EDX,dword ptr [EAX + 0x40]
005fc6ed  CALL EDX
005fc6ef  PUSH EAX
005fc6f0  MOV EAX,[0x015e55e8]
005fc6f5  MOV EDX,dword ptr [EAX]
005fc6f7  MOV ECX,dword ptr [0x015e55e8]
005fc6fd  MOV EAX,dword ptr [EDX + 0x3c]
005fc700  CALL EAX
005fc702  PUSH EAX
005fc703  MOV ECX,dword ptr [0x015e55e8]
005fc709  MOV EDX,dword ptr [ECX]
005fc70b  MOV ECX,dword ptr [0x015e55e8]
005fc711  MOV EAX,dword ptr [EDX + 0x44]
005fc714  CALL EAX
005fc716  PUSH EAX
005fc717  MOV ECX,dword ptr [EBP + -0x10]
005fc71a  CALL 0x00603190
005fc71f  MOV dword ptr [EBP + -0x4],0xffffffff
005fc726  MOV EAX,dword ptr [EBP + -0x10]
005fc729  MOV ECX,dword ptr [EBP + -0xc]
005fc72c  MOV dword ptr FS:[0x0],ECX
005fc733  POP ECX
005fc734  MOV ESP,EBP
005fc736  POP EBP
005fc737  RET 0x8
