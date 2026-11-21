; FUN_0047bac0  0047bac0
0047bac0  PUSH EBP
0047bac1  MOV EBP,ESP
0047bac3  PUSH ECX
0047bac4  MOV dword ptr [EBP + -0x4],ECX
0047bac7  PUSH 0x0
0047bac9  MOV EAX,dword ptr [EBP + -0x4]
0047bacc  MOV ECX,dword ptr [EAX + 0x488]
0047bad2  PUSH ECX
0047bad3  MOV ECX,dword ptr [EBP + -0x4]
0047bad6  CALL 0x0047e390
0047badb  MOV ECX,EAX
0047badd  CALL 0x004c70b0
0047bae2  MOV ECX,dword ptr [EBP + -0x4]
0047bae5  CALL 0x0047f950
0047baea  SUB EAX,0x1
0047baed  MOV EDX,dword ptr [EBP + -0x4]
0047baf0  CMP dword ptr [EDX + 0x488],EAX
0047baf6  JGE 0x0047bb21
0047baf8  MOV EAX,dword ptr [EBP + -0x4]
0047bafb  MOV ECX,dword ptr [EAX + 0x488]
0047bb01  ADD ECX,0x1
0047bb04  MOV EDX,dword ptr [EBP + -0x4]
0047bb07  MOV dword ptr [EDX + 0x488],ECX
0047bb0d  MOV EAX,dword ptr [EBP + -0x4]
0047bb10  MOV ECX,dword ptr [EBP + -0x4]
0047bb13  MOV EDX,dword ptr [ECX + 0x488]
0047bb19  MOV dword ptr [EAX + 0x488],EDX
0047bb1f  JMP 0x0047bb2e
0047bb21  MOV EAX,dword ptr [EBP + -0x4]
0047bb24  MOV dword ptr [EAX + 0x488],0x0
0047bb2e  MOV ECX,dword ptr [EBP + -0x4]
0047bb31  MOV EDX,dword ptr [ECX + 0x488]
0047bb37  PUSH EDX
0047bb38  MOV ECX,dword ptr [EBP + -0x4]
0047bb3b  CALL 0x0047e390
0047bb40  MOV ECX,EAX
0047bb42  CALL 0x004c6cb0
0047bb47  TEST EAX,EAX
0047bb49  JNZ 0x0047bb99
0047bb4b  MOV ECX,dword ptr [EBP + -0x4]
0047bb4e  CALL 0x0047f950
0047bb53  SUB EAX,0x1
0047bb56  MOV ECX,dword ptr [EBP + -0x4]
0047bb59  CMP dword ptr [ECX + 0x488],EAX
0047bb5f  JGE 0x0047bb8a
0047bb61  MOV EDX,dword ptr [EBP + -0x4]
0047bb64  MOV EAX,dword ptr [EDX + 0x488]
0047bb6a  ADD EAX,0x1
0047bb6d  MOV ECX,dword ptr [EBP + -0x4]
0047bb70  MOV dword ptr [ECX + 0x488],EAX
0047bb76  MOV EDX,dword ptr [EBP + -0x4]
0047bb79  MOV EAX,dword ptr [EBP + -0x4]
0047bb7c  MOV ECX,dword ptr [EAX + 0x488]
0047bb82  MOV dword ptr [EDX + 0x488],ECX
0047bb88  JMP 0x0047bb97
0047bb8a  MOV EDX,dword ptr [EBP + -0x4]
0047bb8d  MOV dword ptr [EDX + 0x488],0x0
0047bb97  JMP 0x0047bb2e
0047bb99  PUSH 0x1
0047bb9b  MOV EAX,dword ptr [EBP + -0x4]
0047bb9e  MOV ECX,dword ptr [EAX + 0x488]
0047bba4  PUSH ECX
0047bba5  MOV ECX,dword ptr [EBP + -0x4]
0047bba8  CALL 0x0047e390
0047bbad  MOV ECX,EAX
0047bbaf  CALL 0x004c70b0
0047bbb4  MOV ESP,EBP
0047bbb6  POP EBP
0047bbb7  RET
