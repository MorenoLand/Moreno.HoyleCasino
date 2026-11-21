; FUN_005fef90  005fef90
005fef90  PUSH EBP
005fef91  MOV EBP,ESP
005fef93  SUB ESP,0xc
005fef96  MOV dword ptr [EBP + -0x8],ECX
005fef99  MOV dword ptr [EBP + -0x4],0x0
005fefa0  JMP 0x005fefab
005fefa2  MOV EAX,dword ptr [EBP + -0x4]
005fefa5  ADD EAX,0x1
005fefa8  MOV dword ptr [EBP + -0x4],EAX
005fefab  MOV ECX,dword ptr [EBP + -0x8]
005fefae  CALL 0x005feda0
005fefb3  CMP dword ptr [EBP + -0x4],EAX
005fefb6  JGE 0x005fefd6
005fefb8  MOV ECX,dword ptr [EBP + -0x4]
005fefbb  PUSH ECX
005fefbc  MOV ECX,dword ptr [EBP + -0x8]
005fefbf  CALL 0x005ff080
005fefc4  MOV dword ptr [EBP + -0xc],EAX
005fefc7  MOV EDX,dword ptr [EBP + -0xc]
005fefca  MOV EAX,dword ptr [EDX]
005fefcc  MOV ECX,dword ptr [EBP + -0xc]
005fefcf  MOV EDX,dword ptr [EAX + 0x70]
005fefd2  CALL EDX
005fefd4  JMP 0x005fefa2
005fefd6  MOV ECX,dword ptr [EBP + -0x8]
005fefd9  CALL 0x005f87d0
005fefde  MOV ESP,EBP
005fefe0  POP EBP
005fefe1  RET
