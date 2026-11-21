; FUN_0040fdc0  0040fdc0
0040fdc0  PUSH EBP
0040fdc1  MOV EBP,ESP
0040fdc3  SUB ESP,0x1c
0040fdc6  MOV dword ptr [EBP + -0x14],ECX
0040fdc9  MOV EAX,[0x00790324]
0040fdce  MOV ECX,dword ptr [EAX + 0x4d0]
0040fdd4  MOV dword ptr [EBP + -0x4],ECX
0040fdd7  CMP dword ptr [EBP + -0x4],-0x1
0040fddb  JNZ 0x0040fde6
0040fddd  MOV dword ptr [EBP + -0xc],0xffffffff
0040fde4  JMP 0x0040fe14
0040fde6  CMP dword ptr [EBP + -0x4],0x4
0040fdea  JNZ 0x0040fdf5
0040fdec  MOV dword ptr [EBP + -0x18],0x0
0040fdf3  JMP 0x0040fe0e
0040fdf5  MOV EDX,dword ptr [EBP + -0x4]
0040fdf8  IMUL EDX,EDX,0x118
0040fdfe  MOV EAX,[0x00790324]
0040fe03  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0040fe0b  MOV dword ptr [EBP + -0x18],ECX
0040fe0e  MOV EDX,dword ptr [EBP + -0x18]
0040fe11  MOV dword ptr [EBP + -0xc],EDX
0040fe14  MOV EAX,dword ptr [EBP + -0x14]
0040fe17  MOV ECX,dword ptr [EBP + -0x14]
0040fe1a  MOV EDX,dword ptr [EAX + 0x50]
0040fe1d  SUB EDX,dword ptr [ECX + 0x48]
0040fe20  PUSH EDX
0040fe21  CALL 0x00686eba
0040fe26  ADD ESP,0x4
0040fe29  MOV dword ptr [EBP + -0x10],EAX
0040fe2c  CMP dword ptr [EBP + -0x10],0x32
0040fe30  JGE 0x0040fe39
0040fe32  MOV dword ptr [EBP + -0x10],0x0
0040fe39  MOV EAX,dword ptr [EBP + -0x14]
0040fe3c  MOV ECX,dword ptr [EBP + -0x14]
0040fe3f  MOV EDX,dword ptr [EAX + 0x54]
0040fe42  SUB EDX,dword ptr [ECX + 0x4c]
0040fe45  MOV dword ptr [EBP + -0x8],EDX
0040fe48  CMP dword ptr [EBP + -0x8],0x32
0040fe4c  JGE 0x0040fe55
0040fe4e  MOV dword ptr [EBP + -0x8],0x0
0040fe55  MOV EAX,dword ptr [EBP + -0x14]
0040fe58  MOV ECX,dword ptr [EAX + 0x58]
0040fe5b  MOV dword ptr [EBP + -0x1c],ECX
0040fe5e  CMP dword ptr [EBP + -0x1c],0x8
0040fe62  JZ 0x0040fe73
0040fe64  CMP dword ptr [EBP + -0x1c],0x10
0040fe68  JZ 0x0040fef3
0040fe6e  JMP 0x0040ff7d
0040fe73  MOV EDX,dword ptr [EBP + -0x10]
0040fe76  CMP EDX,dword ptr [EBP + -0x8]
0040fe79  JLE 0x0040fea0
0040fe7b  PUSH 0x1
0040fe7d  PUSH 0x0
0040fe7f  MOV EAX,dword ptr [EBP + -0x4]
0040fe82  PUSH EAX
0040fe83  MOV ECX,dword ptr [0x00790328]
0040fe89  CALL 0x00413360
0040fe8e  MOVZX ECX,AL
0040fe91  TEST ECX,ECX
0040fe93  JZ 0x0040fea0
0040fe95  MOV ECX,dword ptr [0x0079032c]
0040fe9b  CALL 0x0040da70
0040fea0  MOV EDX,dword ptr [EBP + -0x8]
0040fea3  CMP EDX,dword ptr [EBP + -0x10]
0040fea6  JLE 0x0040feee
0040fea8  MOV EAX,dword ptr [EBP + -0x4]
0040feab  IMUL EAX,EAX,0x118
0040feb1  MOV ECX,dword ptr [0x00790324]
0040feb7  CMP byte ptr [ECX + EAX*0x1 + 0x118],0x0
0040febf  SETNZ DL
0040fec2  MOVZX EAX,DL
0040fec5  TEST EAX,EAX
0040fec7  JNZ 0x0040feee
0040fec9  PUSH 0x1
0040fecb  PUSH 0x1
0040fecd  MOV ECX,dword ptr [EBP + -0x4]
0040fed0  PUSH ECX
0040fed1  MOV ECX,dword ptr [0x00790328]
0040fed7  CALL 0x00413360
0040fedc  MOVZX EDX,AL
0040fedf  TEST EDX,EDX
0040fee1  JZ 0x0040feee
0040fee3  MOV ECX,dword ptr [0x0079032c]
0040fee9  CALL 0x0040da70
0040feee  JMP 0x0040ff7d
0040fef3  MOV EAX,dword ptr [EBP + -0x10]
0040fef6  CMP EAX,dword ptr [EBP + -0x8]
0040fef9  JLE 0x0040ff3a
0040fefb  MOV ECX,dword ptr [EBP + -0xc]
0040fefe  PUSH ECX
0040feff  MOV EDX,dword ptr [EBP + -0x4]
0040ff02  PUSH EDX
0040ff03  MOV ECX,dword ptr [0x00790324]
0040ff09  CALL 0x0041ade0
0040ff0e  MOVZX EAX,AL
0040ff11  TEST EAX,EAX
0040ff13  JZ 0x0040ff3a
0040ff15  PUSH 0x1
0040ff17  PUSH 0x3
0040ff19  MOV ECX,dword ptr [EBP + -0x4]
0040ff1c  PUSH ECX
0040ff1d  MOV ECX,dword ptr [0x00790328]
0040ff23  CALL 0x00413360
0040ff28  MOVZX EDX,AL
0040ff2b  TEST EDX,EDX
0040ff2d  JZ 0x0040ff3a
0040ff2f  MOV ECX,dword ptr [0x0079032c]
0040ff35  CALL 0x0040da70
0040ff3a  MOV EAX,dword ptr [EBP + -0x8]
0040ff3d  CMP EAX,dword ptr [EBP + -0x10]
0040ff40  JLE 0x0040ff7d
0040ff42  MOV ECX,dword ptr [EBP + -0x4]
0040ff45  PUSH ECX
0040ff46  MOV ECX,dword ptr [0x00790324]
0040ff4c  CALL 0x0041a960
0040ff51  MOVZX EDX,AL
0040ff54  TEST EDX,EDX
0040ff56  JZ 0x0040ff7d
0040ff58  PUSH 0x1
0040ff5a  PUSH 0x2
0040ff5c  MOV EAX,dword ptr [EBP + -0x4]
0040ff5f  PUSH EAX
0040ff60  MOV ECX,dword ptr [0x00790328]
0040ff66  CALL 0x00413360
0040ff6b  MOVZX ECX,AL
0040ff6e  TEST ECX,ECX
0040ff70  JZ 0x0040ff7d
0040ff72  MOV ECX,dword ptr [0x0079032c]
0040ff78  CALL 0x0040da70
0040ff7d  MOV ESP,EBP
0040ff7f  POP EBP
0040ff80  RET
