; FUN_0056aa50  0056aa50
0056aa50  PUSH EBP
0056aa51  MOV EBP,ESP
0056aa53  SUB ESP,0x10
0056aa56  MOV dword ptr [EBP + -0x10],ECX
0056aa59  MOV EAX,[0x0079343c]
0056aa5e  MOV ECX,dword ptr [EAX + 0x34]
0056aa61  CALL 0x0056b910
0056aa66  MOV ECX,dword ptr [0x0079343c]
0056aa6c  MOV EDX,dword ptr [ECX + 0x34]
0056aa6f  MOV dword ptr [EDX + 0x2e4],EAX
0056aa75  MOV dword ptr [EBP + -0x4],0x0
0056aa7c  JMP 0x0056aa87
0056aa7e  MOV EAX,dword ptr [EBP + -0x4]
0056aa81  ADD EAX,0x1
0056aa84  MOV dword ptr [EBP + -0x4],EAX
0056aa87  CMP dword ptr [EBP + -0x4],0x5
0056aa8b  JGE 0x0056aa9f
0056aa8d  MOV ECX,dword ptr [EBP + -0x4]
0056aa90  MOV EDX,dword ptr [EBP + -0x10]
0056aa93  MOV word ptr [EDX + ECX*0x2 + 0x3ac],0x0
0056aa9d  JMP 0x0056aa7e
0056aa9f  MOV dword ptr [EBP + -0x4],0x0
0056aaa6  JMP 0x0056aab1
0056aaa8  MOV EAX,dword ptr [EBP + -0x4]
0056aaab  ADD EAX,0x1
0056aaae  MOV dword ptr [EBP + -0x4],EAX
0056aab1  CMP dword ptr [EBP + -0x4],0x31
0056aab5  JGE 0x0056ab15
0056aab7  PUSH 0x0
0056aab9  MOV ECX,dword ptr [EBP + -0x4]
0056aabc  PUSH ECX
0056aabd  MOV ECX,dword ptr [EBP + -0x10]
0056aac0  CALL 0x0056b950
0056aac5  MOVZX EDX,AL
0056aac8  TEST EDX,EDX
0056aaca  JNZ 0x0056aace
0056aacc  JMP 0x0056aaa8
0056aace  MOV dword ptr [EBP + -0xc],0x0
0056aad5  JMP 0x0056aae0
0056aad7  MOV EAX,dword ptr [EBP + -0xc]
0056aada  ADD EAX,0x1
0056aadd  MOV dword ptr [EBP + -0xc],EAX
0056aae0  CMP dword ptr [EBP + -0xc],0x5
0056aae4  JGE 0x0056ab13
0056aae6  MOV ECX,dword ptr [EBP + -0x4]
0056aae9  MOV EDX,dword ptr [EBP + -0x10]
0056aaec  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x2e8]
0056aaf3  CALL 0x006436c0
0056aaf8  MOV word ptr [EBP + -0x8],AX
0056aafc  MOV AX,word ptr [EBP + -0x8]
0056ab00  PUSH EAX
0056ab01  MOV ECX,dword ptr [EBP + -0xc]
0056ab04  PUSH ECX
0056ab05  MOV EDX,dword ptr [EBP + -0x4]
0056ab08  PUSH EDX
0056ab09  MOV ECX,dword ptr [EBP + -0x10]
0056ab0c  CALL 0x0056b460
0056ab11  JMP 0x0056aad7
0056ab13  JMP 0x0056aaa8
0056ab15  PUSH 0x6ca230
0056ab1a  CALL 0x0062fde0
0056ab1f  ADD ESP,0x4
0056ab22  MOV ECX,dword ptr [EBP + -0x10]
0056ab25  CALL 0x0056b260
0056ab2a  MOV ESP,EBP
0056ab2c  POP EBP
0056ab2d  RET
