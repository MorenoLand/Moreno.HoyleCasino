; FUN_005ee5e0  005ee5e0
005ee5e0  PUSH EBP
005ee5e1  MOV EBP,ESP
005ee5e3  SUB ESP,0x10
005ee5e6  MOV dword ptr [EBP + -0x10],ECX
005ee5e9  MOV EAX,dword ptr [EBP + -0x10]
005ee5ec  CMP dword ptr [EAX + 0x5c],0x0
005ee5f0  JZ 0x005ee614
005ee5f2  CMP dword ptr [EBP + 0x8],0x0
005ee5f6  JZ 0x005ee614
005ee5f8  MOV ECX,dword ptr [EBP + 0x8]
005ee5fb  PUSH ECX
005ee5fc  MOV EDX,dword ptr [EBP + -0x10]
005ee5ff  MOV EAX,dword ptr [EDX + 0x5c]
005ee602  PUSH EAX
005ee603  CALL 0x00686ec0
005ee608  ADD ESP,0x8
005ee60b  TEST EAX,EAX
005ee60d  JNZ 0x005ee614
005ee60f  JMP 0x005ee6ac
005ee614  CMP dword ptr [EBP + 0x8],0x0
005ee618  JZ 0x005ee624
005ee61a  MOV ECX,dword ptr [EBP + 0x8]
005ee61d  MOVSX EDX,byte ptr [ECX]
005ee620  TEST EDX,EDX
005ee622  JNZ 0x005ee631
005ee624  MOV EAX,dword ptr [EBP + -0x10]
005ee627  MOV dword ptr [EAX + 0xa0],0x0
005ee631  MOV ECX,dword ptr [EBP + -0x10]
005ee634  CMP dword ptr [ECX + 0x5c],0x0
005ee638  JZ 0x005ee659
005ee63a  MOV EDX,dword ptr [EBP + -0x10]
005ee63d  MOV EAX,dword ptr [EDX + 0x5c]
005ee640  MOV dword ptr [EBP + -0x8],EAX
005ee643  MOV ECX,dword ptr [EBP + -0x8]
005ee646  PUSH ECX
005ee647  CALL 0x00686cae
005ee64c  ADD ESP,0x4
005ee64f  MOV EDX,dword ptr [EBP + -0x10]
005ee652  MOV dword ptr [EDX + 0x5c],0x0
005ee659  CMP dword ptr [EBP + 0x8],0x0
005ee65d  JZ 0x005ee69c
005ee65f  MOV EAX,dword ptr [EBP + 0x8]
005ee662  PUSH EAX
005ee663  CALL 0x00686ecc
005ee668  ADD ESP,0x4
005ee66b  MOV dword ptr [EBP + -0x4],EAX
005ee66e  MOV ECX,dword ptr [EBP + -0x4]
005ee671  ADD ECX,0x1
005ee674  PUSH ECX
005ee675  CALL 0x00686d82
005ee67a  ADD ESP,0x4
005ee67d  MOV dword ptr [EBP + -0xc],EAX
005ee680  MOV EDX,dword ptr [EBP + -0x10]
005ee683  MOV EAX,dword ptr [EBP + -0xc]
005ee686  MOV dword ptr [EDX + 0x5c],EAX
005ee689  MOV ECX,dword ptr [EBP + 0x8]
005ee68c  PUSH ECX
005ee68d  MOV EDX,dword ptr [EBP + -0x10]
005ee690  MOV EAX,dword ptr [EDX + 0x5c]
005ee693  PUSH EAX
005ee694  CALL 0x00686d8e
005ee699  ADD ESP,0x8
005ee69c  MOV ECX,dword ptr [EBP + -0x10]
005ee69f  MOV EDX,dword ptr [ECX]
005ee6a1  MOV ECX,dword ptr [EBP + -0x10]
005ee6a4  MOV EAX,dword ptr [EDX + 0xac]
005ee6aa  CALL EAX
005ee6ac  MOV ESP,EBP
005ee6ae  POP EBP
005ee6af  RET 0x4
