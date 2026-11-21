; FUN_005bb3a9  005bb3a9
005bb3a9  MOV dword ptr [EBP + -0x4],0xffffffff
005bb3b0  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb3b6  CMP dword ptr [EAX + 0x4],0x0
005bb3ba  JNZ 0x005bb3c8
005bb3bc  MOV dword ptr [EBP + 0xfffffdd0],0x0
005bb3c6  JMP 0x005bb3e3
005bb3c8  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb3ce  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb3d4  MOV EAX,dword ptr [ECX + 0x8]
005bb3d7  SUB EAX,dword ptr [EDX + 0x4]
005bb3da  SAR EAX,0x2
005bb3dd  MOV dword ptr [EBP + 0xfffffdd0],EAX
005bb3e3  MOV ECX,dword ptr [EBP + 0x10]
005bb3e6  ADD ECX,dword ptr [EBP + 0xfffffdd0]
005bb3ec  MOV dword ptr [EBP + 0x10],ECX
005bb3ef  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb3f5  CMP dword ptr [EDX + 0x4],0x0
005bb3f9  JZ 0x005bb476
005bb3fb  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb401  MOV ECX,dword ptr [EAX + 0x8]
005bb404  MOV dword ptr [EBP + 0xffffff10],ECX
005bb40a  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb410  MOV EAX,dword ptr [EDX + 0x4]
005bb413  MOV dword ptr [EBP + 0xffffff14],EAX
005bb419  MOV ECX,dword ptr [EBP + 0xffffff10]
005bb41f  MOV dword ptr [EBP + 0xffffff18],ECX
005bb425  MOV EDX,dword ptr [EBP + 0xffffff14]
005bb42b  MOV dword ptr [EBP + 0xffffff1c],EDX
005bb431  MOV AL,byte ptr [EBP + 0xffffff22]
005bb437  MOV byte ptr [EBP + 0xffffff23],AL
005bb43d  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb443  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb449  MOV EAX,dword ptr [ECX + 0xc]
005bb44c  SUB EAX,dword ptr [EDX + 0x4]
005bb44f  SAR EAX,0x2
005bb452  MOV dword ptr [EBP + 0xffffff08],EAX
005bb458  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb45e  MOV EDX,dword ptr [ECX + 0x4]
005bb461  MOV dword ptr [EBP + 0xffffff0c],EDX
005bb467  MOV EAX,dword ptr [EBP + 0xffffff0c]
005bb46d  PUSH EAX
005bb46e  CALL 0x00686cae
005bb473  ADD ESP,0x4
005bb476  MOV ECX,dword ptr [EBP + -0x18]
005bb479  MOV EDX,dword ptr [EBP + -0x20]
005bb47c  LEA EAX,[EDX + ECX*0x4]
005bb47f  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005bb485  MOV dword ptr [ECX + 0xc],EAX
005bb488  MOV EDX,dword ptr [EBP + 0x10]
005bb48b  MOV EAX,dword ptr [EBP + -0x20]
005bb48e  LEA ECX,[EAX + EDX*0x4]
005bb491  MOV EDX,dword ptr [EBP + 0xfffffdf8]
005bb497  MOV dword ptr [EDX + 0x8],ECX
005bb49a  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005bb4a0  MOV ECX,dword ptr [EBP + -0x20]
005bb4a3  MOV dword ptr [EAX + 0x4],ECX
005bb4a6  JMP 0x005bb731
