; FUN_005c4920  005c4920
005c4920  PUSH EBP
005c4921  MOV EBP,ESP
005c4923  SUB ESP,0x28
005c4926  MOV dword ptr [EBP + -0x28],ECX
005c4929  MOV EAX,dword ptr [EBP + -0x28]
005c492c  CMP dword ptr [EAX + 0x4],0x0
005c4930  JZ 0x005c49c4
005c4936  MOV ECX,dword ptr [EBP + -0x28]
005c4939  MOV EDX,dword ptr [ECX + 0x8]
005c493c  MOV dword ptr [EBP + -0x1c],EDX
005c493f  MOV EAX,dword ptr [EBP + -0x28]
005c4942  MOV ECX,dword ptr [EAX + 0x4]
005c4945  MOV dword ptr [EBP + -0x18],ECX
005c4948  MOV EDX,dword ptr [EBP + -0x1c]
005c494b  MOV dword ptr [EBP + -0x14],EDX
005c494e  MOV EAX,dword ptr [EBP + -0x18]
005c4951  MOV dword ptr [EBP + -0x10],EAX
005c4954  MOV CL,byte ptr [EBP + -0x2]
005c4957  MOV byte ptr [EBP + -0x1],CL
005c495a  MOV EDX,dword ptr [EBP + -0x14]
005c495d  MOV dword ptr [EBP + -0xc],EDX
005c4960  MOV EAX,dword ptr [EBP + -0x10]
005c4963  MOV dword ptr [EBP + -0x8],EAX
005c4966  JMP 0x005c4971
005c4968  MOV ECX,dword ptr [EBP + -0x8]
005c496b  ADD ECX,0x34
005c496e  MOV dword ptr [EBP + -0x8],ECX
005c4971  MOV EDX,dword ptr [EBP + -0x8]
005c4974  CMP EDX,dword ptr [EBP + -0xc]
005c4977  JZ 0x005c4996
005c4979  MOV ECX,dword ptr [EBP + -0x8]
005c497c  CALL 0x005c3980
005c4981  XOR EAX,EAX
005c4983  AND EAX,0x1
005c4986  JZ 0x005c4994
005c4988  MOV ECX,dword ptr [EBP + -0x8]
005c498b  PUSH ECX
005c498c  CALL 0x00686cae
005c4991  ADD ESP,0x4
005c4994  JMP 0x005c4968
005c4996  MOV EDX,dword ptr [EBP + -0x28]
005c4999  MOV EAX,dword ptr [EBP + -0x28]
005c499c  MOV ECX,dword ptr [EDX + 0xc]
005c499f  SUB ECX,dword ptr [EAX + 0x4]
005c49a2  MOV EAX,ECX
005c49a4  CDQ
005c49a5  MOV ECX,0x34
005c49aa  IDIV ECX
005c49ac  MOV dword ptr [EBP + -0x24],EAX
005c49af  MOV EDX,dword ptr [EBP + -0x28]
005c49b2  MOV EAX,dword ptr [EDX + 0x4]
005c49b5  MOV dword ptr [EBP + -0x20],EAX
005c49b8  MOV ECX,dword ptr [EBP + -0x20]
005c49bb  PUSH ECX
005c49bc  CALL 0x00686cae
005c49c1  ADD ESP,0x4
005c49c4  MOV EDX,dword ptr [EBP + -0x28]
005c49c7  MOV dword ptr [EDX + 0x4],0x0
005c49ce  MOV EAX,dword ptr [EBP + -0x28]
005c49d1  MOV dword ptr [EAX + 0x8],0x0
005c49d8  MOV ECX,dword ptr [EBP + -0x28]
005c49db  MOV dword ptr [ECX + 0xc],0x0
005c49e2  MOV ESP,EBP
005c49e4  POP EBP
005c49e5  RET
