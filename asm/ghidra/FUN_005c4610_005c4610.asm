; FUN_005c4610  005c4610
005c4610  PUSH EBP
005c4611  MOV EBP,ESP
005c4613  SUB ESP,0x28
005c4616  MOV dword ptr [EBP + -0x18],ECX
005c4619  MOV ECX,dword ptr [EBP + -0x18]
005c461c  CALL 0x005c1b10
005c4621  MOV EAX,dword ptr [EBP + -0x18]
005c4624  ADD EAX,0x58
005c4627  MOV dword ptr [EBP + -0xc],EAX
005c462a  MOV ECX,dword ptr [EBP + -0xc]
005c462d  CMP dword ptr [ECX + 0x4],0x0
005c4631  JNZ 0x005c463c
005c4633  MOV dword ptr [EBP + -0x1c],0x0
005c463a  JMP 0x005c4655
005c463c  MOV EDX,dword ptr [EBP + -0xc]
005c463f  MOV EAX,dword ptr [EBP + -0xc]
005c4642  MOV ECX,dword ptr [EDX + 0x8]
005c4645  SUB ECX,dword ptr [EAX + 0x4]
005c4648  MOV EAX,ECX
005c464a  CDQ
005c464b  MOV ECX,0x34
005c4650  IDIV ECX
005c4652  MOV dword ptr [EBP + -0x1c],EAX
005c4655  MOV EDX,dword ptr [EBP + -0x1c]
005c4658  MOV dword ptr [EBP + -0x4],EDX
005c465b  MOV dword ptr [EBP + -0x8],0x0
005c4662  JMP 0x005c466d
005c4664  MOV EAX,dword ptr [EBP + -0x8]
005c4667  ADD EAX,0x1
005c466a  MOV dword ptr [EBP + -0x8],EAX
005c466d  MOV ECX,dword ptr [EBP + -0x8]
005c4670  CMP ECX,dword ptr [EBP + -0x4]
005c4673  JGE 0x005c4733
005c4679  MOV EDX,dword ptr [EBP + -0x18]
005c467c  ADD EDX,0x58
005c467f  MOV dword ptr [EBP + -0x10],EDX
005c4682  MOV EAX,dword ptr [EBP + -0x10]
005c4685  CMP dword ptr [EAX + 0x4],0x0
005c4689  JNZ 0x005c4694
005c468b  MOV dword ptr [EBP + -0x20],0x0
005c4692  JMP 0x005c46ab
005c4694  MOV ECX,dword ptr [EBP + -0x10]
005c4697  MOV EDX,dword ptr [EBP + -0x10]
005c469a  MOV EAX,dword ptr [ECX + 0x8]
005c469d  SUB EAX,dword ptr [EDX + 0x4]
005c46a0  CDQ
005c46a1  MOV ECX,0x34
005c46a6  IDIV ECX
005c46a8  MOV dword ptr [EBP + -0x20],EAX
005c46ab  MOV EDX,dword ptr [EBP + -0x8]
005c46ae  CMP EDX,dword ptr [EBP + -0x20]
005c46b1  JC 0x005c46b9
005c46b3  CALL dword ptr [0x006b2274]
005c46b9  MOV EAX,dword ptr [EBP + -0x8]
005c46bc  IMUL EAX,EAX,0x34
005c46bf  MOV ECX,dword ptr [EBP + -0x10]
005c46c2  MOV EDX,dword ptr [ECX + 0x4]
005c46c5  CMP dword ptr [EDX + EAX*0x1 + 0x30],0x0
005c46ca  JZ 0x005c472e
005c46cc  MOV EAX,dword ptr [EBP + -0x18]
005c46cf  ADD EAX,0x58
005c46d2  MOV dword ptr [EBP + -0x14],EAX
005c46d5  MOV ECX,dword ptr [EBP + -0x14]
005c46d8  CMP dword ptr [ECX + 0x4],0x0
005c46dc  JNZ 0x005c46e7
005c46de  MOV dword ptr [EBP + -0x24],0x0
005c46e5  JMP 0x005c4700
005c46e7  MOV EDX,dword ptr [EBP + -0x14]
005c46ea  MOV EAX,dword ptr [EBP + -0x14]
005c46ed  MOV ECX,dword ptr [EDX + 0x8]
005c46f0  SUB ECX,dword ptr [EAX + 0x4]
005c46f3  MOV EAX,ECX
005c46f5  CDQ
005c46f6  MOV ECX,0x34
005c46fb  IDIV ECX
005c46fd  MOV dword ptr [EBP + -0x24],EAX
005c4700  MOV EDX,dword ptr [EBP + -0x8]
005c4703  CMP EDX,dword ptr [EBP + -0x24]
005c4706  JC 0x005c470e
005c4708  CALL dword ptr [0x006b2274]
005c470e  MOV EAX,dword ptr [EBP + -0x8]
005c4711  IMUL EAX,EAX,0x34
005c4714  MOV ECX,dword ptr [EBP + -0x14]
005c4717  MOV EDX,dword ptr [ECX + 0x4]
005c471a  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x30]
005c471e  MOV dword ptr [EBP + -0x28],EAX
005c4721  MOV ECX,dword ptr [EBP + -0x28]
005c4724  MOV EDX,dword ptr [ECX]
005c4726  MOV ECX,dword ptr [EBP + -0x28]
005c4729  MOV EAX,dword ptr [EDX + 0x74]
005c472c  CALL EAX
005c472e  JMP 0x005c4664
005c4733  PUSH 0x0
005c4735  MOV ECX,dword ptr [EBP + -0x18]
005c4738  CALL 0x005c3110
005c473d  MOV ESP,EBP
005c473f  POP EBP
005c4740  RET
