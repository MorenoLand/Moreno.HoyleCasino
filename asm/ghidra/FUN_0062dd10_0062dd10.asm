; FUN_0062dd10  0062dd10
0062dd10  PUSH EBP
0062dd11  MOV EBP,ESP
0062dd13  SUB ESP,0x8
0062dd16  CMP dword ptr [0x0076208c],0x0
0062dd1d  JNZ 0x0062dd2e
0062dd1f  MOV EAX,[0x00762088]
0062dd24  MOV ECX,dword ptr [EBP + 0x8]
0062dd27  MOV dword ptr [EAX],ECX
0062dd29  JMP 0x0062ddcb
0062dd2e  MOV dword ptr [EBP + -0x8],0x1
0062dd35  MOV EDX,dword ptr [0x00762088]
0062dd3b  MOV EAX,dword ptr [EBP + 0x8]
0062dd3e  MOV dword ptr [EDX],EAX
0062dd40  MOV dword ptr [EBP + -0x4],0x1
0062dd47  JMP 0x0062dd52
0062dd49  MOV ECX,dword ptr [EBP + -0x4]
0062dd4c  ADD ECX,0x1
0062dd4f  MOV dword ptr [EBP + -0x4],ECX
0062dd52  MOV EDX,dword ptr [EBP + -0x4]
0062dd55  CMP EDX,dword ptr [0x00762090]
0062dd5b  JGE 0x0062dd84
0062dd5d  MOV EAX,dword ptr [EBP + -0x4]
0062dd60  MOV ECX,dword ptr [0x00762088]
0062dd66  MOV EDX,dword ptr [ECX + EAX*0x4 + -0x4]
0062dd6a  IMUL EDX,EDX,0x41c64e6d
0062dd70  ADD EDX,0x3039
0062dd76  MOV EAX,dword ptr [EBP + -0x4]
0062dd79  MOV ECX,dword ptr [0x00762088]
0062dd7f  MOV dword ptr [ECX + EAX*0x4],EDX
0062dd82  JMP 0x0062dd49
0062dd84  MOV EDX,dword ptr [0x00762094]
0062dd8a  MOV EAX,[0x00762088]
0062dd8f  LEA ECX,[EAX + EDX*0x4]
0062dd92  MOV dword ptr [0x00762080],ECX
0062dd98  MOV EDX,dword ptr [0x00762088]
0062dd9e  MOV dword ptr [0x00762084],EDX
0062dda4  MOV dword ptr [EBP + -0x4],0x0
0062ddab  JMP 0x0062ddb6
0062ddad  MOV EAX,dword ptr [EBP + -0x4]
0062ddb0  ADD EAX,0x1
0062ddb3  MOV dword ptr [EBP + -0x4],EAX
0062ddb6  MOV ECX,dword ptr [0x00762090]
0062ddbc  IMUL ECX,ECX,0xa
0062ddbf  CMP dword ptr [EBP + -0x4],ECX
0062ddc2  JGE 0x0062ddcb
0062ddc4  CALL 0x0062e0a0
0062ddc9  JMP 0x0062ddad
0062ddcb  MOV ESP,EBP
0062ddcd  POP EBP
0062ddce  RET
