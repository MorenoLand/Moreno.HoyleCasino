; FUN_005ea5b0  005ea5b0
005ea5b0  PUSH EBP
005ea5b1  MOV EBP,ESP
005ea5b3  PUSH ECX
005ea5b4  CMP dword ptr [EBP + 0x8],0x0
005ea5b8  JZ 0x005ea5c4
005ea5ba  MOV EAX,dword ptr [EBP + 0x8]
005ea5bd  MOVSX ECX,byte ptr [EAX]
005ea5c0  TEST ECX,ECX
005ea5c2  JNZ 0x005ea5cc
005ea5c4  MOV EAX,dword ptr [EBP + 0x8]
005ea5c7  JMP 0x005ea66e
005ea5cc  MOV EDX,dword ptr [EBP + 0x8]
005ea5cf  MOVSX EAX,byte ptr [EDX]
005ea5d2  CMP EAX,0x5c
005ea5d5  JNZ 0x005ea5ee
005ea5d7  MOV ECX,dword ptr [EBP + 0x8]
005ea5da  MOVSX EDX,byte ptr [ECX + 0x1]
005ea5de  CMP EDX,0x5c
005ea5e1  JNZ 0x005ea5ee
005ea5e3  MOV EAX,dword ptr [EBP + 0x8]
005ea5e6  ADD EAX,0x2
005ea5e9  MOV dword ptr [EBP + -0x4],EAX
005ea5ec  JMP 0x005ea5f4
005ea5ee  MOV ECX,dword ptr [EBP + 0x8]
005ea5f1  MOV dword ptr [EBP + -0x4],ECX
005ea5f4  MOV EDX,dword ptr [EBP + -0x4]
005ea5f7  MOVSX EAX,byte ptr [EDX]
005ea5fa  TEST EAX,EAX
005ea5fc  JZ 0x005ea646
005ea5fe  MOV ECX,dword ptr [EBP + -0x4]
005ea601  MOVSX EDX,byte ptr [ECX]
005ea604  CMP EDX,0x5c
005ea607  JNZ 0x005ea63b
005ea609  MOV EAX,dword ptr [EBP + -0x4]
005ea60c  MOVSX ECX,byte ptr [EAX + 0x1]
005ea610  CMP ECX,0x5c
005ea613  JNZ 0x005ea63b
005ea615  MOV EDX,dword ptr [EBP + -0x4]
005ea618  ADD EDX,0x1
005ea61b  PUSH EDX
005ea61c  CALL 0x00686ecc
005ea621  ADD ESP,0x4
005ea624  ADD EAX,0x1
005ea627  PUSH EAX
005ea628  MOV EAX,dword ptr [EBP + -0x4]
005ea62b  ADD EAX,0x1
005ea62e  PUSH EAX
005ea62f  MOV ECX,dword ptr [EBP + -0x4]
005ea632  PUSH ECX
005ea633  CALL 0x00686fde
005ea638  ADD ESP,0xc
005ea63b  MOV EDX,dword ptr [EBP + -0x4]
005ea63e  ADD EDX,0x1
005ea641  MOV dword ptr [EBP + -0x4],EDX
005ea644  JMP 0x005ea5f4
005ea646  MOV EAX,dword ptr [EBP + -0x4]
005ea649  SUB EAX,0x1
005ea64c  MOV dword ptr [EBP + -0x4],EAX
005ea64f  MOV ECX,dword ptr [EBP + -0x4]
005ea652  MOVSX EDX,byte ptr [ECX]
005ea655  CMP EDX,0x20
005ea658  JNZ 0x005ea66b
005ea65a  MOV EAX,dword ptr [EBP + -0x4]
005ea65d  MOV byte ptr [EAX],0x0
005ea660  MOV ECX,dword ptr [EBP + -0x4]
005ea663  SUB ECX,0x1
005ea666  MOV dword ptr [EBP + -0x4],ECX
005ea669  JMP 0x005ea64f
005ea66b  MOV EAX,dword ptr [EBP + 0x8]
005ea66e  MOV ESP,EBP
005ea670  POP EBP
005ea671  RET
