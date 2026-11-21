; FUN_005eb4f0  005eb4f0
005eb4f0  PUSH EBP
005eb4f1  MOV EBP,ESP
005eb4f3  SUB ESP,0xc
005eb4f6  PUSH ESI
005eb4f7  MOV dword ptr [EBP + -0xc],ECX
005eb4fa  MOV EAX,dword ptr [EBP + -0xc]
005eb4fd  MOV EDX,dword ptr [EAX]
005eb4ff  MOV ECX,dword ptr [EBP + -0xc]
005eb502  MOV EAX,dword ptr [EDX + 0x4c]
005eb505  CALL EAX
005eb507  MOV ESI,EAX
005eb509  MOV ECX,dword ptr [EBP + -0xc]
005eb50c  CALL 0x005eb470
005eb511  ADD ESI,EAX
005eb513  MOV ECX,dword ptr [EBP + -0xc]
005eb516  CALL 0x005f5550
005eb51b  CDQ
005eb51c  SUB EAX,EDX
005eb51e  SAR EAX,0x1
005eb520  ADD ESI,EAX
005eb522  MOV dword ptr [EBP + -0x8],ESI
005eb525  MOV ECX,dword ptr [EBP + -0xc]
005eb528  MOV EDX,dword ptr [ECX]
005eb52a  MOV ECX,dword ptr [EBP + -0xc]
005eb52d  MOV EAX,dword ptr [EDX + 0x54]
005eb530  CALL EAX
005eb532  MOV ESI,EAX
005eb534  MOV ECX,dword ptr [EBP + -0xc]
005eb537  CALL 0x005eb4b0
005eb53c  ADD ESI,EAX
005eb53e  MOV ECX,dword ptr [EBP + -0xc]
005eb541  CALL 0x005f5590
005eb546  CDQ
005eb547  SUB EAX,EDX
005eb549  SAR EAX,0x1
005eb54b  ADD ESI,EAX
005eb54d  MOV dword ptr [EBP + -0x4],ESI
005eb550  MOV ECX,dword ptr [EBP + 0x8]
005eb553  MOV EDX,dword ptr [EBP + -0x8]
005eb556  MOV dword ptr [ECX],EDX
005eb558  MOV EAX,dword ptr [EBP + -0x4]
005eb55b  MOV dword ptr [ECX + 0x4],EAX
005eb55e  MOV EAX,dword ptr [EBP + 0x8]
005eb561  POP ESI
005eb562  MOV ESP,EBP
005eb564  POP EBP
005eb565  RET 0x4
