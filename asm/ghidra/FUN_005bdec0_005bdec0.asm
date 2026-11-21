; FUN_005bdec0  005bdec0
005bdec0  PUSH EBP
005bdec1  MOV EBP,ESP
005bdec3  SUB ESP,0x44
005bdec6  MOV dword ptr [EBP + -0x24],ECX
005bdec9  MOV EAX,dword ptr [EBP + -0x24]
005bdecc  ADD EAX,0x18
005bdecf  MOV dword ptr [EBP + -0xc],EAX
005bded2  MOV ECX,dword ptr [EBP + -0xc]
005bded5  CMP dword ptr [ECX + 0x4],0x0
005bded9  JNZ 0x005bdee4
005bdedb  MOV dword ptr [EBP + -0x28],0x0
005bdee2  JMP 0x005bdef6
005bdee4  MOV EDX,dword ptr [EBP + -0xc]
005bdee7  MOV EAX,dword ptr [EBP + -0xc]
005bdeea  MOV ECX,dword ptr [EDX + 0x8]
005bdeed  SUB ECX,dword ptr [EAX + 0x4]
005bdef0  SAR ECX,0x2
005bdef3  MOV dword ptr [EBP + -0x28],ECX
005bdef6  MOV EDX,dword ptr [EBP + -0x28]
005bdef9  MOV dword ptr [EBP + -0x4],EDX
005bdefc  MOV dword ptr [EBP + -0x8],0x0
005bdf03  JMP 0x005bdf0e
005bdf05  MOV EAX,dword ptr [EBP + -0x8]
005bdf08  ADD EAX,0x1
005bdf0b  MOV dword ptr [EBP + -0x8],EAX
005bdf0e  MOV ECX,dword ptr [EBP + -0x8]
005bdf11  CMP ECX,dword ptr [EBP + -0x4]
005bdf14  JGE 0x005bdfc0
005bdf1a  MOV EDX,dword ptr [EBP + -0x24]
005bdf1d  ADD EDX,0x18
005bdf20  MOV dword ptr [EBP + -0x10],EDX
005bdf23  MOV EAX,dword ptr [EBP + -0x10]
005bdf26  CMP dword ptr [EAX + 0x4],0x0
005bdf2a  JNZ 0x005bdf35
005bdf2c  MOV dword ptr [EBP + -0x2c],0x0
005bdf33  JMP 0x005bdf47
005bdf35  MOV ECX,dword ptr [EBP + -0x10]
005bdf38  MOV EDX,dword ptr [EBP + -0x10]
005bdf3b  MOV EAX,dword ptr [ECX + 0x8]
005bdf3e  SUB EAX,dword ptr [EDX + 0x4]
005bdf41  SAR EAX,0x2
005bdf44  MOV dword ptr [EBP + -0x2c],EAX
005bdf47  MOV ECX,dword ptr [EBP + -0x8]
005bdf4a  CMP ECX,dword ptr [EBP + -0x2c]
005bdf4d  JC 0x005bdf55
005bdf4f  CALL dword ptr [0x006b2274]
005bdf55  MOV EDX,dword ptr [EBP + -0x10]
005bdf58  MOV EAX,dword ptr [EDX + 0x4]
005bdf5b  MOV ECX,dword ptr [EBP + -0x8]
005bdf5e  CMP dword ptr [EAX + ECX*0x4],0x0
005bdf62  JZ 0x005bdfbb
005bdf64  MOV EDX,dword ptr [EBP + -0x24]
005bdf67  ADD EDX,0x18
005bdf6a  MOV dword ptr [EBP + -0x14],EDX
005bdf6d  MOV EAX,dword ptr [EBP + -0x14]
005bdf70  CMP dword ptr [EAX + 0x4],0x0
005bdf74  JNZ 0x005bdf7f
005bdf76  MOV dword ptr [EBP + -0x30],0x0
005bdf7d  JMP 0x005bdf91
005bdf7f  MOV ECX,dword ptr [EBP + -0x14]
005bdf82  MOV EDX,dword ptr [EBP + -0x14]
005bdf85  MOV EAX,dword ptr [ECX + 0x8]
005bdf88  SUB EAX,dword ptr [EDX + 0x4]
005bdf8b  SAR EAX,0x2
005bdf8e  MOV dword ptr [EBP + -0x30],EAX
005bdf91  MOV ECX,dword ptr [EBP + -0x8]
005bdf94  CMP ECX,dword ptr [EBP + -0x30]
005bdf97  JC 0x005bdf9f
005bdf99  CALL dword ptr [0x006b2274]
005bdf9f  MOV EDX,dword ptr [EBP + -0x14]
005bdfa2  MOV EAX,dword ptr [EDX + 0x4]
005bdfa5  MOV ECX,dword ptr [EBP + -0x8]
005bdfa8  MOV EDX,dword ptr [EAX + ECX*0x4]
005bdfab  MOV dword ptr [EBP + -0x34],EDX
005bdfae  MOV EAX,dword ptr [EBP + -0x34]
005bdfb1  MOV EDX,dword ptr [EAX]
005bdfb3  MOV ECX,dword ptr [EBP + -0x34]
005bdfb6  MOV EAX,dword ptr [EDX + 0x70]
005bdfb9  CALL EAX
005bdfbb  JMP 0x005bdf05
005bdfc0  MOV ECX,dword ptr [EBP + -0x24]
005bdfc3  ADD ECX,0x58
005bdfc6  MOV dword ptr [EBP + -0x18],ECX
005bdfc9  MOV EDX,dword ptr [EBP + -0x18]
005bdfcc  CMP dword ptr [EDX + 0x4],0x0
005bdfd0  JNZ 0x005bdfdb
005bdfd2  MOV dword ptr [EBP + -0x38],0x0
005bdfd9  JMP 0x005bdfed
005bdfdb  MOV EAX,dword ptr [EBP + -0x18]
005bdfde  MOV ECX,dword ptr [EBP + -0x18]
005bdfe1  MOV EDX,dword ptr [EAX + 0x8]
005bdfe4  SUB EDX,dword ptr [ECX + 0x4]
005bdfe7  SAR EDX,0x2
005bdfea  MOV dword ptr [EBP + -0x38],EDX
005bdfed  MOV EAX,dword ptr [EBP + -0x38]
005bdff0  MOV dword ptr [EBP + -0x4],EAX
005bdff3  MOV dword ptr [EBP + -0x8],0x0
005bdffa  JMP 0x005be005
005bdffc  MOV ECX,dword ptr [EBP + -0x8]
005bdfff  ADD ECX,0x1
005be002  MOV dword ptr [EBP + -0x8],ECX
005be005  MOV EDX,dword ptr [EBP + -0x8]
005be008  CMP EDX,dword ptr [EBP + -0x4]
005be00b  JGE 0x005be0b7
005be011  MOV EAX,dword ptr [EBP + -0x24]
005be014  ADD EAX,0x58
005be017  MOV dword ptr [EBP + -0x1c],EAX
005be01a  MOV ECX,dword ptr [EBP + -0x1c]
005be01d  CMP dword ptr [ECX + 0x4],0x0
005be021  JNZ 0x005be02c
005be023  MOV dword ptr [EBP + -0x3c],0x0
005be02a  JMP 0x005be03e
005be02c  MOV EDX,dword ptr [EBP + -0x1c]
005be02f  MOV EAX,dword ptr [EBP + -0x1c]
005be032  MOV ECX,dword ptr [EDX + 0x8]
005be035  SUB ECX,dword ptr [EAX + 0x4]
005be038  SAR ECX,0x2
005be03b  MOV dword ptr [EBP + -0x3c],ECX
005be03e  MOV EDX,dword ptr [EBP + -0x8]
005be041  CMP EDX,dword ptr [EBP + -0x3c]
005be044  JC 0x005be04c
005be046  CALL dword ptr [0x006b2274]
005be04c  MOV EAX,dword ptr [EBP + -0x1c]
005be04f  MOV ECX,dword ptr [EAX + 0x4]
005be052  MOV EDX,dword ptr [EBP + -0x8]
005be055  CMP dword ptr [ECX + EDX*0x4],0x0
005be059  JZ 0x005be0b2
005be05b  MOV EAX,dword ptr [EBP + -0x24]
005be05e  ADD EAX,0x58
005be061  MOV dword ptr [EBP + -0x20],EAX
005be064  MOV ECX,dword ptr [EBP + -0x20]
005be067  CMP dword ptr [ECX + 0x4],0x0
005be06b  JNZ 0x005be076
005be06d  MOV dword ptr [EBP + -0x40],0x0
005be074  JMP 0x005be088
005be076  MOV EDX,dword ptr [EBP + -0x20]
005be079  MOV EAX,dword ptr [EBP + -0x20]
005be07c  MOV ECX,dword ptr [EDX + 0x8]
005be07f  SUB ECX,dword ptr [EAX + 0x4]
005be082  SAR ECX,0x2
005be085  MOV dword ptr [EBP + -0x40],ECX
005be088  MOV EDX,dword ptr [EBP + -0x8]
005be08b  CMP EDX,dword ptr [EBP + -0x40]
005be08e  JC 0x005be096
005be090  CALL dword ptr [0x006b2274]
005be096  MOV EAX,dword ptr [EBP + -0x20]
005be099  MOV ECX,dword ptr [EAX + 0x4]
005be09c  MOV EDX,dword ptr [EBP + -0x8]
005be09f  MOV EAX,dword ptr [ECX + EDX*0x4]
005be0a2  MOV dword ptr [EBP + -0x44],EAX
005be0a5  MOV ECX,dword ptr [EBP + -0x44]
005be0a8  MOV EDX,dword ptr [ECX]
005be0aa  MOV ECX,dword ptr [EBP + -0x44]
005be0ad  MOV EAX,dword ptr [EDX + 0x70]
005be0b0  CALL EAX
005be0b2  JMP 0x005bdffc
005be0b7  PUSH 0x6
005be0b9  MOV ECX,dword ptr [EBP + -0x24]
005be0bc  CALL 0x005bceb0
005be0c1  MOV ESP,EBP
005be0c3  POP EBP
005be0c4  RET
