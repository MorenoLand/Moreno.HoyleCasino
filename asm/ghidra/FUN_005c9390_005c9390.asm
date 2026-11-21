; FUN_005c9390  005c9390
005c9390  PUSH EBP
005c9391  MOV EBP,ESP
005c9393  SUB ESP,0x18
005c9396  MOV dword ptr [EBP + -0x18],ECX
005c9399  MOV dword ptr [EBP + -0xc],0xffffffff
005c93a0  MOV dword ptr [EBP + -0x4],0x0
005c93a7  LEA EAX,[EBP + -0x4]
005c93aa  PUSH EAX
005c93ab  LEA ECX,[EBP + -0xc]
005c93ae  PUSH ECX
005c93af  MOV EDX,dword ptr [EBP + 0xc]
005c93b2  PUSH EDX
005c93b3  MOV EAX,dword ptr [EBP + 0x8]
005c93b6  PUSH EAX
005c93b7  MOV ECX,dword ptr [EBP + -0x18]
005c93ba  CALL 0x005c9550
005c93bf  MOV ECX,dword ptr [EBP + -0x18]
005c93c2  MOV EDX,dword ptr [ECX + 0x8]
005c93c5  MOV dword ptr [EBP + -0x10],EDX
005c93c8  MOV EAX,dword ptr [EBP + -0x18]
005c93cb  MOV ECX,dword ptr [EAX + 0xc]
005c93ce  MOV dword ptr [EBP + -0x14],ECX
005c93d1  MOV EDX,dword ptr [EBP + -0x4]
005c93d4  PUSH EDX
005c93d5  MOV EAX,dword ptr [EBP + -0xc]
005c93d8  PUSH EAX
005c93d9  MOV ECX,dword ptr [EBP + 0xc]
005c93dc  PUSH ECX
005c93dd  MOV EDX,dword ptr [EBP + -0x18]
005c93e0  MOV EAX,dword ptr [EDX + 0x10]
005c93e3  MOV ECX,dword ptr [EAX + 0x1c]
005c93e6  PUSH ECX
005c93e7  MOV EDX,dword ptr [EBP + 0x8]
005c93ea  PUSH EDX
005c93eb  MOV ECX,dword ptr [EBP + -0x18]
005c93ee  CALL 0x005c9640
005c93f3  MOV ECX,EAX
005c93f5  MOV EAX,dword ptr [EBP + -0x10]
005c93f8  CDQ
005c93f9  IDIV dword ptr [EBP + -0x14]
005c93fc  IMUL ECX,EAX
005c93ff  MOV dword ptr [EBP + -0x8],ECX
005c9402  MOV EDX,dword ptr [EBP + -0x18]
005c9405  MOV EAX,dword ptr [EDX + 0x10]
005c9408  MOV ECX,dword ptr [EAX + 0x1c]
005c940b  PUSH ECX
005c940c  MOV ECX,dword ptr [EBP + -0x18]
005c940f  CALL 0x005c96c0
005c9414  CMP dword ptr [EBP + -0x8],EAX
005c9417  JL 0x005c9423
005c9419  MOV EDX,dword ptr [EBP + -0x18]
005c941c  MOV byte ptr [EDX + 0xe4],0x1
005c9423  MOV EAX,dword ptr [EBP + -0x8]
005c9426  MOV ESP,EBP
005c9428  POP EBP
005c9429  RET 0x8
