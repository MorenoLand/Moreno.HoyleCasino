; FUN_004afe60  004afe60
004afe60  PUSH EBP
004afe61  MOV EBP,ESP
004afe63  SUB ESP,0x64
004afe66  PUSH ESI
004afe67  MOV ECX,dword ptr [0x00791364]
004afe6d  CALL 0x0047e420
004afe72  MOV dword ptr [EBP + -0x30],EAX
004afe75  MOV word ptr [EBP + -0x2c],0x0
004afe7b  MOV word ptr [EBP + -0x38],0x0
004afe81  JMP 0x004afe8f
004afe83  MOV AX,word ptr [EBP + -0x38]
004afe87  ADD AX,0x1
004afe8b  MOV word ptr [EBP + -0x38],AX
004afe8f  MOVSX ESI,word ptr [EBP + -0x38]
004afe93  MOV ECX,dword ptr [0x00791364]
004afe99  CALL 0x0047f950
004afe9e  CMP ESI,EAX
004afea0  JGE 0x004aff3a
004afea6  MOVSX ECX,word ptr [EBP + -0x38]
004afeaa  CMP ECX,dword ptr [EBP + -0x30]
004afead  JNZ 0x004afeb1
004afeaf  JMP 0x004afe83
004afeb1  MOVSX EDX,word ptr [EBP + -0x38]
004afeb5  PUSH EDX
004afeb6  MOV ECX,dword ptr [0x00791364]
004afebc  CALL 0x0047e390
004afec1  MOV ECX,EAX
004afec3  CALL 0x004c7010
004afec8  CMP EAX,0x1
004afecb  JNZ 0x004aff35
004afecd  MOVSX EAX,word ptr [EBP + -0x38]
004afed1  PUSH EAX
004afed2  MOV ECX,dword ptr [0x00791364]
004afed8  CALL 0x0047e390
004afedd  MOV ECX,EAX
004afedf  CALL 0x004c7050
004afee4  PUSH EAX
004afee5  MOV ECX,dword ptr [0x00791364]
004afeeb  ADD ECX,0x38
004afeee  CALL 0x004f69e0
004afef3  MOVSX ECX,AX
004afef6  MOVSX EDX,word ptr [EBP + -0x2c]
004afefa  ADD EDX,ECX
004afefc  MOV word ptr [EBP + -0x2c],DX
004aff00  MOVSX EAX,word ptr [EBP + -0x38]
004aff04  PUSH EAX
004aff05  MOV ECX,dword ptr [0x00791364]
004aff0b  CALL 0x0047e390
004aff10  MOV ECX,EAX
004aff12  CALL 0x004c7050
004aff17  PUSH EAX
004aff18  MOV ECX,dword ptr [0x00791364]
004aff1e  ADD ECX,0x38
004aff21  CALL 0x004f6880
004aff26  MOVSX ECX,AX
004aff29  TEST ECX,ECX
004aff2b  JLE 0x004aff35
004aff2d  MOV word ptr [EBP + -0x2c],0x0
004aff33  JMP 0x004aff3a
004aff35  JMP 0x004afe83
004aff3a  MOV ECX,dword ptr [0x00791890]
004aff40  CALL 0x004ee560
004aff45  MOVSX EDX,AX
004aff48  ADD EDX,0x1
004aff4b  PUSH EDX
004aff4c  CALL 0x0062fbf0
004aff51  ADD ESP,0x4
004aff54  MOV word ptr [EBP + -0x24],AX
004aff58  MOV EAX,dword ptr [EBP + -0x30]
004aff5b  MOVSX ECX,word ptr [EAX*0x2 + 0x791798]
004aff63  MOVSX EDX,word ptr [EBP + -0x2c]
004aff67  MOVSX EAX,word ptr [EBP + -0x24]
004aff6b  IMUL EDX,EAX
004aff6e  ADD ECX,EDX
004aff70  CMP ECX,0xa
004aff73  JLE 0x004affaa
004aff75  MOV ECX,dword ptr [EBP + -0x30]
004aff78  MOVSX EDX,word ptr [ECX*0x2 + 0x791798]
004aff80  MOVSX EAX,word ptr [EBP + -0x2c]
004aff84  MOVSX ECX,word ptr [EBP + -0x24]
004aff88  IMUL EAX,ECX
004aff8b  LEA EDX,[EDX + EAX*0x1 + -0xa]
004aff8f  MOV dword ptr [EBP + -0x3c],EDX
004aff92  FILD dword ptr [EBP + -0x3c]
004aff95  FDIV double ptr [0x006b4b00]
004aff9b  MOV EAX,dword ptr [EBP + -0x30]
004aff9e  FADD double ptr [EAX*0x8 + 0x791d90]
004affa5  FSTP double ptr [EBP + -0x20]
004affa8  JMP 0x004affb7
004affaa  MOV ECX,dword ptr [EBP + -0x30]
004affad  FLD double ptr [ECX*0x8 + 0x791d90]
004affb4  FSTP double ptr [EBP + -0x20]
004affb7  PUSH 0x3
004affb9  MOV ECX,dword ptr [0x00791890]
004affbf  CALL 0x004ef440
004affc4  MOV word ptr [EBP + -0x34],AX
004affc8  PUSH 0x2
004affca  MOV ECX,dword ptr [0x00791890]
004affd0  CALL 0x004ef440
004affd5  MOV word ptr [EBP + -0x14],AX
004affd9  PUSH 0x1
004affdb  MOV ECX,dword ptr [0x00791890]
004affe1  CALL 0x004ef440
004affe6  MOV word ptr [EBP + -0x28],AX
004affea  MOV ECX,dword ptr [0x00791890]
004afff0  CALL 0x004ef730
004afff5  MOV word ptr [EBP + -0x4],AX
004afff9  MOVSX EDX,word ptr [EBP + -0x4]
004afffd  PUSH EDX
004afffe  CALL 0x0062fbf0
004b0003  ADD ESP,0x4
004b0006  MOV dword ptr [EBP + -0x40],EAX
004b0009  FILD dword ptr [EBP + -0x40]
004b000c  FDIV double ptr [0x006b4b00]
004b0012  FLD1
004b0014  FADDP
004b0016  MOVSX EAX,word ptr [EBP + -0x4]
004b001a  PUSH EAX
004b001b  FSTP double ptr [EBP + -0x48]
004b001e  CALL 0x0062fbf0
004b0023  ADD ESP,0x4
004b0026  MOV dword ptr [EBP + -0x4c],EAX
004b0029  FILD dword ptr [EBP + -0x4c]
004b002c  FDIV double ptr [0x006b4b00]
004b0032  FSUBR double ptr [EBP + -0x48]
004b0035  FIDIV dword ptr [EBP + 0xc]
004b0038  FSTP double ptr [EBP + -0x10]
004b003b  MOVSX ECX,word ptr [EBP + -0x34]
004b003f  MOV dword ptr [EBP + -0x50],ECX
004b0042  FILD dword ptr [EBP + -0x50]
004b0045  FDIV double ptr [0x006b4b00]
004b004b  FADD double ptr [EBP + -0x10]
004b004e  MOV EDX,dword ptr [EBP + -0x30]
004b0051  FCOMP double ptr [EDX*0x8 + 0x791d90]
004b0058  FNSTSW AX
004b005a  TEST AH,0x5
004b005d  JP 0x004b0078
004b005f  MOV EAX,dword ptr [EBP + -0x30]
004b0062  MOV word ptr [EAX*0x2 + 0x791768],0x5
004b006c  MOV AL,0x1
004b006e  JMP 0x004b0182
004b0078  MOVSX ECX,word ptr [EBP + -0x14]
004b007c  MOV dword ptr [EBP + -0x54],ECX
004b007f  FILD dword ptr [EBP + -0x54]
004b0082  FDIV double ptr [0x006b4b00]
004b0088  FADD double ptr [EBP + -0x10]
004b008b  MOV EDX,dword ptr [EBP + -0x30]
004b008e  FCOMP double ptr [EDX*0x8 + 0x791d90]
004b0095  FNSTSW AX
004b0097  TEST AH,0x5
004b009a  JP 0x004b00b5
004b009c  MOV EAX,dword ptr [EBP + -0x30]
004b009f  MOV word ptr [EAX*0x2 + 0x791768],0x4
004b00a9  MOV AL,0x1
004b00ab  JMP 0x004b0182
004b00b5  MOVSX ECX,word ptr [EBP + -0x28]
004b00b9  MOV dword ptr [EBP + -0x58],ECX
004b00bc  FILD dword ptr [EBP + -0x58]
004b00bf  FDIV double ptr [0x006b4b00]
004b00c5  FADD double ptr [EBP + -0x10]
004b00c8  MOV EDX,dword ptr [EBP + -0x30]
004b00cb  FCOMP double ptr [EDX*0x8 + 0x791d90]
004b00d2  FNSTSW AX
004b00d4  TEST AH,0x5
004b00d7  JP 0x004b00f2
004b00d9  MOV EAX,dword ptr [EBP + -0x30]
004b00dc  MOV word ptr [EAX*0x2 + 0x791768],0x3
004b00e6  MOV AL,0x1
004b00e8  JMP 0x004b0182
004b00f2  MOVSX ECX,word ptr [EBP + -0x34]
004b00f6  MOV dword ptr [EBP + -0x5c],ECX
004b00f9  FILD dword ptr [EBP + -0x5c]
004b00fc  FDIV double ptr [0x006b4b00]
004b0102  FADD double ptr [EBP + -0x10]
004b0105  FCOMP double ptr [EBP + -0x20]
004b0108  FNSTSW AX
004b010a  TEST AH,0x5
004b010d  JP 0x004b0122
004b010f  MOV EDX,dword ptr [EBP + -0x30]
004b0112  MOV word ptr [EDX*0x2 + 0x791768],0xc
004b011c  MOV AL,0x1
004b011e  JMP 0x004b0182
004b0122  MOVSX EAX,word ptr [EBP + -0x14]
004b0126  MOV dword ptr [EBP + -0x60],EAX
004b0129  FILD dword ptr [EBP + -0x60]
004b012c  FDIV double ptr [0x006b4b00]
004b0132  FADD double ptr [EBP + -0x10]
004b0135  FCOMP double ptr [EBP + -0x20]
004b0138  FNSTSW AX
004b013a  TEST AH,0x5
004b013d  JP 0x004b0152
004b013f  MOV ECX,dword ptr [EBP + -0x30]
004b0142  MOV word ptr [ECX*0x2 + 0x791768],0xb
004b014c  MOV AL,0x1
004b014e  JMP 0x004b0182
004b0152  MOVSX EDX,word ptr [EBP + -0x28]
004b0156  MOV dword ptr [EBP + -0x64],EDX
004b0159  FILD dword ptr [EBP + -0x64]
004b015c  FDIV double ptr [0x006b4b00]
004b0162  FADD double ptr [EBP + -0x10]
004b0165  FCOMP double ptr [EBP + -0x20]
004b0168  FNSTSW AX
004b016a  TEST AH,0x5
004b016d  JP 0x004b0180
004b016f  MOV EAX,dword ptr [EBP + -0x30]
004b0172  MOV word ptr [EAX*0x2 + 0x791768],0xa
004b017c  MOV AL,0x1
004b017e  JMP 0x004b0182
004b0180  XOR AL,AL
004b0182  POP ESI
004b0183  MOV ESP,EBP
004b0185  POP EBP
004b0186  RET
