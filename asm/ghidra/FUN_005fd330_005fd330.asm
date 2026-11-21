; FUN_005fd330  005fd330
005fd330  PUSH EBP
005fd331  MOV EBP,ESP
005fd333  SUB ESP,0x10
005fd336  PUSH ESI
005fd337  MOV dword ptr [EBP + -0x10],ECX
005fd33a  MOV EAX,dword ptr [EBP + -0x10]
005fd33d  MOV ECX,dword ptr [EAX + 0x1f0]
005fd343  MOV EDX,dword ptr [ECX + 0x1c4]
005fd349  MOV dword ptr [EBP + -0x4],EDX
005fd34c  MOV EAX,dword ptr [EBP + -0x4]
005fd34f  PUSH EAX
005fd350  MOV ECX,dword ptr [0x015e55e4]
005fd356  CALL 0x005f28c0
005fd35b  MOV ECX,dword ptr [EBP + -0x10]
005fd35e  MOV ECX,dword ptr [ECX + 0x4]
005fd361  CALL 0x005f84f0
005fd366  MOV ESI,EAX
005fd368  MOV EDX,dword ptr [EBP + -0x10]
005fd36b  MOV EAX,dword ptr [EDX]
005fd36d  MOV ECX,dword ptr [EBP + -0x10]
005fd370  MOV EDX,dword ptr [EAX + 0x54]
005fd373  CALL EDX
005fd375  ADD ESI,EAX
005fd377  MOV dword ptr [EBP + -0x8],ESI
005fd37a  MOV EAX,dword ptr [EBP + -0x10]
005fd37d  MOV ECX,dword ptr [EAX + 0x4]
005fd380  CALL 0x005f84d0
005fd385  MOV ESI,EAX
005fd387  MOV ECX,dword ptr [EBP + -0x10]
005fd38a  MOV EDX,dword ptr [ECX]
005fd38c  MOV ECX,dword ptr [EBP + -0x10]
005fd38f  MOV EAX,dword ptr [EDX + 0x4c]
005fd392  CALL EAX
005fd394  ADD ESI,EAX
005fd396  MOV dword ptr [EBP + -0xc],ESI
005fd399  PUSH 0x0
005fd39b  MOV ECX,dword ptr [EBP + -0x10]
005fd39e  MOV EDX,dword ptr [ECX + 0x1f0]
005fd3a4  PUSH EDX
005fd3a5  PUSH 0x2
005fd3a7  MOV EAX,dword ptr [EBP + -0x8]
005fd3aa  PUSH EAX
005fd3ab  MOV ECX,dword ptr [EBP + -0x10]
005fd3ae  CALL 0x005f5550
005fd3b3  ADD EAX,dword ptr [EBP + -0xc]
005fd3b6  PUSH EAX
005fd3b7  MOV ECX,dword ptr [EBP + -0x10]
005fd3ba  MOV EDX,dword ptr [ECX + 0x1ec]
005fd3c0  PUSH EDX
005fd3c1  MOV ECX,dword ptr [0x015e55e4]
005fd3c7  CALL 0x005f2670
005fd3cc  PUSH 0x3
005fd3ce  MOV EAX,dword ptr [EBP + -0x10]
005fd3d1  MOV EDX,dword ptr [EAX]
005fd3d3  MOV ECX,dword ptr [EBP + -0x10]
005fd3d6  MOV EAX,dword ptr [EDX + 0xd8]
005fd3dc  CALL EAX
005fd3de  MOV ECX,dword ptr [EBP + -0x10]
005fd3e1  CALL 0x005f5400
005fd3e6  MOV ECX,dword ptr [EBP + -0x10]
005fd3e9  MOV EDX,dword ptr [ECX + 0x1f0]
005fd3ef  MOV dword ptr [EDX + 0x1b8],EAX
005fd3f5  PUSH 0x0
005fd3f7  MOV ECX,dword ptr [EBP + -0x10]
005fd3fa  CALL 0x005f5df0
005fd3ff  POP ESI
005fd400  MOV ESP,EBP
005fd402  POP EBP
005fd403  RET
