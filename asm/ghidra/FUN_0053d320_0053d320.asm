; FUN_0053d320  0053d320
0053d320  PUSH EBP
0053d321  MOV EBP,ESP
0053d323  PUSH ECX
0053d324  MOV dword ptr [EBP + -0x4],ECX
0053d327  MOV EAX,dword ptr [EBP + -0x4]
0053d32a  MOV byte ptr [EAX + 0x4],0x0
0053d32e  MOV ECX,dword ptr [EBP + -0x4]
0053d331  MOV byte ptr [ECX + 0x5],0x0
0053d335  MOV EDX,dword ptr [EBP + -0x4]
0053d338  MOV byte ptr [EDX + 0x7],0x0
0053d33c  MOV EAX,dword ptr [EBP + -0x4]
0053d33f  MOV byte ptr [EAX + 0x8],0x0
0053d343  MOV ECX,dword ptr [EBP + -0x4]
0053d346  MOV byte ptr [ECX + 0x9],0x0
0053d34a  MOV EDX,dword ptr [EBP + -0x4]
0053d34d  MOV byte ptr [EDX + 0x6],0x0
0053d351  MOV EAX,dword ptr [EBP + -0x4]
0053d354  MOV byte ptr [EAX + 0xa],0x0
0053d358  MOV ECX,dword ptr [EBP + -0x4]
0053d35b  MOV byte ptr [ECX + 0xb],0x0
0053d35f  CMP dword ptr [EBP + 0x8],0x0
0053d363  JNZ 0x0053d392
0053d365  MOV ECX,dword ptr [0x007933ec]
0053d36b  CALL 0x005408b0
0053d370  MOV EDX,dword ptr [EBP + 0x8]
0053d373  PUSH EDX
0053d374  PUSH 0x1
0053d376  MOV EAX,[0x007933e8]
0053d37b  MOV ECX,dword ptr [EAX + 0x4]
0053d37e  MOV EDX,dword ptr [0x007933e8]
0053d384  MOV EAX,dword ptr [EDX + 0x4]
0053d387  MOV EDX,dword ptr [ECX]
0053d389  MOV ECX,EAX
0053d38b  MOV EAX,dword ptr [EDX + 0x8]
0053d38e  CALL EAX
0053d390  JMP 0x0053d3b4
0053d392  MOV ECX,dword ptr [EBP + 0x8]
0053d395  PUSH ECX
0053d396  PUSH 0x1f4
0053d39b  MOV EDX,dword ptr [0x007933e8]
0053d3a1  MOV EAX,dword ptr [EDX + 0x4]
0053d3a4  MOV ECX,dword ptr [0x007933e8]
0053d3aa  MOV ECX,dword ptr [ECX + 0x4]
0053d3ad  MOV EDX,dword ptr [EAX]
0053d3af  MOV EAX,dword ptr [EDX + 0x8]
0053d3b2  CALL EAX
0053d3b4  MOV ESP,EBP
0053d3b6  POP EBP
0053d3b7  RET 0x4
