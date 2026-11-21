; FUN_005c9a50  005c9a50
005c9a50  PUSH EBP
005c9a51  MOV EBP,ESP
005c9a53  SUB ESP,0x8
005c9a56  MOV dword ptr [EBP + -0x8],ECX
005c9a59  MOV ECX,dword ptr [EBP + -0x8]
005c9a5c  CALL 0x005e9e20
005c9a61  MOV EAX,dword ptr [EBP + -0x8]
005c9a64  MOV dword ptr [EAX],0x6d2410
005c9a6a  MOV dword ptr [EBP + -0x4],0x0
005c9a71  JMP 0x005c9a7c
005c9a73  MOV ECX,dword ptr [EBP + -0x4]
005c9a76  ADD ECX,0x1
005c9a79  MOV dword ptr [EBP + -0x4],ECX
005c9a7c  CMP dword ptr [EBP + -0x4],0x4
005c9a80  JGE 0x005c9a92
005c9a82  MOV EDX,dword ptr [EBP + -0x4]
005c9a85  MOV EAX,dword ptr [EBP + -0x8]
005c9a88  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
005c9a90  JMP 0x005c9a73
005c9a92  MOV dword ptr [EBP + -0x4],0x0
005c9a99  JMP 0x005c9aa4
005c9a9b  MOV ECX,dword ptr [EBP + -0x4]
005c9a9e  ADD ECX,0x1
005c9aa1  MOV dword ptr [EBP + -0x4],ECX
005c9aa4  CMP dword ptr [EBP + -0x4],0x2
005c9aa8  JGE 0x005c9aba
005c9aaa  MOV EDX,dword ptr [EBP + -0x4]
005c9aad  MOV EAX,dword ptr [EBP + -0x8]
005c9ab0  MOV dword ptr [EAX + EDX*0x4 + 0x14],0x0
005c9ab8  JMP 0x005c9a9b
005c9aba  MOV ECX,dword ptr [EBP + -0x8]
005c9abd  MOV dword ptr [ECX + 0x1c],0x0
005c9ac4  MOV EDX,dword ptr [EBP + -0x8]
005c9ac7  MOV dword ptr [EDX + 0x20],0x0
005c9ace  MOV EAX,dword ptr [EBP + -0x8]
005c9ad1  MOV dword ptr [EAX + 0x24],0x0
005c9ad8  MOV ECX,dword ptr [EBP + -0x8]
005c9adb  MOV dword ptr [ECX + 0x2c],0x0
005c9ae2  MOV EDX,dword ptr [EBP + -0x8]
005c9ae5  MOV byte ptr [EDX + 0x28],0x0
005c9ae9  MOV EAX,dword ptr [EBP + -0x8]
005c9aec  MOV ESP,EBP
005c9aee  POP EBP
005c9aef  RET
