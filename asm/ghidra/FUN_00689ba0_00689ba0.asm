; FUN_00689ba0  00689ba0
00689ba0  PUSH EBP
00689ba1  MOV EBP,ESP
00689ba3  SUB ESP,0xc
00689ba6  MOV dword ptr [EBP + -0xc],ECX
00689ba9  MOV dword ptr [EBP + -0x4],0x0
00689bb0  MOV dword ptr [EBP + -0x8],0x0
00689bb7  JMP 0x00689bc2
00689bb9  MOV EAX,dword ptr [EBP + -0x8]
00689bbc  ADD EAX,0x1
00689bbf  MOV dword ptr [EBP + -0x8],EAX
00689bc2  MOV ECX,dword ptr [EBP + -0x8]
00689bc5  CMP ECX,dword ptr [0x01631bb4]
00689bcb  JGE 0x00689be9
00689bcd  MOV EDX,dword ptr [0x01631bc0]
00689bd3  ADD EDX,dword ptr [EBP + -0x8]
00689bd6  MOVZX EAX,byte ptr [EDX]
00689bd9  CMP EAX,0x1
00689bdc  JNZ 0x00689be7
00689bde  MOV ECX,dword ptr [EBP + -0x4]
00689be1  ADD ECX,0x1
00689be4  MOV dword ptr [EBP + -0x4],ECX
00689be7  JMP 0x00689bb9
00689be9  MOV EAX,dword ptr [EBP + -0x4]
00689bec  MOV ESP,EBP
00689bee  POP EBP
00689bef  RET
