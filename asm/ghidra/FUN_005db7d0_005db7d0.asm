; FUN_005db7d0  005db7d0
005db7d0  PUSH EBP
005db7d1  MOV EBP,ESP
005db7d3  PUSH -0x1
005db7d5  PUSH 0x6a92c3
005db7da  MOV EAX,FS:[0x0]
005db7e0  PUSH EAX
005db7e1  SUB ESP,0x10
005db7e4  MOV EAX,[0x00781870]
005db7e9  XOR EAX,EBP
005db7eb  PUSH EAX
005db7ec  LEA EAX,[EBP + -0xc]
005db7ef  MOV FS:[0x0],EAX
005db7f5  MOV dword ptr [EBP + -0x18],ECX
005db7f8  CMP dword ptr [0x007947ac],0x0
005db7ff  JNZ 0x005db870
005db801  PUSH 0x1bc
005db806  CALL 0x00686d82
005db80b  ADD ESP,0x4
005db80e  MOV dword ptr [EBP + -0x14],EAX
005db811  MOV dword ptr [EBP + -0x4],0x0
005db818  CMP dword ptr [EBP + -0x14],0x0
005db81c  JZ 0x005db82b
005db81e  MOV ECX,dword ptr [EBP + -0x14]
005db821  CALL 0x005cdad0
005db826  MOV dword ptr [EBP + -0x1c],EAX
005db829  JMP 0x005db832
005db82b  MOV dword ptr [EBP + -0x1c],0x0
005db832  MOV EAX,dword ptr [EBP + -0x1c]
005db835  MOV dword ptr [EBP + -0x10],EAX
005db838  MOV dword ptr [EBP + -0x4],0xffffffff
005db83f  MOV ECX,dword ptr [EBP + -0x10]
005db842  MOV dword ptr [0x007947ac],ECX
005db848  MOV EDX,dword ptr [0x007947ac]
005db84e  MOV EAX,dword ptr [EDX]
005db850  MOV ECX,dword ptr [0x007947ac]
005db856  MOV EDX,dword ptr [EAX + 0x3c]
005db859  CALL EDX
005db85b  MOV AX,word ptr [EBP + 0xc]
005db85f  PUSH EAX
005db860  MOV CX,word ptr [EBP + 0x8]
005db864  PUSH ECX
005db865  MOV ECX,dword ptr [0x007947ac]
005db86b  CALL 0x005f7340
005db870  MOV ECX,dword ptr [0x007947ac]
005db876  CALL 0x005f85d0
005db87b  MOV ECX,dword ptr [EBP + -0xc]
005db87e  MOV dword ptr FS:[0x0],ECX
005db885  POP ECX
005db886  MOV ESP,EBP
005db888  POP EBP
005db889  RET 0x8
