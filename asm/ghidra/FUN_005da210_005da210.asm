; FUN_005da210  005da210
005da210  PUSH EBP
005da211  MOV EBP,ESP
005da213  SUB ESP,0xc
005da216  MOV dword ptr [EBP + -0x8],ECX
005da219  CMP dword ptr [EBP + 0x8],0x0
005da21d  JL 0x005da239
005da21f  MOV EAX,[0x0162ee84]
005da224  MOV EDX,dword ptr [EAX]
005da226  MOV ECX,dword ptr [0x0162ee84]
005da22c  MOV EAX,dword ptr [EDX + 0x10c]
005da232  CALL EAX
005da234  CMP dword ptr [EBP + 0x8],EAX
005da237  JL 0x005da250
005da239  PUSH 0x3b0
005da23e  PUSH 0x6d43a4
005da243  PUSH 0x6d4408
005da248  CALL 0x005e9f20
005da24d  ADD ESP,0xc
005da250  MOV EDX,dword ptr [EBP + 0x8]
005da253  PUSH EDX
005da254  MOV ECX,dword ptr [0x0162ee84]
005da25a  CALL 0x00639110
005da25f  TEST EAX,EAX
005da261  JZ 0x005da278
005da263  MOV EAX,dword ptr [EBP + 0x8]
005da266  PUSH EAX
005da267  MOV ECX,dword ptr [0x0162ee84]
005da26d  CALL 0x00639110
005da272  CMP dword ptr [EAX + 0x18],0x0
005da276  JNZ 0x005da27d
005da278  OR EAX,0xffffffff
005da27b  JMP 0x005da2b9
005da27d  MOVZX ECX,byte ptr [EBP + 0xc]
005da281  NEG ECX
005da283  SBB ECX,ECX
005da285  AND ECX,0xffffffad
005da288  ADD ECX,0x5d
005da28b  MOV dword ptr [EBP + -0x4],ECX
005da28e  MOV EDX,dword ptr [EBP + 0x8]
005da291  PUSH EDX
005da292  MOV ECX,dword ptr [0x0162ee84]
005da298  CALL 0x00639110
005da29d  MOV EAX,dword ptr [EAX + 0x18]
005da2a0  MOV dword ptr [EBP + -0xc],EAX
005da2a3  MOV ECX,dword ptr [EBP + -0xc]
005da2a6  MOV EDX,dword ptr [ECX]
005da2a8  MOV ECX,dword ptr [EBP + -0xc]
005da2ab  MOV EAX,dword ptr [EDX + 0x4c]
005da2ae  CALL EAX
005da2b0  ADD EAX,dword ptr [EBP + -0x4]
005da2b3  MOV dword ptr [EBP + -0x4],EAX
005da2b6  MOV EAX,dword ptr [EBP + -0x4]
005da2b9  MOV ESP,EBP
005da2bb  POP EBP
005da2bc  RET 0x8
