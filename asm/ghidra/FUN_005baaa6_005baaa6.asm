; FUN_005baaa6  005baaa6
005baaa6  MOV dword ptr [EBP + -0x4],0x1
005baaad  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005baab3  CMP dword ptr [ECX + 0x4],0x0
005baab7  JNZ 0x005baac5
005baab9  MOV dword ptr [EBP + 0xfffffd8c],0x0
005baac3  JMP 0x005baae0
005baac5  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005baacb  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005baad1  MOV ECX,dword ptr [EDX + 0x8]
005baad4  SUB ECX,dword ptr [EAX + 0x4]
005baad7  SAR ECX,0x4
005baada  MOV dword ptr [EBP + 0xfffffd8c],ECX
005baae0  MOV EDX,dword ptr [EBP + 0x10]
005baae3  ADD EDX,dword ptr [EBP + 0xfffffd8c]
005baae9  MOV dword ptr [EBP + 0x10],EDX
005baaec  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005baaf2  CMP dword ptr [EAX + 0x4],0x0
005baaf6  JZ 0x005babd1
005baafc  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bab02  MOV EDX,dword ptr [ECX + 0x8]
005bab05  MOV dword ptr [EBP + 0xfffffee4],EDX
005bab0b  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005bab11  MOV ECX,dword ptr [EAX + 0x4]
005bab14  MOV dword ptr [EBP + 0xfffffee8],ECX
005bab1a  MOV EDX,dword ptr [EBP + 0xfffffee4]
005bab20  MOV dword ptr [EBP + 0xfffffeec],EDX
005bab26  MOV EAX,dword ptr [EBP + 0xfffffee8]
005bab2c  MOV dword ptr [EBP + 0xfffffef0],EAX
005bab32  MOV CL,byte ptr [EBP + 0xffffff16]
005bab38  MOV byte ptr [EBP + 0xffffff17],CL
005bab3e  MOV EDX,dword ptr [EBP + 0xfffffeec]
005bab44  MOV dword ptr [EBP + 0xfffffef4],EDX
005bab4a  MOV EAX,dword ptr [EBP + 0xfffffef0]
005bab50  MOV dword ptr [EBP + 0xfffffef8],EAX
005bab56  JMP 0x005bab67
005bab58  MOV ECX,dword ptr [EBP + 0xfffffef8]
005bab5e  ADD ECX,0x10
005bab61  MOV dword ptr [EBP + 0xfffffef8],ECX
005bab67  MOV EDX,dword ptr [EBP + 0xfffffef8]
005bab6d  CMP EDX,dword ptr [EBP + 0xfffffef4]
005bab73  JZ 0x005bab98
005bab75  MOV ECX,dword ptr [EBP + 0xfffffef8]
005bab7b  CALL 0x005be450
005bab80  XOR EAX,EAX
005bab82  AND EAX,0x1
005bab85  JZ 0x005bab96
005bab87  MOV ECX,dword ptr [EBP + 0xfffffef8]
005bab8d  PUSH ECX
005bab8e  CALL 0x00686cae
005bab93  ADD ESP,0x4
005bab96  JMP 0x005bab58
005bab98  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005bab9e  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005baba4  MOV ECX,dword ptr [EDX + 0xc]
005baba7  SUB ECX,dword ptr [EAX + 0x4]
005babaa  SAR ECX,0x4
005babad  MOV dword ptr [EBP + 0xfffffedc],ECX
005babb3  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005babb9  MOV EAX,dword ptr [EDX + 0x4]
005babbc  MOV dword ptr [EBP + 0xfffffee0],EAX
005babc2  MOV ECX,dword ptr [EBP + 0xfffffee0]
005babc8  PUSH ECX
005babc9  CALL 0x00686cae
005babce  ADD ESP,0x4
005babd1  MOV EDX,dword ptr [EBP + -0x24]
005babd4  SHL EDX,0x4
005babd7  ADD EDX,dword ptr [EBP + -0x2c]
005babda  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005babe0  MOV dword ptr [EAX + 0xc],EDX
005babe3  MOV ECX,dword ptr [EBP + 0x10]
005babe6  SHL ECX,0x4
005babe9  ADD ECX,dword ptr [EBP + -0x2c]
005babec  MOV EDX,dword ptr [EBP + 0xfffffdb4]
005babf2  MOV dword ptr [EDX + 0x8],ECX
005babf5  MOV EAX,dword ptr [EBP + 0xfffffdb4]
005babfb  MOV ECX,dword ptr [EBP + -0x2c]
005babfe  MOV dword ptr [EAX + 0x4],ECX
005bac01  JMP 0x005baf9d
