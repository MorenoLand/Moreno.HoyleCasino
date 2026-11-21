; FUN_005be450  005be450
005be450  PUSH EBP
005be451  MOV EBP,ESP
005be453  SUB ESP,0x20
005be456  MOV dword ptr [EBP + -0x20],ECX
005be459  MOV EAX,dword ptr [EBP + -0x20]
005be45c  CMP dword ptr [EAX + 0x4],0x0
005be460  JZ 0x005be4ad
005be462  MOV ECX,dword ptr [EBP + -0x20]
005be465  MOV EDX,dword ptr [ECX + 0x8]
005be468  MOV dword ptr [EBP + -0x14],EDX
005be46b  MOV EAX,dword ptr [EBP + -0x20]
005be46e  MOV ECX,dword ptr [EAX + 0x4]
005be471  MOV dword ptr [EBP + -0x10],ECX
005be474  MOV EDX,dword ptr [EBP + -0x14]
005be477  MOV dword ptr [EBP + -0xc],EDX
005be47a  MOV EAX,dword ptr [EBP + -0x10]
005be47d  MOV dword ptr [EBP + -0x8],EAX
005be480  MOV CL,byte ptr [EBP + -0x2]
005be483  MOV byte ptr [EBP + -0x1],CL
005be486  MOV EDX,dword ptr [EBP + -0x20]
005be489  MOV EAX,dword ptr [EBP + -0x20]
005be48c  MOV ECX,dword ptr [EDX + 0xc]
005be48f  SUB ECX,dword ptr [EAX + 0x4]
005be492  SAR ECX,0x2
005be495  MOV dword ptr [EBP + -0x1c],ECX
005be498  MOV EDX,dword ptr [EBP + -0x20]
005be49b  MOV EAX,dword ptr [EDX + 0x4]
005be49e  MOV dword ptr [EBP + -0x18],EAX
005be4a1  MOV ECX,dword ptr [EBP + -0x18]
005be4a4  PUSH ECX
005be4a5  CALL 0x00686cae
005be4aa  ADD ESP,0x4
005be4ad  MOV EDX,dword ptr [EBP + -0x20]
005be4b0  MOV dword ptr [EDX + 0x4],0x0
005be4b7  MOV EAX,dword ptr [EBP + -0x20]
005be4ba  MOV dword ptr [EAX + 0x8],0x0
005be4c1  MOV ECX,dword ptr [EBP + -0x20]
005be4c4  MOV dword ptr [ECX + 0xc],0x0
005be4cb  MOV ESP,EBP
005be4cd  POP EBP
005be4ce  RET
