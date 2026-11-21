; FUN_005befc0  005befc0
005befc0  PUSH EBP
005befc1  MOV EBP,ESP
005befc3  SUB ESP,0x38
005befc6  XOR EAX,EAX
005befc8  MOV byte ptr [EBP + -0x1],AL
005befcb  MOV CL,byte ptr [EBP + -0x3]
005befce  MOV byte ptr [EBP + -0x2],CL
005befd1  MOV EDX,dword ptr [EBP + 0xc]
005befd4  MOV dword ptr [EBP + -0x8],EDX
005befd7  MOV EAX,dword ptr [EBP + 0x8]
005befda  MOV dword ptr [EBP + -0x10],EAX
005befdd  MOV CL,byte ptr [EBP + -0x1]
005befe0  MOV byte ptr [EBP + -0x35],CL
005befe3  MOV EDX,dword ptr [EBP + 0x10]
005befe6  MOV dword ptr [EBP + -0x34],EDX
005befe9  MOV EAX,dword ptr [EBP + 0x14]
005befec  PUSH EAX
005befed  MOV ECX,dword ptr [EBP + -0x34]
005beff0  PUSH ECX
005beff1  MOV EDX,dword ptr [EBP + -0x8]
005beff4  PUSH EDX
005beff5  MOV EAX,dword ptr [EBP + -0x10]
005beff8  PUSH EAX
005beff9  CALL 0x005bf010
005beffe  ADD ESP,0x10
005bf001  MOV ESP,EBP
005bf003  POP EBP
005bf004  RET
