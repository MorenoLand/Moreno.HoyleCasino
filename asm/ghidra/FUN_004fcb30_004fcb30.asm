; FUN_004fcb30  004fcb30
004fcb30  PUSH EBP
004fcb31  MOV EBP,ESP
004fcb33  PUSH -0x1
004fcb35  PUSH 0x6a27ff
004fcb3a  MOV EAX,FS:[0x0]
004fcb40  PUSH EAX
004fcb41  SUB ESP,0x18
004fcb44  MOV EAX,[0x00781870]
004fcb49  XOR EAX,EBP
004fcb4b  PUSH EAX
004fcb4c  LEA EAX,[EBP + -0xc]
004fcb4f  MOV FS:[0x0],EAX
004fcb55  MOV dword ptr [EBP + -0x20],ECX
004fcb58  MOV EAX,[0x00791364]
004fcb5d  MOV byte ptr [EAX + 0x408],0x1
004fcb64  CMP dword ptr [EBP + 0x8],0x3
004fcb68  JNZ 0x004fcb8c
004fcb6a  MOV ECX,dword ptr [0x00791364]
004fcb70  CALL 0x00479860
004fcb75  PUSH EAX
004fcb76  MOV ECX,dword ptr [0x00791364]
004fcb7c  CALL 0x00480580
004fcb81  MOV ECX,dword ptr [0x00791364]
004fcb87  CALL 0x0047ffe0
004fcb8c  MOV ECX,dword ptr [EBP + -0x20]
004fcb8f  CMP dword ptr [ECX + 0x88],0x0
004fcb96  JNZ 0x004fcc56
004fcb9c  PUSH 0x1e4
004fcba1  CALL 0x00686d82
004fcba6  ADD ESP,0x4
004fcba9  MOV dword ptr [EBP + -0x14],EAX
004fcbac  MOV dword ptr [EBP + -0x4],0x0
004fcbb3  CMP dword ptr [EBP + -0x14],0x0
004fcbb7  JZ 0x004fcbc6
004fcbb9  MOV ECX,dword ptr [EBP + -0x14]
004fcbbc  CALL 0x0051a6b0
004fcbc1  MOV dword ptr [EBP + -0x24],EAX
004fcbc4  JMP 0x004fcbcd
004fcbc6  MOV dword ptr [EBP + -0x24],0x0
004fcbcd  MOV EDX,dword ptr [EBP + -0x24]
004fcbd0  MOV dword ptr [EBP + -0x10],EDX
004fcbd3  MOV dword ptr [EBP + -0x4],0xffffffff
004fcbda  MOV EAX,dword ptr [EBP + -0x20]
004fcbdd  MOV ECX,dword ptr [EBP + -0x10]
004fcbe0  MOV dword ptr [EAX + 0x88],ECX
004fcbe6  MOV EDX,dword ptr [EBP + 0x8]
004fcbe9  PUSH EDX
004fcbea  MOV EAX,dword ptr [EBP + -0x20]
004fcbed  MOV ECX,dword ptr [EAX + 0x88]
004fcbf3  CALL 0x0051a7d0
004fcbf8  MOV ECX,dword ptr [0x00791364]
004fcbfe  MOV EDX,dword ptr [ECX + 0xf8]
004fcc04  MOV dword ptr [EBP + -0x18],EDX
004fcc07  MOV EAX,[0x00791364]
004fcc0c  MOV ECX,dword ptr [EAX + 0xf4]
004fcc12  MOV dword ptr [EBP + -0x1c],ECX
004fcc15  MOV EDX,dword ptr [EBP + -0x18]
004fcc18  PUSH EDX
004fcc19  MOV EAX,dword ptr [EBP + -0x1c]
004fcc1c  PUSH EAX
004fcc1d  MOV ECX,dword ptr [EBP + -0x20]
004fcc20  MOV ECX,dword ptr [ECX + 0x88]
004fcc26  CALL 0x0051a7f0
004fcc2b  MOV EDX,dword ptr [EBP + -0x20]
004fcc2e  MOV EAX,dword ptr [EDX + 0x88]
004fcc34  MOV ECX,dword ptr [EBP + -0x20]
004fcc37  MOV ECX,dword ptr [ECX + 0x88]
004fcc3d  MOV EDX,dword ptr [EAX]
004fcc3f  MOV EAX,dword ptr [EDX + 0x3c]
004fcc42  CALL EAX
004fcc44  PUSH 0x0
004fcc46  PUSH 0x0
004fcc48  MOV ECX,dword ptr [EBP + -0x20]
004fcc4b  MOV ECX,dword ptr [ECX + 0x88]
004fcc51  CALL 0x005f7340
004fcc56  MOV EDX,dword ptr [EBP + -0x20]
004fcc59  MOV ECX,dword ptr [EDX + 0x88]
004fcc5f  CALL 0x005f85d0
004fcc64  MOV ECX,dword ptr [EBP + -0xc]
004fcc67  MOV dword ptr FS:[0x0],ECX
004fcc6e  POP ECX
004fcc6f  MOV ESP,EBP
004fcc71  POP EBP
004fcc72  RET 0x4
