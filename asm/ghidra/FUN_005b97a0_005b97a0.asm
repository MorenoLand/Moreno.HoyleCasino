; FUN_005b97a0  005b97a0
005b97a0  PUSH EBP
005b97a1  MOV EBP,ESP
005b97a3  SUB ESP,0x28
005b97a6  MOV dword ptr [EBP + -0x18],ECX
005b97a9  MOV EAX,dword ptr [EBP + -0x18]
005b97ac  MOV ECX,dword ptr [EAX + 0x20]
005b97af  MOV dword ptr [EBP + -0x4],ECX
005b97b2  MOV EDX,dword ptr [EBP + 0x8]
005b97b5  MOV dword ptr [EBP + -0x1c],EDX
005b97b8  CMP dword ptr [EBP + -0x1c],0x315927
005b97bf  JZ 0x005b97dc
005b97c1  CMP dword ptr [EBP + -0x1c],0x315928
005b97c8  JZ 0x005b98a0
005b97ce  CMP dword ptr [EBP + -0x1c],0x315929
005b97d5  JZ 0x005b982a
005b97d7  JMP 0x005b98b2
005b97dc  MOV EAX,dword ptr [EBP + -0x18]
005b97df  CMP dword ptr [EAX + 0x18],0x0
005b97e3  JZ 0x005b97f7
005b97e5  MOV ECX,dword ptr [EBP + -0x18]
005b97e8  MOV EDX,dword ptr [ECX + 0x1c]
005b97eb  PUSH EDX
005b97ec  MOV EAX,dword ptr [EBP + -0x18]
005b97ef  MOV ECX,dword ptr [EAX + 0x18]
005b97f2  CALL ECX
005b97f4  ADD ESP,0x4
005b97f7  MOV EDX,dword ptr [EBP + -0x18]
005b97fa  MOV dword ptr [EBP + -0xc],EDX
005b97fd  MOV EAX,dword ptr [EBP + -0xc]
005b9800  MOV dword ptr [EBP + -0x8],EAX
005b9803  CMP dword ptr [EBP + -0x8],0x0
005b9807  JZ 0x005b981c
005b9809  PUSH 0x1
005b980b  MOV ECX,dword ptr [EBP + -0x8]
005b980e  MOV EDX,dword ptr [ECX]
005b9810  MOV ECX,dword ptr [EBP + -0x8]
005b9813  MOV EAX,dword ptr [EDX]
005b9815  CALL EAX
005b9817  MOV dword ptr [EBP + -0x20],EAX
005b981a  JMP 0x005b9823
005b981c  MOV dword ptr [EBP + -0x20],0x0
005b9823  MOV AL,0x1
005b9825  JMP 0x005b98ee
005b982a  MOV ECX,dword ptr [EBP + -0x4]
005b982d  ADD ECX,0x1
005b9830  MOV dword ptr [EBP + -0x4],ECX
005b9833  MOV EDX,dword ptr [EBP + -0x18]
005b9836  ADD EDX,0x4
005b9839  MOV dword ptr [EBP + -0x10],EDX
005b983c  MOV EAX,dword ptr [EBP + -0x10]
005b983f  CMP dword ptr [EAX + 0x4],0x0
005b9843  JNZ 0x005b984e
005b9845  MOV dword ptr [EBP + -0x24],0x0
005b984c  JMP 0x005b9860
005b984e  MOV ECX,dword ptr [EBP + -0x10]
005b9851  MOV EDX,dword ptr [EBP + -0x10]
005b9854  MOV EAX,dword ptr [ECX + 0x8]
005b9857  SUB EAX,dword ptr [EDX + 0x4]
005b985a  SAR EAX,0x4
005b985d  MOV dword ptr [EBP + -0x24],EAX
005b9860  MOV ECX,dword ptr [EBP + -0x4]
005b9863  CMP ECX,dword ptr [EBP + -0x24]
005b9866  JL 0x005b989e
005b9868  MOV EDX,dword ptr [EBP + -0x18]
005b986b  ADD EDX,0x4
005b986e  MOV dword ptr [EBP + -0x14],EDX
005b9871  MOV EAX,dword ptr [EBP + -0x14]
005b9874  CMP dword ptr [EAX + 0x4],0x0
005b9878  JNZ 0x005b9883
005b987a  MOV dword ptr [EBP + -0x28],0x0
005b9881  JMP 0x005b9895
005b9883  MOV ECX,dword ptr [EBP + -0x14]
005b9886  MOV EDX,dword ptr [EBP + -0x14]
005b9889  MOV EAX,dword ptr [ECX + 0x8]
005b988c  SUB EAX,dword ptr [EDX + 0x4]
005b988f  SAR EAX,0x4
005b9892  MOV dword ptr [EBP + -0x28],EAX
005b9895  MOV ECX,dword ptr [EBP + -0x28]
005b9898  SUB ECX,0x1
005b989b  MOV dword ptr [EBP + -0x4],ECX
005b989e  JMP 0x005b98b2
005b98a0  MOV EDX,dword ptr [EBP + -0x4]
005b98a3  SUB EDX,0x1
005b98a6  MOV dword ptr [EBP + -0x4],EDX
005b98a9  JNS 0x005b98b2
005b98ab  MOV dword ptr [EBP + -0x4],0x0
005b98b2  MOV EAX,dword ptr [EBP + -0x18]
005b98b5  MOV ECX,dword ptr [EBP + -0x4]
005b98b8  CMP ECX,dword ptr [EAX + 0x20]
005b98bb  JZ 0x005b98ec
005b98bd  PUSH 0x0
005b98bf  MOV EDX,dword ptr [EBP + -0x18]
005b98c2  MOV EAX,dword ptr [EDX + 0x20]
005b98c5  PUSH EAX
005b98c6  MOV ECX,dword ptr [EBP + -0x18]
005b98c9  CALL 0x005b9900
005b98ce  MOV ECX,dword ptr [EBP + -0x18]
005b98d1  MOV EDX,dword ptr [EBP + -0x4]
005b98d4  MOV dword ptr [ECX + 0x20],EDX
005b98d7  PUSH 0x1
005b98d9  MOV EAX,dword ptr [EBP + -0x18]
005b98dc  MOV ECX,dword ptr [EAX + 0x20]
005b98df  PUSH ECX
005b98e0  MOV ECX,dword ptr [EBP + -0x18]
005b98e3  CALL 0x005b9900
005b98e8  MOV AL,0x1
005b98ea  JMP 0x005b98ee
005b98ec  XOR AL,AL
005b98ee  MOV ESP,EBP
005b98f0  POP EBP
005b98f1  RET 0x4
