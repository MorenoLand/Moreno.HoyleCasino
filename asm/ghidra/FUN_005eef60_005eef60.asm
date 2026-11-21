; FUN_005eef60  005eef60
005eef60  PUSH EBP
005eef61  MOV EBP,ESP
005eef63  SUB ESP,0x14
005eef66  MOV dword ptr [EBP + -0x10],ECX
005eef69  MOV dword ptr [EBP + -0x8],0x0
005eef70  MOV dword ptr [EBP + -0xc],0x0
005eef77  MOV dword ptr [EBP + -0x4],0x0
005eef7e  JMP 0x005eef89
005eef80  MOV EAX,dword ptr [EBP + -0x4]
005eef83  ADD EAX,0x1
005eef86  MOV dword ptr [EBP + -0x4],EAX
005eef89  MOV ECX,dword ptr [EBP + -0x10]
005eef8c  MOV EDX,dword ptr [ECX + 0x5c]
005eef8f  MOV EAX,dword ptr [EBP + -0x4]
005eef92  MOVZX ECX,byte ptr [EDX + EAX*0x1]
005eef96  TEST ECX,ECX
005eef98  JZ 0x005ef038
005eef9e  MOV EDX,dword ptr [EBP + -0x10]
005eefa1  MOV EAX,dword ptr [EDX + 0x5c]
005eefa4  MOV ECX,dword ptr [EBP + -0x4]
005eefa7  MOVZX EDX,byte ptr [EAX + ECX*0x1]
005eefab  CMP EDX,0xa
005eefae  JNZ 0x005eefc7
005eefb0  MOV EAX,dword ptr [EBP + -0xc]
005eefb3  CMP EAX,dword ptr [EBP + -0x8]
005eefb6  JLE 0x005eefbe
005eefb8  MOV ECX,dword ptr [EBP + -0xc]
005eefbb  MOV dword ptr [EBP + -0x8],ECX
005eefbe  MOV dword ptr [EBP + -0xc],0x0
005eefc5  JMP 0x005eef80
005eefc7  MOV EDX,dword ptr [EBP + -0x10]
005eefca  MOV EAX,dword ptr [EDX + 0x5c]
005eefcd  MOV ECX,dword ptr [EBP + -0x4]
005eefd0  MOVZX EDX,byte ptr [EAX + ECX*0x1 + 0x1]
005eefd5  TEST EDX,EDX
005eefd7  JZ 0x005eefec
005eefd9  MOV EAX,dword ptr [EBP + -0x10]
005eefdc  MOV ECX,dword ptr [EAX + 0x5c]
005eefdf  MOV EDX,dword ptr [EBP + -0x4]
005eefe2  MOVZX EAX,byte ptr [ECX + EDX*0x1 + 0x1]
005eefe7  MOV dword ptr [EBP + -0x14],EAX
005eefea  JMP 0x005eeff3
005eefec  MOV dword ptr [EBP + -0x14],0xffffffff
005eeff3  MOV ECX,dword ptr [EBP + -0x14]
005eeff6  PUSH ECX
005eeff7  MOV EDX,dword ptr [EBP + -0x10]
005eeffa  MOV EAX,dword ptr [EDX + 0x5c]
005eeffd  MOV ECX,dword ptr [EBP + -0x4]
005ef000  MOV DL,byte ptr [EAX + ECX*0x1]
005ef003  PUSH EDX
005ef004  MOV ECX,dword ptr [EBP + -0x10]
005ef007  CALL 0x005ee950
005ef00c  MOV ECX,dword ptr [EBP + -0x10]
005ef00f  MOVZX EDX,word ptr [ECX + 0x90]
005ef016  SUB EAX,EDX
005ef018  MOV ECX,dword ptr [EBP + -0x10]
005ef01b  MOVSX EDX,word ptr [ECX + 0x94]
005ef022  ADD EAX,EDX
005ef024  MOV ECX,dword ptr [EBP + -0x10]
005ef027  ADD EAX,dword ptr [ECX + 0xa8]
005ef02d  ADD EAX,dword ptr [EBP + -0xc]
005ef030  MOV dword ptr [EBP + -0xc],EAX
005ef033  JMP 0x005eef80
005ef038  MOV EDX,dword ptr [EBP + -0xc]
005ef03b  CMP EDX,dword ptr [EBP + -0x8]
005ef03e  JLE 0x005ef046
005ef040  MOV EAX,dword ptr [EBP + -0xc]
005ef043  MOV dword ptr [EBP + -0x8],EAX
005ef046  MOV EAX,dword ptr [EBP + -0x8]
005ef049  MOV ESP,EBP
005ef04b  POP EBP
005ef04c  RET
