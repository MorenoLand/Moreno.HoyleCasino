; FUN_005ca640  005ca640
005ca640  PUSH EBP
005ca641  MOV EBP,ESP
005ca643  SUB ESP,0x8
005ca646  MOV dword ptr [EBP + -0x8],ECX
005ca649  CMP dword ptr [EBP + 0x8],0x1
005ca64d  JNZ 0x005ca66a
005ca64f  MOV EAX,dword ptr [EBP + -0x8]
005ca652  MOV ECX,dword ptr [EAX + 0x10]
005ca655  MOV EDX,dword ptr [EBP + -0x8]
005ca658  FILD dword ptr [EDX + 0x30]
005ca65b  FCOMP double ptr [ECX + 0x1e0]
005ca661  FNSTSW AX
005ca663  TEST AH,0x44
005ca666  JP 0x005ca66a
005ca668  JMP 0x005ca6b2
005ca66a  MOV dword ptr [EBP + -0x4],0x0
005ca671  JMP 0x005ca67c
005ca673  MOV EAX,dword ptr [EBP + -0x4]
005ca676  ADD EAX,0x1
005ca679  MOV dword ptr [EBP + -0x4],EAX
005ca67c  CMP dword ptr [EBP + -0x4],0x4
005ca680  JGE 0x005ca697
005ca682  MOV ECX,dword ptr [EBP + 0x8]
005ca685  PUSH ECX
005ca686  MOV EDX,dword ptr [EBP + -0x4]
005ca689  MOV EAX,dword ptr [EBP + -0x8]
005ca68c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x4]
005ca690  CALL 0x005cad50
005ca695  JMP 0x005ca673
005ca697  MOV ECX,dword ptr [EBP + -0x8]
005ca69a  CALL 0x005ca570
005ca69f  MOV ECX,dword ptr [EBP + -0x8]
005ca6a2  MOVZX EDX,byte ptr [ECX + 0x28]
005ca6a6  TEST EDX,EDX
005ca6a8  JZ 0x005ca6b2
005ca6aa  MOV ECX,dword ptr [EBP + -0x8]
005ca6ad  CALL 0x005ca7b0
005ca6b2  MOV ESP,EBP
005ca6b4  POP EBP
005ca6b5  RET 0x4
