; FUN_005fc850  005fc850
005fc850  PUSH EBP
005fc851  MOV EBP,ESP
005fc853  PUSH -0x1
005fc855  PUSH 0x6aa5cb
005fc85a  MOV EAX,FS:[0x0]
005fc860  PUSH EAX
005fc861  PUSH ECX
005fc862  MOV EAX,[0x00781870]
005fc867  XOR EAX,EBP
005fc869  PUSH EAX
005fc86a  LEA EAX,[EBP + -0xc]
005fc86d  MOV FS:[0x0],EAX
005fc873  MOV dword ptr [EBP + -0x10],ECX
005fc876  PUSH 0x0
005fc878  PUSH 0x0
005fc87a  PUSH 0x0
005fc87c  MOV ECX,dword ptr [EBP + -0x10]
005fc87f  CALL 0x00603120
005fc884  MOV dword ptr [EBP + -0x4],0x0
005fc88b  MOV EAX,dword ptr [EBP + -0x10]
005fc88e  MOV dword ptr [EAX],0x6d6fc4
005fc894  MOV ECX,dword ptr [EBP + -0x10]
005fc897  MOV EDX,dword ptr [EBP + 0x8]
005fc89a  MOV dword ptr [ECX + 0x1e8],EDX
005fc8a0  MOV EAX,dword ptr [EBP + -0x10]
005fc8a3  MOV ECX,dword ptr [EBP + 0xc]
005fc8a6  MOV dword ptr [EAX + 0x1f0],ECX
005fc8ac  MOV EDX,dword ptr [EBP + -0x10]
005fc8af  MOV EAX,dword ptr [EBP + 0xc]
005fc8b2  MOV dword ptr [EDX + 0x4],EAX
005fc8b5  MOV ECX,dword ptr [EBP + -0x10]
005fc8b8  MOV dword ptr [ECX + 0x1ec],0xffffffff
005fc8c2  MOV EDX,dword ptr [EBP + -0x10]
005fc8c5  MOV dword ptr [EDX + 0x1f4],0x0
005fc8cf  MOV EAX,dword ptr [EBP + -0x10]
005fc8d2  MOV dword ptr [EAX + 0x1f8],0x0
005fc8dc  MOV ECX,dword ptr [EBP + -0x10]
005fc8df  MOV dword ptr [ECX + 0x200],0x0
005fc8e9  PUSH 0x0
005fc8eb  PUSH 0x0
005fc8ed  MOV EDX,dword ptr [0x015e55e8]
005fc8f3  MOV EAX,dword ptr [EDX]
005fc8f5  MOV ECX,dword ptr [0x015e55e8]
005fc8fb  MOV EDX,dword ptr [EAX + 0x44]
005fc8fe  CALL EDX
005fc900  PUSH EAX
005fc901  MOV ECX,dword ptr [EBP + -0x10]
005fc904  CALL 0x00603190
005fc909  MOV dword ptr [EBP + -0x4],0xffffffff
005fc910  MOV EAX,dword ptr [EBP + -0x10]
005fc913  MOV ECX,dword ptr [EBP + -0xc]
005fc916  MOV dword ptr FS:[0x0],ECX
005fc91d  POP ECX
005fc91e  MOV ESP,EBP
005fc920  POP EBP
005fc921  RET 0x8
