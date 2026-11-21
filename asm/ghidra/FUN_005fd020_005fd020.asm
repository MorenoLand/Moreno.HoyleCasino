; FUN_005fd020  005fd020
005fd020  PUSH EBP
005fd021  MOV EBP,ESP
005fd023  SUB ESP,0x14
005fd026  MOV dword ptr [EBP + -0x10],ECX
005fd029  MOV ECX,dword ptr [EBP + -0x10]
005fd02c  CALL 0x005f5400
005fd031  CMP EAX,-0x2
005fd034  JNZ 0x005fd03b
005fd036  JMP 0x005fd22f
005fd03b  MOV ECX,dword ptr [EBP + -0x10]
005fd03e  CALL 0x00602f60
005fd043  MOV EAX,dword ptr [EBP + -0x10]
005fd046  MOV ECX,dword ptr [EAX + 0x194]
005fd04c  MOV dword ptr [EBP + -0x14],ECX
005fd04f  CMP dword ptr [EBP + -0x14],0x0
005fd053  JZ 0x005fd06e
005fd055  CMP dword ptr [EBP + -0x14],0x2
005fd059  JZ 0x005fd128
005fd05f  CMP dword ptr [EBP + -0x14],0x3
005fd063  JZ 0x005fd171
005fd069  JMP 0x005fd22f
005fd06e  MOV ECX,dword ptr [EBP + -0x10]
005fd071  CALL 0x006026d0
005fd076  MOVZX EDX,AL
005fd079  TEST EDX,EDX
005fd07b  JZ 0x005fd119
005fd081  MOV EAX,dword ptr [EBP + -0x10]
005fd084  CMP dword ptr [EAX + 0x1f4],0x0
005fd08b  JZ 0x005fd0ab
005fd08d  PUSH 0x0
005fd08f  MOV ECX,dword ptr [EBP + -0x10]
005fd092  MOV EDX,dword ptr [ECX + 0x1f4]
005fd098  MOV EAX,dword ptr [EBP + -0x10]
005fd09b  MOV ECX,dword ptr [EAX + 0x1f4]
005fd0a1  MOV EDX,dword ptr [EDX]
005fd0a3  MOV EAX,dword ptr [EDX + 0xb0]
005fd0a9  CALL EAX
005fd0ab  MOV ECX,dword ptr [EBP + -0x10]
005fd0ae  CMP dword ptr [ECX + 0x1f8],0x0
005fd0b5  JZ 0x005fd0d5
005fd0b7  PUSH 0x0
005fd0b9  MOV EDX,dword ptr [EBP + -0x10]
005fd0bc  MOV EAX,dword ptr [EDX + 0x1f8]
005fd0c2  MOV ECX,dword ptr [EBP + -0x10]
005fd0c5  MOV ECX,dword ptr [ECX + 0x1f8]
005fd0cb  MOV EDX,dword ptr [EAX]
005fd0cd  MOV EAX,dword ptr [EDX + 0xb0]
005fd0d3  CALL EAX
005fd0d5  MOV ECX,dword ptr [EBP + -0x10]
005fd0d8  CMP dword ptr [ECX + 0x200],0x0
005fd0df  JZ 0x005fd119
005fd0e1  MOV EDX,dword ptr [EBP + -0x10]
005fd0e4  MOV EAX,dword ptr [EDX + 0x190]
005fd0ea  MOV ECX,dword ptr [EAX + 0x60]
005fd0ed  MOV dword ptr [EBP + -0x4],ECX
005fd0f0  PUSH ECX
005fd0f1  MOV EDX,ESP
005fd0f3  MOV AX,[0x0075ee1c]
005fd0f9  MOV word ptr [EDX],AX
005fd0fc  MOV CL,byte ptr [0x0075ee1e]
005fd102  MOV byte ptr [EDX + 0x2],CL
005fd105  PUSH -0x1
005fd107  MOV EDX,dword ptr [EBP + -0x4]
005fd10a  PUSH EDX
005fd10b  MOV EAX,dword ptr [EBP + -0x10]
005fd10e  MOV ECX,dword ptr [EAX + 0x200]
005fd114  CALL 0x005ecd00
005fd119  PUSH 0x0
005fd11b  MOV ECX,dword ptr [EBP + -0x10]
005fd11e  CALL 0x005f5df0
005fd123  JMP 0x005fd22f
005fd128  MOV ECX,dword ptr [EBP + -0x10]
005fd12b  CMP dword ptr [ECX + 0x200],0x0
005fd132  JZ 0x005fd16c
005fd134  MOV EDX,dword ptr [EBP + -0x10]
005fd137  MOV EAX,dword ptr [EDX + 0x190]
005fd13d  MOV ECX,dword ptr [EAX + 0x60]
005fd140  MOV dword ptr [EBP + -0x8],ECX
005fd143  PUSH ECX
005fd144  MOV EDX,ESP
005fd146  MOV AX,[0x0075ee1c]
005fd14c  MOV word ptr [EDX],AX
005fd14f  MOV CL,byte ptr [0x0075ee1e]
005fd155  MOV byte ptr [EDX + 0x2],CL
005fd158  PUSH -0x1
005fd15a  MOV EDX,dword ptr [EBP + -0x8]
005fd15d  PUSH EDX
005fd15e  MOV EAX,dword ptr [EBP + -0x10]
005fd161  MOV ECX,dword ptr [EAX + 0x200]
005fd167  CALL 0x005ecd00
005fd16c  JMP 0x005fd22f
005fd171  MOV ECX,dword ptr [EBP + -0x10]
005fd174  CALL 0x005f5400
005fd179  CMP EAX,-0x2
005fd17c  JZ 0x005fd22f
005fd182  MOV ECX,dword ptr [EBP + -0x10]
005fd185  CALL 0x006026d0
005fd18a  MOVZX ECX,AL
005fd18d  TEST ECX,ECX
005fd18f  JZ 0x005fd22f
005fd195  MOV EDX,dword ptr [EBP + -0x10]
005fd198  CMP dword ptr [EDX + 0x1f4],0x0
005fd19f  JZ 0x005fd1c1
005fd1a1  PUSH 0x1
005fd1a3  MOV EAX,dword ptr [EBP + -0x10]
005fd1a6  MOV ECX,dword ptr [EAX + 0x1f4]
005fd1ac  MOV EDX,dword ptr [EBP + -0x10]
005fd1af  MOV EAX,dword ptr [EDX + 0x1f4]
005fd1b5  MOV EDX,dword ptr [ECX]
005fd1b7  MOV ECX,EAX
005fd1b9  MOV EAX,dword ptr [EDX + 0xb0]
005fd1bf  CALL EAX
005fd1c1  MOV ECX,dword ptr [EBP + -0x10]
005fd1c4  CMP dword ptr [ECX + 0x1f8],0x0
005fd1cb  JZ 0x005fd1eb
005fd1cd  PUSH 0x1
005fd1cf  MOV EDX,dword ptr [EBP + -0x10]
005fd1d2  MOV EAX,dword ptr [EDX + 0x1f8]
005fd1d8  MOV ECX,dword ptr [EBP + -0x10]
005fd1db  MOV ECX,dword ptr [ECX + 0x1f8]
005fd1e1  MOV EDX,dword ptr [EAX]
005fd1e3  MOV EAX,dword ptr [EDX + 0xb0]
005fd1e9  CALL EAX
005fd1eb  MOV ECX,dword ptr [EBP + -0x10]
005fd1ee  CMP dword ptr [ECX + 0x200],0x0
005fd1f5  JZ 0x005fd22f
005fd1f7  MOV EDX,dword ptr [EBP + -0x10]
005fd1fa  MOV EAX,dword ptr [EDX + 0x190]
005fd200  MOV ECX,dword ptr [EAX + 0x60]
005fd203  MOV dword ptr [EBP + -0xc],ECX
005fd206  PUSH ECX
005fd207  MOV EDX,ESP
005fd209  MOV AX,[0x0075ee1c]
005fd20f  MOV word ptr [EDX],AX
005fd212  MOV CL,byte ptr [0x0075ee1e]
005fd218  MOV byte ptr [EDX + 0x2],CL
005fd21b  PUSH -0x1
005fd21d  MOV EDX,dword ptr [EBP + -0xc]
005fd220  PUSH EDX
005fd221  MOV EAX,dword ptr [EBP + -0x10]
005fd224  MOV ECX,dword ptr [EAX + 0x200]
005fd22a  CALL 0x005ecd00
005fd22f  MOV ESP,EBP
005fd231  POP EBP
005fd232  RET
