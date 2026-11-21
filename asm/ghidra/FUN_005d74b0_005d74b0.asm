; FUN_005d74b0  005d74b0
005d74b0  PUSH EBP
005d74b1  MOV EBP,ESP
005d74b3  SUB ESP,0x1c
005d74b6  MOV dword ptr [EBP + -0x1c],ECX
005d74b9  MOV EAX,dword ptr [EBP + -0x1c]
005d74bc  MOV ECX,dword ptr [EAX + 0x4b4]
005d74c2  MOV EDX,dword ptr [EAX + 0x4b8]
005d74c8  MOV dword ptr [EBP + -0x8],ECX
005d74cb  MOV dword ptr [EBP + -0x4],EDX
005d74ce  PUSH 0x0
005d74d0  PUSH 0x0
005d74d2  CALL 0x0064c8a0
005d74d7  ADD ESP,0x8
005d74da  MOV dword ptr [EBP + -0x10],EAX
005d74dd  MOV dword ptr [EBP + -0xc],EDX
005d74e0  MOV EAX,dword ptr [EBP + -0x1c]
005d74e3  MOV ECX,dword ptr [EBP + -0x10]
005d74e6  MOV dword ptr [EAX + 0x4b4],ECX
005d74ec  MOV EDX,dword ptr [EBP + -0xc]
005d74ef  MOV dword ptr [EAX + 0x4b8],EDX
005d74f5  PUSH 0x0
005d74f7  PUSH 0x0
005d74f9  CALL 0x0064c8a0
005d74fe  ADD ESP,0x8
005d7501  MOV dword ptr [EBP + -0x18],EAX
005d7504  MOV dword ptr [EBP + -0x14],EDX
005d7507  MOV EAX,dword ptr [EBP + -0x14]
005d750a  PUSH EAX
005d750b  MOV ECX,dword ptr [EBP + -0x18]
005d750e  PUSH ECX
005d750f  MOV ECX,dword ptr [EBP + -0x1c]
005d7512  CALL 0x005d59e0
005d7517  MOV EDX,dword ptr [EBP + -0x4]
005d751a  PUSH EDX
005d751b  MOV EAX,dword ptr [EBP + -0x8]
005d751e  PUSH EAX
005d751f  MOV ECX,dword ptr [EBP + -0x1c]
005d7522  CALL 0x005d5cf0
005d7527  MOV ESP,EBP
005d7529  POP EBP
005d752a  RET
