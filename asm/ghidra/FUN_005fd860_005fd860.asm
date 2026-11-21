; FUN_005fd860  005fd860
005fd860  PUSH EBP
005fd861  MOV EBP,ESP
005fd863  PUSH -0x1
005fd865  PUSH 0x6aa683
005fd86a  MOV EAX,FS:[0x0]
005fd870  PUSH EAX
005fd871  SUB ESP,0x8
005fd874  MOV EAX,[0x00781870]
005fd879  XOR EAX,EBP
005fd87b  PUSH EAX
005fd87c  LEA EAX,[EBP + -0xc]
005fd87f  MOV FS:[0x0],EAX
005fd885  MOV dword ptr [EBP + -0x14],ECX
005fd888  PUSH 0x1e0
005fd88d  PUSH 0x280
005fd892  MOV EAX,dword ptr [EBP + 0x10]
005fd895  PUSH EAX
005fd896  MOV CL,byte ptr [EBP + 0xc]
005fd899  PUSH ECX
005fd89a  MOV ECX,dword ptr [EBP + -0x14]
005fd89d  CALL 0x005f7670
005fd8a2  MOV dword ptr [EBP + -0x4],0x0
005fd8a9  MOV EDX,dword ptr [EBP + -0x14]
005fd8ac  MOV dword ptr [EDX],0x6d70bc
005fd8b2  PUSH -0x1
005fd8b4  MOV ECX,dword ptr [EBP + -0x14]
005fd8b7  CALL 0x005f89d0
005fd8bc  MOV EAX,dword ptr [EBP + -0x14]
005fd8bf  MOV ECX,dword ptr [EBP + 0x8]
005fd8c2  MOV dword ptr [EAX + 0x1b4],ECX
005fd8c8  MOV EDX,dword ptr [EBP + -0x14]
005fd8cb  MOV dword ptr [EDX + 0x1b8],0xffffffff
005fd8d5  MOV EAX,dword ptr [EBP + -0x14]
005fd8d8  MOV dword ptr [EAX + 0x1bc],0x0
005fd8e2  MOV ECX,dword ptr [EBP + -0x14]
005fd8e5  MOV dword ptr [ECX + 0x1c0],0x0
005fd8ef  MOV EDX,dword ptr [EBP + -0x14]
005fd8f2  MOV dword ptr [EDX + 0x1c4],0xffffffff
005fd8fc  MOV dword ptr [EBP + -0x10],0x0
005fd903  JMP 0x005fd90e
005fd905  MOV EAX,dword ptr [EBP + -0x10]
005fd908  ADD EAX,0x1
005fd90b  MOV dword ptr [EBP + -0x10],EAX
005fd90e  CMP dword ptr [EBP + -0x10],0x64
005fd912  JGE 0x005fd927
005fd914  MOV ECX,dword ptr [EBP + -0x10]
005fd917  MOV EDX,dword ptr [EBP + -0x14]
005fd91a  MOV dword ptr [EDX + ECX*0x4 + 0x1c8],0xffffffff
005fd925  JMP 0x005fd905
005fd927  MOV dword ptr [EBP + -0x4],0xffffffff
005fd92e  MOV EAX,dword ptr [EBP + -0x14]
005fd931  MOV ECX,dword ptr [EBP + -0xc]
005fd934  MOV dword ptr FS:[0x0],ECX
005fd93b  POP ECX
005fd93c  MOV ESP,EBP
005fd93e  POP EBP
005fd93f  RET 0xc
