; FUN_0065a750  0065a750
0065a750  PUSH EBP
0065a751  MOV EBP,ESP
0065a753  SUB ESP,0x8
0065a756  MOV dword ptr [EBP + -0x8],ECX
0065a759  MOV ECX,dword ptr [EBP + -0x8]
0065a75c  CALL 0x006060a0
0065a761  MOV EAX,dword ptr [EBP + -0x8]
0065a764  MOV dword ptr [EAX],0x6de564
0065a76a  MOV dword ptr [EBP + -0x4],0x0
0065a771  JMP 0x0065a77c
0065a773  MOV ECX,dword ptr [EBP + -0x4]
0065a776  ADD ECX,0x1
0065a779  MOV dword ptr [EBP + -0x4],ECX
0065a77c  CMP dword ptr [EBP + -0x4],0x3
0065a780  JGE 0x0065a7a6
0065a782  MOV EDX,dword ptr [EBP + -0x4]
0065a785  MOV EAX,dword ptr [EBP + -0x8]
0065a788  MOV dword ptr [EAX + EDX*0x4 + 0x218],0x0
0065a793  MOV ECX,dword ptr [EBP + -0x4]
0065a796  MOV EDX,dword ptr [EBP + -0x8]
0065a799  MOV dword ptr [EDX + ECX*0x4 + 0x224],0x0
0065a7a4  JMP 0x0065a773
0065a7a6  MOV EAX,dword ptr [EBP + -0x8]
0065a7a9  MOV dword ptr [EAX + 0x230],0x0
0065a7b3  MOV ECX,dword ptr [EBP + -0x8]
0065a7b6  MOV dword ptr [ECX + 0x234],0x0
0065a7c0  MOV EDX,dword ptr [EBP + -0x8]
0065a7c3  MOV dword ptr [EDX + 0x238],0x0
0065a7cd  MOV EAX,dword ptr [EBP + -0x8]
0065a7d0  MOV dword ptr [EAX + 0x210],0xffffffff
0065a7da  MOV EAX,dword ptr [EBP + -0x8]
0065a7dd  MOV ESP,EBP
0065a7df  POP EBP
0065a7e0  RET
