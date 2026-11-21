; FUN_005c9140  005c9140
005c9140  PUSH EBP
005c9141  MOV EBP,ESP
005c9143  SUB ESP,0x7c
005c9146  MOV dword ptr [EBP + -0x78],ECX
005c9149  MOV EAX,dword ptr [EBP + -0x78]
005c914c  MOVZX ECX,byte ptr [EAX + 0x14]
005c9150  TEST ECX,ECX
005c9152  JNZ 0x005c9159
005c9154  JMP 0x005c938a
005c9159  MOV EDX,dword ptr [EBP + -0x78]
005c915c  MOV byte ptr [EDX + 0x14],0x0
005c9160  MOV dword ptr [EBP + -0x8],0x0
005c9167  PUSH 0x8c
005c916c  PUSH 0x0
005c916e  MOV EAX,dword ptr [EBP + -0x78]
005c9171  ADD EAX,0x54
005c9174  PUSH EAX
005c9175  CALL 0x00686fa2
005c917a  ADD ESP,0xc
005c917d  MOV ECX,dword ptr [EBP + -0x78]
005c9180  MOV byte ptr [ECX + 0xe4],0x0
005c9187  MOV EDX,dword ptr [EBP + -0x78]
005c918a  MOV EAX,dword ptr [EDX + 0x10]
005c918d  MOV ECX,dword ptr [EAX + 0x10]
005c9190  MOV dword ptr [EBP + -0x4],ECX
005c9193  MOV dword ptr [EBP + -0xc],0x0
005c919a  JMP 0x005c91a5
005c919c  MOV EDX,dword ptr [EBP + -0xc]
005c919f  ADD EDX,0x1
005c91a2  MOV dword ptr [EBP + -0xc],EDX
005c91a5  MOV EAX,dword ptr [EBP + -0x78]
005c91a8  MOV ECX,dword ptr [EAX + 0x10]
005c91ab  MOV EDX,dword ptr [EBP + -0xc]
005c91ae  CMP EDX,dword ptr [ECX + 0x8]
005c91b1  JGE 0x005c9311
005c91b7  MOV EAX,dword ptr [EBP + -0x78]
005c91ba  ADD EAX,dword ptr [EBP + -0xc]
005c91bd  MOV byte ptr [EAX + 0x34],0x0
005c91c1  MOV ECX,dword ptr [EBP + -0xc]
005c91c4  ADD ECX,0x1
005c91c7  MOV EDX,dword ptr [EBP + -0x78]
005c91ca  XOR EAX,EAX
005c91cc  CMP ECX,dword ptr [EDX + 0xc]
005c91cf  SETLE AL
005c91d2  MOVZX ECX,AL
005c91d5  TEST ECX,ECX
005c91d7  JNZ 0x005c91db
005c91d9  JMP 0x005c919c
005c91db  MOV dword ptr [EBP + -0x4c],0x0
005c91e2  JMP 0x005c91ed
005c91e4  MOV EDX,dword ptr [EBP + -0x4c]
005c91e7  ADD EDX,0x1
005c91ea  MOV dword ptr [EBP + -0x4c],EDX
005c91ed  MOV EAX,dword ptr [EBP + -0x78]
005c91f0  MOV ECX,dword ptr [EAX + 0x10]
005c91f3  MOV EDX,dword ptr [ECX]
005c91f5  MOV dword ptr [EBP + -0x5c],EDX
005c91f8  MOV EAX,dword ptr [EBP + -0x4c]
005c91fb  CMP EAX,dword ptr [EBP + -0x5c]
005c91fe  JGE 0x005c9253
005c9200  MOV ECX,dword ptr [EBP + -0x4c]
005c9203  MOV EDX,dword ptr [EBP + -0x78]
005c9206  CMP dword ptr [EDX + ECX*0x4 + 0x18],0x0
005c920b  JL 0x005c921c
005c920d  MOV EAX,dword ptr [EBP + -0x4c]
005c9210  MOV ECX,dword ptr [EBP + -0x78]
005c9213  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c9217  MOV dword ptr [EBP + -0x7c],EDX
005c921a  JMP 0x005c922b
005c921c  MOV EAX,dword ptr [EBP + -0x4c]
005c921f  MOV ECX,dword ptr [EBP + -0x78]
005c9222  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
005c9226  NEG EDX
005c9228  MOV dword ptr [EBP + -0x7c],EDX
005c922b  MOV EAX,dword ptr [EBP + -0xc]
005c922e  IMUL EAX,EAX,0x1c
005c9231  ADD EAX,dword ptr [EBP + -0x4]
005c9234  MOV ECX,dword ptr [EBP + -0x4c]
005c9237  MOV EDX,dword ptr [EBP + -0x7c]
005c923a  ADD EDX,dword ptr [EAX + ECX*0x4]
005c923d  PUSH EDX
005c923e  MOV EAX,dword ptr [EBP + -0x4c]
005c9241  PUSH EAX
005c9242  MOV ECX,dword ptr [EBP + -0x78]
005c9245  CALL 0x005be340
005c924a  MOV ECX,dword ptr [EBP + -0x4c]
005c924d  MOV dword ptr [EBP + ECX*0x4 + -0x28],EAX
005c9251  JMP 0x005c91e4
005c9253  PUSH 0x1c
005c9255  PUSH 0x0
005c9257  LEA EDX,[EBP + -0x48]
005c925a  PUSH EDX
005c925b  CALL 0x00686fa2
005c9260  ADD ESP,0xc
005c9263  LEA EAX,[EBP + -0x48]
005c9266  PUSH EAX
005c9267  LEA ECX,[EBP + -0x28]
005c926a  PUSH ECX
005c926b  MOV EDX,dword ptr [EBP + -0x78]
005c926e  MOV EAX,dword ptr [EDX]
005c9270  MOV ECX,dword ptr [EBP + -0x78]
005c9273  MOV EDX,dword ptr [EAX + 0x8]
005c9276  CALL EDX
005c9278  MOV dword ptr [EBP + -0x2c],EAX
005c927b  CMP dword ptr [EBP + -0x2c],0x0
005c927f  JNZ 0x005c9286
005c9281  JMP 0x005c919c
005c9286  MOV EAX,dword ptr [EBP + -0x78]
005c9289  ADD EAX,dword ptr [EBP + -0xc]
005c928c  MOV byte ptr [EAX + 0x34],0x1
005c9290  MOV dword ptr [EBP + -0x50],0x0
005c9297  JMP 0x005c92a2
005c9299  MOV ECX,dword ptr [EBP + -0x50]
005c929c  ADD ECX,0x1
005c929f  MOV dword ptr [EBP + -0x50],ECX
005c92a2  MOV EDX,dword ptr [EBP + -0x78]
005c92a5  MOV EAX,dword ptr [EDX + 0x10]
005c92a8  MOV ECX,dword ptr [EAX]
005c92aa  MOV dword ptr [EBP + -0x6c],ECX
005c92ad  MOV EDX,dword ptr [EBP + -0x50]
005c92b0  CMP EDX,dword ptr [EBP + -0x6c]
005c92b3  JGE 0x005c9303
005c92b5  MOV EAX,dword ptr [EBP + -0xc]
005c92b8  IMUL EAX,EAX,0x1c
005c92bb  ADD EAX,dword ptr [EBP + -0x4]
005c92be  MOV ECX,dword ptr [EBP + -0x50]
005c92c1  MOV EDX,dword ptr [EAX + ECX*0x4]
005c92c4  ADD EDX,0x2
005c92c7  MOV dword ptr [EBP + -0x58],EDX
005c92ca  MOV EAX,dword ptr [EBP + -0x50]
005c92cd  IMUL EAX,EAX,0x14
005c92d0  MOV ECX,dword ptr [EBP + -0x78]
005c92d3  LEA EDX,[ECX + EAX*0x1 + 0x54]
005c92d7  MOV EAX,dword ptr [EBP + -0x58]
005c92da  LEA ECX,[EDX + EAX*0x4]
005c92dd  MOV dword ptr [EBP + -0x54],ECX
005c92e0  MOV EDX,dword ptr [EBP + -0x50]
005c92e3  CMP dword ptr [EBP + EDX*0x4 + -0x48],0x0
005c92e8  JNZ 0x005c92ec
005c92ea  JMP 0x005c9299
005c92ec  MOV EAX,dword ptr [EBP + -0x54]
005c92ef  CMP dword ptr [EAX],0x0
005c92f2  JZ 0x005c92f6
005c92f4  JMP 0x005c9299
005c92f6  MOV ECX,dword ptr [EBP + -0xc]
005c92f9  ADD ECX,0x1
005c92fc  MOV EDX,dword ptr [EBP + -0x54]
005c92ff  MOV dword ptr [EDX],ECX
005c9301  JMP 0x005c9299
005c9303  MOV EAX,dword ptr [EBP + -0x8]
005c9306  ADD EAX,dword ptr [EBP + -0x2c]
005c9309  MOV dword ptr [EBP + -0x8],EAX
005c930c  JMP 0x005c919c
005c9311  MOV ECX,dword ptr [EBP + -0x78]
005c9314  MOV EDX,dword ptr [EBP + -0x8]
005c9317  MOV dword ptr [ECX + 0xe0],EDX
005c931d  MOV EAX,dword ptr [EBP + -0x78]
005c9320  CMP dword ptr [EAX + 0xe0],0x0
005c9327  JGE 0x005c9336
005c9329  MOV ECX,dword ptr [EBP + -0x78]
005c932c  MOV dword ptr [ECX + 0xe0],0x0
005c9336  MOV EDX,dword ptr [EBP + -0x78]
005c9339  MOV EAX,dword ptr [EDX + 0x4]
005c933c  MOV dword ptr [EBP + -0x70],EAX
005c933f  MOV ECX,dword ptr [EBP + -0x70]
005c9342  ADD ECX,dword ptr [EBP + -0x8]
005c9345  PUSH ECX
005c9346  MOV ECX,dword ptr [EBP + -0x78]
005c9349  CALL 0x005d0a20
005c934e  MOV ECX,dword ptr [EBP + -0x78]
005c9351  CALL 0x005c9140
005c9356  MOV EDX,dword ptr [EBP + -0x78]
005c9359  MOV EAX,dword ptr [EDX + 0x4]
005c935c  MOV dword ptr [EBP + -0x74],EAX
005c935f  CMP dword ptr [EBP + -0x74],0x0
005c9363  JGE 0x005c938a
005c9365  XOR ECX,ECX
005c9367  JNZ 0x005c9380
005c9369  PUSH 0x296
005c936e  PUSH 0x6d23d4
005c9373  PUSH 0x6d23b8
005c9378  CALL 0x005e9f20
005c937d  ADD ESP,0xc
005c9380  PUSH 0x0
005c9382  MOV ECX,dword ptr [EBP + -0x78]
005c9385  CALL 0x005d0a20
005c938a  MOV ESP,EBP
005c938c  POP EBP
005c938d  RET
