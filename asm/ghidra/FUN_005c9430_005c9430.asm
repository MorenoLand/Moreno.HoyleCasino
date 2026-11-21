; FUN_005c9430  005c9430
005c9430  PUSH EBP
005c9431  MOV EBP,ESP
005c9433  SUB ESP,0x1c
005c9436  MOV dword ptr [EBP + -0x1c],ECX
005c9439  MOV dword ptr [EBP + -0x10],0x0
005c9440  MOV dword ptr [EBP + -0xc],0x0
005c9447  MOV dword ptr [EBP + -0x8],0x0
005c944e  JMP 0x005c9459
005c9450  MOV EAX,dword ptr [EBP + -0x8]
005c9453  ADD EAX,0x1
005c9456  MOV dword ptr [EBP + -0x8],EAX
005c9459  MOV ECX,dword ptr [EBP + -0x1c]
005c945c  MOV EDX,dword ptr [ECX + 0x10]
005c945f  MOV EAX,dword ptr [EDX]
005c9461  SUB EAX,0x1
005c9464  CMP dword ptr [EBP + -0x8],EAX
005c9467  JGE 0x005c94ef
005c946d  MOV ECX,dword ptr [EBP + -0x8]
005c9470  MOV EDX,dword ptr [EBP + 0x8]
005c9473  MOV EAX,dword ptr [EDX + ECX*0x4]
005c9476  MOV dword ptr [EBP + -0x18],EAX
005c9479  MOV dword ptr [EBP + -0x14],0x0
005c9480  MOV dword ptr [EBP + -0x4],0x0
005c9487  JMP 0x005c9492
005c9489  MOV ECX,dword ptr [EBP + -0x4]
005c948c  ADD ECX,0x1
005c948f  MOV dword ptr [EBP + -0x4],ECX
005c9492  MOV EDX,dword ptr [EBP + -0x1c]
005c9495  MOV EAX,dword ptr [EDX + 0x10]
005c9498  MOV ECX,dword ptr [EBP + -0x4]
005c949b  CMP ECX,dword ptr [EAX]
005c949d  JGE 0x005c94b8
005c949f  MOV EDX,dword ptr [EBP + -0x4]
005c94a2  MOV EAX,dword ptr [EBP + 0x8]
005c94a5  MOV ECX,dword ptr [EAX + EDX*0x4]
005c94a8  CMP ECX,dword ptr [EBP + -0x18]
005c94ab  JNZ 0x005c94b6
005c94ad  MOV EDX,dword ptr [EBP + -0x14]
005c94b0  ADD EDX,0x1
005c94b3  MOV dword ptr [EBP + -0x14],EDX
005c94b6  JMP 0x005c9489
005c94b8  MOV EAX,dword ptr [EBP + -0x14]
005c94bb  CMP EAX,dword ptr [EBP + -0x10]
005c94be  JLE 0x005c94ce
005c94c0  MOV ECX,dword ptr [EBP + -0x14]
005c94c3  MOV dword ptr [EBP + -0x10],ECX
005c94c6  MOV EDX,dword ptr [EBP + -0x18]
005c94c9  MOV dword ptr [EBP + -0xc],EDX
005c94cc  JMP 0x005c94ea
005c94ce  MOV EAX,dword ptr [EBP + -0x14]
005c94d1  CMP EAX,dword ptr [EBP + -0x10]
005c94d4  JNZ 0x005c94ea
005c94d6  MOV ECX,dword ptr [EBP + -0x18]
005c94d9  CMP ECX,dword ptr [EBP + -0xc]
005c94dc  JLE 0x005c94ea
005c94de  MOV EDX,dword ptr [EBP + -0x14]
005c94e1  MOV dword ptr [EBP + -0x10],EDX
005c94e4  MOV EAX,dword ptr [EBP + -0x18]
005c94e7  MOV dword ptr [EBP + -0xc],EAX
005c94ea  JMP 0x005c9450
005c94ef  MOV dword ptr [EBP + -0x4],0x0
005c94f6  JMP 0x005c9501
005c94f8  MOV ECX,dword ptr [EBP + -0x4]
005c94fb  ADD ECX,0x1
005c94fe  MOV dword ptr [EBP + -0x4],ECX
005c9501  MOV EDX,dword ptr [EBP + -0x1c]
005c9504  MOV EAX,dword ptr [EDX + 0x10]
005c9507  MOV ECX,dword ptr [EBP + -0x4]
005c950a  CMP ECX,dword ptr [EAX]
005c950c  JGE 0x005c952a
005c950e  MOV EDX,dword ptr [EBP + -0x4]
005c9511  MOV EAX,dword ptr [EBP + 0x8]
005c9514  MOV ECX,dword ptr [EAX + EDX*0x4]
005c9517  XOR EDX,EDX
005c9519  CMP ECX,dword ptr [EBP + -0xc]
005c951c  SETZ DL
005c951f  MOV EAX,dword ptr [EBP + -0x4]
005c9522  MOV ECX,dword ptr [EBP + 0xc]
005c9525  MOV dword ptr [ECX + EAX*0x4],EDX
005c9528  JMP 0x005c94f8
005c952a  CMP dword ptr [EBP + 0x10],0x0
005c952e  JZ 0x005c9538
005c9530  MOV EDX,dword ptr [EBP + 0x10]
005c9533  MOV EAX,dword ptr [EBP + -0xc]
005c9536  MOV dword ptr [EDX],EAX
005c9538  CMP dword ptr [EBP + 0x14],0x0
005c953c  JZ 0x005c9546
005c953e  MOV ECX,dword ptr [EBP + 0x14]
005c9541  MOV EDX,dword ptr [EBP + -0x10]
005c9544  MOV dword ptr [ECX],EDX
005c9546  MOV ESP,EBP
005c9548  POP EBP
005c9549  RET 0x10
