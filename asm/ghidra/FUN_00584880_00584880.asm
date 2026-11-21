; FUN_00584880  00584880
00584880  PUSH EBP
00584881  MOV EBP,ESP
00584883  PUSH ECX
00584884  MOV dword ptr [EBP + -0x4],ECX
00584887  PUSH 0x0
00584889  PUSH 0x0
0058488b  PUSH 0x0
0058488d  MOV ECX,dword ptr [EBP + -0x4]
00584890  CALL 0x005f6490
00584895  MOV ECX,dword ptr [EBP + -0x4]
00584898  CALL 0x005f5010
0058489d  MOV EAX,dword ptr [EBP + -0x4]
005848a0  MOV ECX,dword ptr [EAX + 0x5c]
005848a3  MOV EDX,dword ptr [EBP + -0x4]
005848a6  MOV EAX,dword ptr [EDX + 0x4]
005848a9  MOV dword ptr [ECX + 0x4],EAX
005848ac  MOV ECX,dword ptr [EBP + -0x4]
005848af  CMP dword ptr [ECX + 0x78],0x0
005848b3  JZ 0x005848d4
005848b5  MOV EDX,dword ptr [EBP + -0x4]
005848b8  MOV EAX,dword ptr [EDX + 0x78]
005848bb  PUSH EAX
005848bc  MOV ECX,dword ptr [EBP + -0x4]
005848bf  MOV EDX,dword ptr [ECX + 0x5c]
005848c2  MOV EAX,dword ptr [EBP + -0x4]
005848c5  MOV ECX,dword ptr [EAX + 0x5c]
005848c8  MOV EDX,dword ptr [EDX]
005848ca  MOV EAX,dword ptr [EDX + 0xc8]
005848d0  CALL EAX
005848d2  JMP 0x005848ef
005848d4  PUSH 0x30d4cb
005848d9  MOV ECX,dword ptr [EBP + -0x4]
005848dc  MOV EDX,dword ptr [ECX + 0x5c]
005848df  MOV EAX,dword ptr [EBP + -0x4]
005848e2  MOV ECX,dword ptr [EAX + 0x5c]
005848e5  MOV EDX,dword ptr [EDX]
005848e7  MOV EAX,dword ptr [EDX + 0xc8]
005848ed  CALL EAX
005848ef  PUSH 0x0
005848f1  MOV ECX,dword ptr [EBP + -0x4]
005848f4  MOV EDX,dword ptr [ECX + 0x5c]
005848f7  MOV EAX,dword ptr [EBP + -0x4]
005848fa  MOV ECX,dword ptr [EAX + 0x5c]
005848fd  MOV EDX,dword ptr [EDX]
005848ff  MOV EAX,dword ptr [EDX + 0xb0]
00584905  CALL EAX
00584907  MOV ECX,dword ptr [EBP + -0x4]
0058490a  MOV EDX,dword ptr [ECX + 0x5c]
0058490d  MOV EAX,dword ptr [EBP + -0x4]
00584910  MOV ECX,dword ptr [EAX + 0x5c]
00584913  MOV EDX,dword ptr [EDX]
00584915  MOV EAX,dword ptr [EDX + 0x40]
00584918  CALL EAX
0058491a  MOV ECX,dword ptr [EBP + -0x4]
0058491d  MOV EDX,dword ptr [ECX + 0x60]
00584920  MOV EAX,dword ptr [EBP + -0x4]
00584923  MOV ECX,dword ptr [EAX + 0x4]
00584926  MOV dword ptr [EDX + 0x4],ECX
00584929  MOV EDX,dword ptr [EBP + -0x4]
0058492c  CMP dword ptr [EDX + 0x7c],0x0
00584930  JZ 0x00584951
00584932  MOV EAX,dword ptr [EBP + -0x4]
00584935  MOV ECX,dword ptr [EAX + 0x7c]
00584938  PUSH ECX
00584939  MOV EDX,dword ptr [EBP + -0x4]
0058493c  MOV EAX,dword ptr [EDX + 0x60]
0058493f  MOV ECX,dword ptr [EBP + -0x4]
00584942  MOV ECX,dword ptr [ECX + 0x60]
00584945  MOV EDX,dword ptr [EAX]
00584947  MOV EAX,dword ptr [EDX + 0xc8]
0058494d  CALL EAX
0058494f  JMP 0x0058496c
00584951  PUSH 0x30d4cc
00584956  MOV ECX,dword ptr [EBP + -0x4]
00584959  MOV EDX,dword ptr [ECX + 0x60]
0058495c  MOV EAX,dword ptr [EBP + -0x4]
0058495f  MOV ECX,dword ptr [EAX + 0x60]
00584962  MOV EDX,dword ptr [EDX]
00584964  MOV EAX,dword ptr [EDX + 0xc8]
0058496a  CALL EAX
0058496c  PUSH 0x0
0058496e  MOV ECX,dword ptr [EBP + -0x4]
00584971  MOV EDX,dword ptr [ECX + 0x60]
00584974  MOV EAX,dword ptr [EBP + -0x4]
00584977  MOV ECX,dword ptr [EAX + 0x60]
0058497a  MOV EDX,dword ptr [EDX]
0058497c  MOV EAX,dword ptr [EDX + 0xb0]
00584982  CALL EAX
00584984  MOV ECX,dword ptr [EBP + -0x4]
00584987  MOV EDX,dword ptr [ECX + 0x60]
0058498a  MOV EAX,dword ptr [EBP + -0x4]
0058498d  MOV ECX,dword ptr [EAX + 0x60]
00584990  MOV EDX,dword ptr [EDX]
00584992  MOV EAX,dword ptr [EDX + 0x40]
00584995  CALL EAX
00584997  MOV ECX,dword ptr [EBP + -0x4]
0058499a  MOV EDX,dword ptr [ECX + 0x64]
0058499d  MOV EAX,dword ptr [EBP + -0x4]
005849a0  MOV ECX,dword ptr [EAX + 0x4]
005849a3  MOV dword ptr [EDX + 0x4],ECX
005849a6  MOV EDX,dword ptr [EBP + -0x4]
005849a9  CMP dword ptr [EDX + 0x80],0x0
005849b0  JZ 0x005849c9
005849b2  MOV EAX,dword ptr [EBP + -0x4]
005849b5  MOV ECX,dword ptr [EAX + 0x80]
005849bb  PUSH ECX
005849bc  MOV EDX,dword ptr [EBP + -0x4]
005849bf  MOV ECX,dword ptr [EDX + 0x64]
005849c2  CALL 0x005eaf00
005849c7  JMP 0x005849d9
005849c9  PUSH 0x30d4cf
005849ce  MOV EAX,dword ptr [EBP + -0x4]
005849d1  MOV ECX,dword ptr [EAX + 0x64]
005849d4  CALL 0x005eaf00
005849d9  PUSH 0x0
005849db  MOV ECX,dword ptr [EBP + -0x4]
005849de  MOV EDX,dword ptr [ECX + 0x64]
005849e1  MOV EAX,dword ptr [EBP + -0x4]
005849e4  MOV ECX,dword ptr [EAX + 0x64]
005849e7  MOV EDX,dword ptr [EDX]
005849e9  MOV EAX,dword ptr [EDX + 0xb0]
005849ef  CALL EAX
005849f1  MOV ECX,dword ptr [EBP + -0x4]
005849f4  MOV EDX,dword ptr [ECX + 0x64]
005849f7  MOV EAX,dword ptr [EBP + -0x4]
005849fa  MOV ECX,dword ptr [EAX + 0x64]
005849fd  MOV EDX,dword ptr [EDX]
005849ff  MOV EAX,dword ptr [EDX + 0x40]
00584a02  CALL EAX
00584a04  MOV ECX,dword ptr [EBP + -0x4]
00584a07  CALL 0x00585070
00584a0c  MOV ESP,EBP
00584a0e  POP EBP
00584a0f  RET
