; FUN_006124aa  006124aa
006124aa  MOV dword ptr [EBP + -0x4],0x0
006124b1  MOV EDX,dword ptr [EBP + 0x10]
006124b4  IMUL EDX,EDX,0x48
006124b7  MOV EAX,dword ptr [EBP + 0xfffffd6c]
006124bd  ADD EDX,dword ptr [EAX + 0x8]
006124c0  MOV ECX,dword ptr [EBP + 0xfffffd6c]
006124c6  MOV dword ptr [ECX + 0x8],EDX
006124c9  MOV EDX,dword ptr [EBP + 0x10]
006124cc  IMUL EDX,EDX,0x48
006124cf  MOV EAX,dword ptr [EBP + 0xfffffd6c]
006124d5  MOV ECX,dword ptr [EAX + 0x8]
006124d8  SUB ECX,EDX
006124da  MOV dword ptr [EBP + 0xfffffe18],ECX
006124e0  MOV EDX,dword ptr [EBP + 0xc]
006124e3  MOV dword ptr [EBP + 0xfffffe1c],EDX
006124e9  MOV EAX,dword ptr [EBP + 0xfffffe18]
006124ef  MOV dword ptr [EBP + 0xfffffe28],EAX
006124f5  MOV ECX,dword ptr [EBP + 0xfffffe1c]
006124fb  MOV dword ptr [EBP + 0xfffffe20],ECX
00612501  JMP 0x00612512
00612503  MOV EDX,dword ptr [EBP + 0xfffffe20]
00612509  ADD EDX,0x48
0061250c  MOV dword ptr [EBP + 0xfffffe20],EDX
00612512  MOV EAX,dword ptr [EBP + 0xfffffe20]
00612518  CMP EAX,dword ptr [EBP + 0xfffffe28]
0061251e  JZ 0x00612531
00612520  LEA ECX,[EBP + -0x58]
00612523  PUSH ECX
00612524  MOV ECX,dword ptr [EBP + 0xfffffe20]
0061252a  CALL 0x00610650
0061252f  JMP 0x00612503
00612531  JMP 0x00612661
