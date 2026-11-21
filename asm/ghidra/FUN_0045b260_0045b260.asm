; FUN_0045b260  0045b260
0045b260  PUSH EBP
0045b261  MOV EBP,ESP
0045b263  PUSH ECX
0045b264  MOV dword ptr [EBP + -0x4],ECX
0045b267  MOV EAX,dword ptr [EBP + -0x4]
0045b26a  MOV byte ptr [EAX + 0x4],0x0
0045b26e  MOV ECX,dword ptr [EBP + -0x4]
0045b271  MOV byte ptr [ECX + 0x6],0x0
0045b275  MOV EDX,dword ptr [EBP + -0x4]
0045b278  MOV byte ptr [EDX + 0x5],0x0
0045b27c  MOV EAX,dword ptr [EBP + -0x4]
0045b27f  MOV byte ptr [EAX + 0x7],0x0
0045b283  MOV ECX,dword ptr [EBP + -0x4]
0045b286  MOV byte ptr [ECX + 0x8],0x0
0045b28a  MOV EDX,dword ptr [EBP + -0x4]
0045b28d  MOV byte ptr [EDX + 0x9],0x0
0045b291  MOV EAX,dword ptr [EBP + -0x4]
0045b294  MOV byte ptr [EAX + 0xa],0x0
0045b298  CMP dword ptr [EBP + 0x8],0x0
0045b29c  JNZ 0x0045b2ca
0045b29e  MOV ECX,dword ptr [0x00790738]
0045b2a4  CALL 0x0045ffe0
0045b2a9  MOV ECX,dword ptr [EBP + 0x8]
0045b2ac  PUSH ECX
0045b2ad  PUSH 0x1
0045b2af  MOV EDX,dword ptr [0x00790734]
0045b2b5  MOV EAX,dword ptr [EDX + 0x4]
0045b2b8  MOV ECX,dword ptr [0x00790734]
0045b2be  MOV ECX,dword ptr [ECX + 0x4]
0045b2c1  MOV EDX,dword ptr [EAX]
0045b2c3  MOV EAX,dword ptr [EDX + 0x8]
0045b2c6  CALL EAX
0045b2c8  JMP 0x0045b2ec
0045b2ca  MOV ECX,dword ptr [EBP + 0x8]
0045b2cd  PUSH ECX
0045b2ce  PUSH 0x1f4
0045b2d3  MOV EDX,dword ptr [0x00790734]
0045b2d9  MOV EAX,dword ptr [EDX + 0x4]
0045b2dc  MOV ECX,dword ptr [0x00790734]
0045b2e2  MOV ECX,dword ptr [ECX + 0x4]
0045b2e5  MOV EDX,dword ptr [EAX]
0045b2e7  MOV EAX,dword ptr [EDX + 0x8]
0045b2ea  CALL EAX
0045b2ec  MOV ESP,EBP
0045b2ee  POP EBP
0045b2ef  RET 0x4
