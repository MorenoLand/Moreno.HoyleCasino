; FUN_0062aa90  0062aa90
0062aa90  PUSH EBP
0062aa91  MOV EBP,ESP
0062aa93  SUB ESP,0x8
0062aa96  MOV dword ptr [EBP + -0x8],ECX
0062aa99  MOV ECX,dword ptr [EBP + -0x8]
0062aa9c  CALL 0x0062ac30
0062aaa1  MOV dword ptr [EBP + -0x4],EAX
0062aaa4  CMP dword ptr [EBP + -0x4],0x0
0062aaa8  JZ 0x0062aabf
0062aaaa  MOV EAX,dword ptr [EBP + 0x8]
0062aaad  CMP EAX,dword ptr [EBP + -0x4]
0062aab0  JZ 0x0062aabf
0062aab2  MOV ECX,dword ptr [EBP + -0x8]
0062aab5  CALL 0x0062ace0
0062aaba  MOV dword ptr [EBP + -0x4],EAX
0062aabd  JMP 0x0062aaa4
0062aabf  MOV ECX,dword ptr [EBP + -0x4]
0062aac2  CMP ECX,dword ptr [EBP + 0x8]
0062aac5  JNZ 0x0062aada
0062aac7  MOV EDX,dword ptr [EBP + -0x8]
0062aaca  MOV EAX,dword ptr [EDX + 0x14]
0062aacd  PUSH EAX
0062aace  MOV ECX,dword ptr [EBP + 0xc]
0062aad1  PUSH ECX
0062aad2  MOV ECX,dword ptr [EBP + -0x8]
0062aad5  CALL 0x0062aae0
0062aada  MOV ESP,EBP
0062aadc  POP EBP
0062aadd  RET 0x8
