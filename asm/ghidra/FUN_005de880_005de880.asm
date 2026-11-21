; FUN_005de880  005de880
005de880  PUSH EBP
005de881  MOV EBP,ESP
005de883  SUB ESP,0x8
005de886  MOV dword ptr [EBP + -0x4],ECX
005de889  MOV EAX,dword ptr [EBP + 0x8]
005de88c  MOV dword ptr [EBP + -0x8],EAX
005de88f  CMP dword ptr [EBP + -0x8],0x64
005de893  JA 0x005de8f1
005de895  MOV ECX,dword ptr [EBP + -0x8]
005de898  MOVZX EDX,byte ptr [ECX + 0x5de92c]
005de89f  JMP dword ptr [EDX*0x4 + 0x5de914]
005de8a6  MOV EAX,dword ptr [EBP + -0x4]
005de8a9  MOV dword ptr [EAX + 0x4ed0],0x9c4
005de8b3  JMP 0x005de90c
005de8b5  MOV ECX,dword ptr [EBP + -0x4]
005de8b8  MOV dword ptr [ECX + 0x4ed4],0x2710
005de8c2  JMP 0x005de90c
005de8c4  MOV EDX,dword ptr [EBP + -0x4]
005de8c7  MOV dword ptr [EDX + 0x4ed8],0xc350
005de8d1  JMP 0x005de90c
005de8d3  MOV EAX,dword ptr [EBP + -0x4]
005de8d6  MOV dword ptr [EAX + 0x4edc],0x186a0
005de8e0  JMP 0x005de90c
005de8e2  MOV ECX,dword ptr [EBP + -0x4]
005de8e5  MOV dword ptr [ECX + 0x4ee0],0xf4240
005de8ef  JMP 0x005de90c
005de8f1  XOR EDX,EDX
005de8f3  JNZ 0x005de90c
005de8f5  PUSH 0x391
005de8fa  PUSH 0x6d4b54
005de8ff  PUSH 0x6b2f58
005de904  CALL 0x005e9f20
005de909  ADD ESP,0xc
005de90c  MOV ESP,EBP
005de90e  POP EBP
005de90f  RET 0x4
