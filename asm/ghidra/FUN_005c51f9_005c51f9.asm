; FUN_005c51f9  005c51f9
005c51f9  MOV dword ptr [EBP + -0x4],0xffffffff
005c5200  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c5206  CMP dword ptr [EAX + 0x4],0x0
005c520a  JNZ 0x005c5218
005c520c  MOV dword ptr [EBP + 0xfffffdd0],0x0
005c5216  JMP 0x005c5233
005c5218  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c521e  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5224  MOV EAX,dword ptr [ECX + 0x8]
005c5227  SUB EAX,dword ptr [EDX + 0x4]
005c522a  SAR EAX,0x2
005c522d  MOV dword ptr [EBP + 0xfffffdd0],EAX
005c5233  MOV ECX,dword ptr [EBP + 0x10]
005c5236  ADD ECX,dword ptr [EBP + 0xfffffdd0]
005c523c  MOV dword ptr [EBP + 0x10],ECX
005c523f  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5245  CMP dword ptr [EDX + 0x4],0x0
005c5249  JZ 0x005c52c6
005c524b  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c5251  MOV ECX,dword ptr [EAX + 0x8]
005c5254  MOV dword ptr [EBP + 0xffffff10],ECX
005c525a  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5260  MOV EAX,dword ptr [EDX + 0x4]
005c5263  MOV dword ptr [EBP + 0xffffff14],EAX
005c5269  MOV ECX,dword ptr [EBP + 0xffffff10]
005c526f  MOV dword ptr [EBP + 0xffffff18],ECX
005c5275  MOV EDX,dword ptr [EBP + 0xffffff14]
005c527b  MOV dword ptr [EBP + 0xffffff1c],EDX
005c5281  MOV AL,byte ptr [EBP + 0xffffff22]
005c5287  MOV byte ptr [EBP + 0xffffff23],AL
005c528d  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c5293  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c5299  MOV EAX,dword ptr [ECX + 0xc]
005c529c  SUB EAX,dword ptr [EDX + 0x4]
005c529f  SAR EAX,0x2
005c52a2  MOV dword ptr [EBP + 0xffffff08],EAX
005c52a8  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c52ae  MOV EDX,dword ptr [ECX + 0x4]
005c52b1  MOV dword ptr [EBP + 0xffffff0c],EDX
005c52b7  MOV EAX,dword ptr [EBP + 0xffffff0c]
005c52bd  PUSH EAX
005c52be  CALL 0x00686cae
005c52c3  ADD ESP,0x4
005c52c6  MOV ECX,dword ptr [EBP + -0x18]
005c52c9  MOV EDX,dword ptr [EBP + -0x20]
005c52cc  LEA EAX,[EDX + ECX*0x4]
005c52cf  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c52d5  MOV dword ptr [ECX + 0xc],EAX
005c52d8  MOV EDX,dword ptr [EBP + 0x10]
005c52db  MOV EAX,dword ptr [EBP + -0x20]
005c52de  LEA ECX,[EAX + EDX*0x4]
005c52e1  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005c52e7  MOV dword ptr [EDX + 0x8],ECX
005c52ea  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c52f0  MOV ECX,dword ptr [EBP + -0x20]
005c52f3  MOV dword ptr [EAX + 0x4],ECX
005c52f6  JMP 0x005c5581
