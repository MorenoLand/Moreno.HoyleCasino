; FUN_005fe640  005fe640
005fe640  PUSH EBP
005fe641  MOV EBP,ESP
005fe643  SUB ESP,0x28
005fe646  MOV dword ptr [EBP + -0x20],ECX
005fe649  MOV dword ptr [EBP + -0x4],0x0
005fe650  CMP dword ptr [EBP + 0xc],0x0
005fe654  JLE 0x005fe6ff
005fe65a  MOV dword ptr [EBP + -0xc],0x0
005fe661  MOV dword ptr [EBP + -0x8],0x0
005fe668  MOV EAX,dword ptr [EBP + -0x8]
005fe66b  CMP EAX,dword ptr [EBP + 0xc]
005fe66e  JGE 0x005fe6ae
005fe670  MOV ECX,dword ptr [EBP + -0x20]
005fe673  ADD ECX,0x14
005fe676  CALL 0x0060c9a0
005fe67b  CMP dword ptr [EBP + -0xc],EAX
005fe67e  JGE 0x005fe6ae
005fe680  MOV ECX,dword ptr [EBP + -0xc]
005fe683  PUSH ECX
005fe684  MOV ECX,dword ptr [EBP + -0x20]
005fe687  CALL 0x005ff080
005fe68c  MOV dword ptr [EBP + -0x4],EAX
005fe68f  MOV EDX,dword ptr [EBP + -0x4]
005fe692  MOV EAX,dword ptr [EDX + 0xc]
005fe695  CMP EAX,dword ptr [EBP + 0x8]
005fe698  JNZ 0x005fe6a3
005fe69a  MOV ECX,dword ptr [EBP + -0x8]
005fe69d  ADD ECX,0x1
005fe6a0  MOV dword ptr [EBP + -0x8],ECX
005fe6a3  MOV EDX,dword ptr [EBP + -0xc]
005fe6a6  ADD EDX,0x1
005fe6a9  MOV dword ptr [EBP + -0xc],EDX
005fe6ac  JMP 0x005fe668
005fe6ae  MOV EAX,dword ptr [EBP + -0x8]
005fe6b1  CMP EAX,dword ptr [EBP + 0xc]
005fe6b4  JNZ 0x005fe6fd
005fe6b6  MOV ECX,dword ptr [EBP + -0x4]
005fe6b9  PUSH ECX
005fe6ba  MOV ECX,dword ptr [EBP + -0x20]
005fe6bd  ADD ECX,0x14
005fe6c0  CALL 0x0060c890
005fe6c5  MOV EDX,dword ptr [EBP + -0x4]
005fe6c8  MOV dword ptr [EBP + -0x14],EDX
005fe6cb  MOV EAX,dword ptr [EBP + -0x14]
005fe6ce  MOV dword ptr [EBP + -0x10],EAX
005fe6d1  CMP dword ptr [EBP + -0x10],0x0
005fe6d5  JZ 0x005fe6ea
005fe6d7  PUSH 0x1
005fe6d9  MOV ECX,dword ptr [EBP + -0x10]
005fe6dc  MOV EDX,dword ptr [ECX]
005fe6de  MOV ECX,dword ptr [EBP + -0x10]
005fe6e1  MOV EAX,dword ptr [EDX]
005fe6e3  CALL EAX
005fe6e5  MOV dword ptr [EBP + -0x24],EAX
005fe6e8  JMP 0x005fe6f1
005fe6ea  MOV dword ptr [EBP + -0x24],0x0
005fe6f1  MOV ECX,dword ptr [EBP + -0x20]
005fe6f4  CALL 0x005fdd10
005fe6f9  MOV AL,0x1
005fe6fb  JMP 0x005fe75d
005fe6fd  JMP 0x005fe75b
005fe6ff  MOV ECX,dword ptr [EBP + 0x8]
005fe702  PUSH ECX
005fe703  MOV ECX,dword ptr [EBP + -0x20]
005fe706  CALL 0x005ff060
005fe70b  MOV dword ptr [EBP + -0x4],EAX
005fe70e  CMP dword ptr [EBP + -0x4],0x0
005fe712  JZ 0x005fe75b
005fe714  MOV EDX,dword ptr [EBP + -0x4]
005fe717  PUSH EDX
005fe718  MOV ECX,dword ptr [EBP + -0x20]
005fe71b  ADD ECX,0x14
005fe71e  CALL 0x0060c890
005fe723  MOV EAX,dword ptr [EBP + -0x4]
005fe726  MOV dword ptr [EBP + -0x1c],EAX
005fe729  MOV ECX,dword ptr [EBP + -0x1c]
005fe72c  MOV dword ptr [EBP + -0x18],ECX
005fe72f  CMP dword ptr [EBP + -0x18],0x0
005fe733  JZ 0x005fe748
005fe735  PUSH 0x1
005fe737  MOV EDX,dword ptr [EBP + -0x18]
005fe73a  MOV EAX,dword ptr [EDX]
005fe73c  MOV ECX,dword ptr [EBP + -0x18]
005fe73f  MOV EDX,dword ptr [EAX]
005fe741  CALL EDX
005fe743  MOV dword ptr [EBP + -0x28],EAX
005fe746  JMP 0x005fe74f
005fe748  MOV dword ptr [EBP + -0x28],0x0
005fe74f  MOV ECX,dword ptr [EBP + -0x20]
005fe752  CALL 0x005fdd10
005fe757  MOV AL,0x1
005fe759  JMP 0x005fe75d
005fe75b  XOR AL,AL
005fe75d  MOV ESP,EBP
005fe75f  POP EBP
005fe760  RET 0x8
