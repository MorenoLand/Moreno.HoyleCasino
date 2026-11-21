; FUN_005d92f0  005d92f0
005d92f0  PUSH EBP
005d92f1  MOV EBP,ESP
005d92f3  SUB ESP,0xc
005d92f6  MOV dword ptr [EBP + -0x4],ECX
005d92f9  MOV EAX,dword ptr [EBP + 0x8]
005d92fc  MOV dword ptr [EAX],0x0
005d9302  MOV ECX,dword ptr [EBP + 0xc]
005d9305  MOV dword ptr [ECX],0x0
005d930b  MOV ECX,dword ptr [EBP + -0x4]
005d930e  CALL 0x005da830
005d9313  MOVZX EDX,AL
005d9316  TEST EDX,EDX
005d9318  JZ 0x005d93a7
005d931e  MOV ECX,dword ptr [EBP + -0x4]
005d9321  CALL 0x005da880
005d9326  MOV ECX,dword ptr [EBP + 0xc]
005d9329  MOV dword ptr [ECX],EAX
005d932b  MOV EDX,dword ptr [EBP + 0xc]
005d932e  MOV EAX,dword ptr [EDX]
005d9330  MOV dword ptr [EBP + -0x8],EAX
005d9333  CMP dword ptr [EBP + -0x8],0x61a8
005d933a  JG 0x005d9359
005d933c  CMP dword ptr [EBP + -0x8],0x61a8
005d9343  JZ 0x005d9383
005d9345  CMP dword ptr [EBP + -0x8],0x3e8
005d934c  JZ 0x005d936d
005d934e  CMP dword ptr [EBP + -0x8],0x1388
005d9355  JZ 0x005d9378
005d9357  JMP 0x005d93a2
005d9359  CMP dword ptr [EBP + -0x8],0x186a0
005d9360  JZ 0x005d938e
005d9362  CMP dword ptr [EBP + -0x8],0x7a120
005d9369  JZ 0x005d9399
005d936b  JMP 0x005d93a2
005d936d  MOV ECX,dword ptr [EBP + 0x8]
005d9370  MOV dword ptr [ECX],0xa
005d9376  JMP 0x005d93a2
005d9378  MOV EDX,dword ptr [EBP + 0x8]
005d937b  MOV dword ptr [EDX],0x19
005d9381  JMP 0x005d93a2
005d9383  MOV EAX,dword ptr [EBP + 0x8]
005d9386  MOV dword ptr [EAX],0xfa
005d938c  JMP 0x005d93a2
005d938e  MOV ECX,dword ptr [EBP + 0x8]
005d9391  MOV dword ptr [ECX],0x3e8
005d9397  JMP 0x005d93a2
005d9399  MOV EDX,dword ptr [EBP + 0x8]
005d939c  MOV dword ptr [EDX],0x1388
005d93a2  JMP 0x005d94aa
005d93a7  MOV EAX,[0x007947e0]
005d93ac  MOV ECX,dword ptr [EAX + 0x4f0c]
005d93b2  MOV dword ptr [EBP + -0xc],ECX
005d93b5  CMP dword ptr [EBP + -0xc],0x64
005d93b9  JG 0x005d93dc
005d93bb  CMP dword ptr [EBP + -0xc],0x64
005d93bf  JZ 0x005d9453
005d93c5  CMP dword ptr [EBP + -0xc],0x5
005d93c9  JZ 0x005d9400
005d93cb  CMP dword ptr [EBP + -0xc],0xa
005d93cf  JZ 0x005d9417
005d93d1  CMP dword ptr [EBP + -0xc],0x19
005d93d5  JZ 0x005d942b
005d93d7  JMP 0x005d948f
005d93dc  CMP dword ptr [EBP + -0xc],0xfa
005d93e3  JZ 0x005d943f
005d93e5  CMP dword ptr [EBP + -0xc],0x3e8
005d93ec  JZ 0x005d9467
005d93ee  CMP dword ptr [EBP + -0xc],0x4d2
005d93f5  JZ 0x005d947b
005d93fb  JMP 0x005d948f
005d9400  MOV EDX,dword ptr [EBP + 0x8]
005d9403  MOV dword ptr [EDX],0x5
005d9409  MOV EAX,dword ptr [EBP + 0xc]
005d940c  MOV dword ptr [EAX],0x3e8
005d9412  JMP 0x005d94aa
005d9417  MOV ECX,dword ptr [EBP + 0x8]
005d941a  MOV dword ptr [ECX],0xa
005d9420  MOV EDX,dword ptr [EBP + 0xc]
005d9423  MOV dword ptr [EDX],0x7d0
005d9429  JMP 0x005d94aa
005d942b  MOV EAX,dword ptr [EBP + 0x8]
005d942e  MOV dword ptr [EAX],0x19
005d9434  MOV ECX,dword ptr [EBP + 0xc]
005d9437  MOV dword ptr [ECX],0xbb8
005d943d  JMP 0x005d94aa
005d943f  MOV EDX,dword ptr [EBP + 0x8]
005d9442  MOV dword ptr [EDX],0xfa
005d9448  MOV EAX,dword ptr [EBP + 0xc]
005d944b  MOV dword ptr [EAX],0x1f4
005d9451  JMP 0x005d94aa
005d9453  MOV ECX,dword ptr [EBP + 0x8]
005d9456  MOV dword ptr [ECX],0x64
005d945c  MOV EDX,dword ptr [EBP + 0xc]
005d945f  MOV dword ptr [EDX],0x3b9aca00
005d9465  JMP 0x005d94aa
005d9467  MOV EAX,dword ptr [EBP + 0x8]
005d946a  MOV dword ptr [EAX],0x3e8
005d9470  MOV ECX,dword ptr [EBP + 0xc]
005d9473  MOV dword ptr [ECX],0x7d0
005d9479  JMP 0x005d94aa
005d947b  MOV EDX,dword ptr [EBP + 0x8]
005d947e  MOV dword ptr [EDX],0x5
005d9484  MOV EAX,dword ptr [EBP + 0xc]
005d9487  MOV dword ptr [EAX],0x3b9aca00
005d948d  JMP 0x005d94aa
005d948f  XOR ECX,ECX
005d9491  JNZ 0x005d94aa
005d9493  PUSH 0x28a
005d9498  PUSH 0x6d43a4
005d949d  PUSH 0x6b2f58
005d94a2  CALL 0x005e9f20
005d94a7  ADD ESP,0xc
005d94aa  MOV ESP,EBP
005d94ac  POP EBP
005d94ad  RET 0x8
