; FUN_005b9ec0  005b9ec0
005b9ec0  PUSH EBP
005b9ec1  MOV EBP,ESP
005b9ec3  SUB ESP,0x108
005b9ec9  MOV dword ptr [EBP + 0xfffffefc],ECX
005b9ecf  SUB ESP,0x10
005b9ed2  MOV EAX,ESP
005b9ed4  MOV dword ptr [EBP + -0x4],ESP
005b9ed7  MOV dword ptr [EBP + -0x6c],EAX
005b9eda  LEA ECX,[EBP + -0xd]
005b9edd  MOV dword ptr [EBP + -0xc],ECX
005b9ee0  PUSH 0x0
005b9ee2  MOV ECX,dword ptr [EBP + -0x6c]
005b9ee5  CALL 0x005bbd80
005b9eea  MOV EDX,dword ptr [EBP + -0x6c]
005b9eed  MOV dword ptr [EBP + 0xfffffef8],EDX
005b9ef3  MOV EAX,dword ptr [EBP + 0x8]
005b9ef6  PUSH EAX
005b9ef7  MOV ECX,dword ptr [EBP + 0xfffffefc]
005b9efd  CALL 0x005ba1e0
005b9f02  MOV ESP,EBP
005b9f04  POP EBP
005b9f05  RET 0x4
