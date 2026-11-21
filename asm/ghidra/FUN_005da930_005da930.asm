; FUN_005da930  005da930
005da930  PUSH EBP
005da931  MOV EBP,ESP
005da933  SUB ESP,0x18
005da936  MOV dword ptr [EBP + -0x10],ECX
005da939  MOV ECX,dword ptr [EBP + -0x10]
005da93c  CALL 0x005da7b0
005da941  MOVZX EAX,AL
005da944  TEST EAX,EAX
005da946  JZ 0x005da9c5
005da948  MOV ECX,dword ptr [EBP + -0x10]
005da94b  MOV EDX,dword ptr [ECX]
005da94d  MOV ECX,dword ptr [EBP + -0x10]
005da950  MOV EAX,dword ptr [EDX + 0x80]
005da956  CALL EAX
005da958  MOVZX ECX,AL
005da95b  TEST ECX,ECX
005da95d  JZ 0x005da9c5
005da95f  MOV EDX,dword ptr [EBP + 0x8]
005da962  PUSH EDX
005da963  CALL 0x005dcb00
005da968  ADD ESP,0x4
005da96b  MOV dword ptr [EBP + -0xc],EAX
005da96e  MOV ECX,dword ptr [EBP + -0xc]
005da971  CALL 0x0063aac0
005da976  MOV EAX,dword ptr [EAX]
005da978  MOV dword ptr [EBP + -0x4],EAX
005da97b  CMP dword ptr [EBP + -0x4],0x2
005da97f  JZ 0x005da99d
005da981  MOV ECX,dword ptr [EBP + -0xc]
005da984  CALL 0x0063aac0
005da989  MOV ECX,dword ptr [EAX]
005da98b  MOV dword ptr [EBP + -0x8],ECX
005da98e  CMP dword ptr [EBP + -0x8],0x3
005da992  JZ 0x005da99d
005da994  MOV dword ptr [EBP + -0x14],0x0
005da99b  JMP 0x005da9a4
005da99d  MOV dword ptr [EBP + -0x14],0x1
005da9a4  MOVZX EDX,byte ptr [EBP + -0x14]
005da9a8  TEST EDX,EDX
005da9aa  JZ 0x005da9bc
005da9ac  MOV ECX,dword ptr [0x0162ee84]
005da9b2  CALL 0x00636690
005da9b7  CMP EAX,0x1
005da9ba  JLE 0x005da9c5
005da9bc  MOV dword ptr [EBP + -0x18],0x1
005da9c3  JMP 0x005da9cc
005da9c5  MOV dword ptr [EBP + -0x18],0x0
005da9cc  MOV AL,byte ptr [EBP + -0x18]
005da9cf  MOV ESP,EBP
005da9d1  POP EBP
005da9d2  RET 0x4
