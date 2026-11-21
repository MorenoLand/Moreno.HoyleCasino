; FUN_004af990  004af990
004af990  PUSH EBP
004af991  MOV EBP,ESP
004af993  SUB ESP,0x94
004af999  PUSH ESI
004af99a  MOV ECX,dword ptr [0x00791364]
004af9a0  CALL 0x0047e420
004af9a5  MOV dword ptr [EBP + -0x14],EAX
004af9a8  FLD1
004af9aa  FSTP double ptr [EBP + -0x10]
004af9ad  MOV ECX,dword ptr [0x00791890]
004af9b3  CALL 0x004edfa0
004af9b8  FIDIV dword ptr [EBP + 0xc]
004af9bb  FSTP double ptr [EBP + -0x8]
004af9be  MOV word ptr [EBP + -0x18],0x0
004af9c4  JMP 0x004af9d2
004af9c6  MOV AX,word ptr [EBP + -0x18]
004af9ca  ADD AX,0x1
004af9ce  MOV word ptr [EBP + -0x18],AX
004af9d2  MOVSX ESI,word ptr [EBP + -0x18]
004af9d6  MOV ECX,dword ptr [0x00791364]
004af9dc  CALL 0x0047f950
004af9e1  CMP ESI,EAX
004af9e3  JGE 0x004afdf0
004af9e9  MOVSX ECX,word ptr [EBP + -0x18]
004af9ed  CMP ECX,dword ptr [EBP + -0x14]
004af9f0  JNZ 0x004af9f4
004af9f2  JMP 0x004af9c6
004af9f4  MOVSX EDX,word ptr [EBP + -0x18]
004af9f8  PUSH EDX
004af9f9  MOV ECX,dword ptr [0x00791364]
004af9ff  CALL 0x0047e390
004afa04  MOV ECX,EAX
004afa06  CALL 0x004c7010
004afa0b  CMP EAX,0x1
004afa0e  JNZ 0x004afdeb
004afa14  FLDZ
004afa16  FSTP double ptr [EBP + -0x28]
004afa19  MOV AX,word ptr [EBP + 0xc]
004afa1d  PUSH EAX
004afa1e  MOV CX,word ptr [EBP + -0x18]
004afa22  PUSH ECX
004afa23  MOV ECX,dword ptr [0x00791890]
004afa29  CALL 0x004ef250
004afa2e  FSTP double ptr [EBP + -0x20]
004afa31  MOV EDX,dword ptr [EBP + -0x14]
004afa34  SHL EDX,0x6
004afa37  MOVSX EAX,word ptr [EBP + -0x18]
004afa3b  FLD double ptr [EBP + -0x20]
004afa3e  FMUL double ptr [EDX + EAX*0x8 + 0x791ae0]
004afa45  FCOMP double ptr [EBP + -0x8]
004afa48  FNSTSW AX
004afa4a  TEST AH,0x41
004afa4d  JNZ 0x004afa58
004afa4f  MOV byte ptr [EBP + -0x29],0x1
004afa53  JMP 0x004afc71
004afa58  MOVSX ECX,word ptr [EBP + -0x18]
004afa5c  PUSH ECX
004afa5d  MOV ECX,dword ptr [0x00791364]
004afa63  CALL 0x0047e390
004afa68  MOV ECX,EAX
004afa6a  CALL 0x004c7050
004afa6f  MOV dword ptr [EBP + -0x34],EAX
004afa72  MOV DX,word ptr [EBP + -0x34]
004afa76  PUSH EDX
004afa77  MOV ECX,dword ptr [0x00791364]
004afa7d  ADD ECX,0x38
004afa80  CALL 0x004f6880
004afa85  MOV word ptr [EBP + -0x40],AX
004afa89  MOV AX,word ptr [EBP + -0x34]
004afa8d  PUSH EAX
004afa8e  MOV ECX,dword ptr [0x00791364]
004afa94  ADD ECX,0x38
004afa97  CALL 0x004f6930
004afa9c  MOV word ptr [EBP + -0x38],AX
004afaa0  MOV CX,word ptr [EBP + -0x34]
004afaa4  PUSH ECX
004afaa5  MOV ECX,dword ptr [0x00791364]
004afaab  ADD ECX,0x38
004afaae  CALL 0x004f6a90
004afab3  MOVSX EDX,AX
004afab6  MOVSX EAX,word ptr [EBP + -0x40]
004afaba  SUB EDX,EAX
004afabc  MOV word ptr [EBP + -0x44],DX
004afac0  MOV CX,word ptr [EBP + -0x34]
004afac4  PUSH ECX
004afac5  MOV ECX,dword ptr [0x00791364]
004afacb  ADD ECX,0x38
004aface  CALL 0x004f6b20
004afad3  MOVSX EDX,AX
004afad6  MOVSX EAX,word ptr [EBP + -0x38]
004afada  SUB EDX,EAX
004afadc  MOV word ptr [EBP + -0x30],DX
004afae0  MOV ECX,dword ptr [0x00791364]
004afae6  CALL 0x0047f0c0
004afaeb  CMP dword ptr [EBP + 0x8],EAX
004afaee  JGE 0x004afb19
004afaf0  MOVSX ECX,word ptr [EBP + -0x38]
004afaf4  TEST ECX,ECX
004afaf6  JNZ 0x004afb19
004afaf8  MOVSX EDX,word ptr [EBP + -0x40]
004afafc  TEST EDX,EDX
004afafe  JNZ 0x004afb19
004afb00  MOV AX,word ptr [EBP + -0x34]
004afb04  PUSH EAX
004afb05  MOV ECX,dword ptr [0x00791364]
004afb0b  ADD ECX,0x38
004afb0e  CALL 0x004f69e0
004afb13  MOV word ptr [EBP + -0x3c],AX
004afb17  JMP 0x004afb1f
004afb19  MOV word ptr [EBP + -0x3c],0x0
004afb1f  MOVSX ECX,word ptr [EBP + -0x40]
004afb23  TEST ECX,ECX
004afb25  JGE 0x004afb3e
004afb27  PUSH 0x1039
004afb2c  PUSH 0x6be4fc
004afb31  PUSH 0x6bc25c
004afb36  CALL 0x005e9f20
004afb3b  ADD ESP,0xc
004afb3e  MOVSX EAX,word ptr [EBP + -0x38]
004afb42  TEST EAX,EAX
004afb44  JGE 0x004afb5d
004afb46  PUSH 0x103a
004afb4b  PUSH 0x6be4fc
004afb50  PUSH 0x6bc248
004afb55  CALL 0x005e9f20
004afb5a  ADD ESP,0xc
004afb5d  MOVSX EDX,word ptr [EBP + -0x3c]
004afb61  TEST EDX,EDX
004afb63  JGE 0x004afb7c
004afb65  PUSH 0x103b
004afb6a  PUSH 0x6be4fc
004afb6f  PUSH 0x6bc230
004afb74  CALL 0x005e9f20
004afb79  ADD ESP,0xc
004afb7c  MOVSX ECX,word ptr [EBP + -0x44]
004afb80  TEST ECX,ECX
004afb82  JGE 0x004afb9b
004afb84  PUSH 0x103c
004afb89  PUSH 0x6be4fc
004afb8e  PUSH 0x6bc220
004afb93  CALL 0x005e9f20
004afb98  ADD ESP,0xc
004afb9b  MOVSX EAX,word ptr [EBP + -0x30]
004afb9f  TEST EAX,EAX
004afba1  JGE 0x004afbba
004afba3  PUSH 0x103d
004afba8  PUSH 0x6be4fc
004afbad  PUSH 0x6bc210
004afbb2  CALL 0x005e9f20
004afbb7  ADD ESP,0xc
004afbba  MOV byte ptr [EBP + -0x29],0x0
004afbbe  MOV ECX,dword ptr [0x00791890]
004afbc4  CALL 0x004edfd0
004afbc9  MOVSX EDX,word ptr [EBP + -0x44]
004afbcd  MOV dword ptr [EBP + -0x5c],EDX
004afbd0  FILD dword ptr [EBP + -0x5c]
004afbd3  FMULP
004afbd5  FLD1
004afbd7  FADDP
004afbd9  MOV ECX,dword ptr [0x00791890]
004afbdf  FSTP double ptr [EBP + -0x64]
004afbe2  CALL 0x004ee0a0
004afbe7  MOVSX EAX,word ptr [EBP + -0x30]
004afbeb  MOV dword ptr [EBP + -0x68],EAX
004afbee  FILD dword ptr [EBP + -0x68]
004afbf1  FMULP
004afbf3  FADD double ptr [EBP + -0x64]
004afbf6  MOV ECX,dword ptr [0x00791890]
004afbfc  FSTP double ptr [EBP + -0x70]
004afbff  CALL 0x004ee170
004afc04  MOVSX ECX,word ptr [EBP + -0x40]
004afc08  MOV dword ptr [EBP + -0x74],ECX
004afc0b  FILD dword ptr [EBP + -0x74]
004afc0e  FMULP
004afc10  FADD double ptr [EBP + -0x70]
004afc13  MOV ECX,dword ptr [0x00791890]
004afc19  FSTP double ptr [EBP + -0x7c]
004afc1c  CALL 0x004ee240
004afc21  MOVSX EDX,word ptr [EBP + -0x38]
004afc25  MOV dword ptr [EBP + -0x80],EDX
004afc28  FILD dword ptr [EBP + -0x80]
004afc2b  FMULP
004afc2d  FADD double ptr [EBP + -0x7c]
004afc30  MOV ECX,dword ptr [0x00791890]
004afc36  FSTP double ptr [EBP + 0xffffff78]
004afc3c  CALL 0x004edeb0
004afc41  MOVSX EAX,AX
004afc44  MOV dword ptr [EBP + 0xffffff74],EAX
004afc4a  FILD dword ptr [EBP + 0xffffff74]
004afc50  FDIV double ptr [0x006bc280]
004afc56  MOVSX ECX,word ptr [EBP + -0x3c]
004afc5a  MOV dword ptr [EBP + 0xffffff70],ECX
004afc60  FILD dword ptr [EBP + 0xffffff70]
004afc66  FMULP
004afc68  FSUBR double ptr [EBP + 0xffffff78]
004afc6e  FSTP double ptr [EBP + -0x28]
004afc71  MOVZX EDX,byte ptr [EBP + -0x29]
004afc75  TEST EDX,EDX
004afc77  JZ 0x004afd23
004afc7d  MOV ECX,dword ptr [0x00791364]
004afc83  CALL 0x0047f0c0
004afc88  CMP dword ptr [EBP + 0x8],EAX
004afc8b  JGE 0x004afcb5
004afc8d  MOV EAX,dword ptr [EBP + -0x14]
004afc90  FLD double ptr [EAX*0x8 + 0x791958]
004afc97  FSUB double ptr [0x006b2c38]
004afc9d  FMUL double ptr [0x006b3740]
004afca3  MOV ECX,dword ptr [EBP + -0x14]
004afca6  FADD double ptr [ECX*0x8 + 0x7916e8]
004afcad  FMUL double ptr [EBP + -0x10]
004afcb0  FSTP double ptr [EBP + -0x10]
004afcb3  JMP 0x004afd1e
004afcb5  MOV EDX,dword ptr [EBP + -0x14]
004afcb8  MOV EAX,dword ptr [EBP + -0x14]
004afcbb  FLD double ptr [EAX*0x8 + 0x791958]
004afcc2  FCOMP double ptr [EDX*0x8 + 0x7916e8]
004afcc9  FNSTSW AX
004afccb  TEST AH,0x5
004afcce  JP 0x004afcf8
004afcd0  MOV ECX,dword ptr [EBP + -0x14]
004afcd3  FLD double ptr [0x006be728]
004afcd9  FMUL double ptr [ECX*0x8 + 0x7916e8]
004afce0  MOV EDX,dword ptr [EBP + -0x14]
004afce3  FADD double ptr [EDX*0x8 + 0x791958]
004afcea  FDIV double ptr [0x006be720]
004afcf0  FMUL double ptr [EBP + -0x10]
004afcf3  FSTP double ptr [EBP + -0x10]
004afcf6  JMP 0x004afd1e
004afcf8  MOV EAX,dword ptr [EBP + -0x14]
004afcfb  FLD double ptr [0x006be728]
004afd01  FMUL double ptr [EAX*0x8 + 0x791958]
004afd08  MOV ECX,dword ptr [EBP + -0x14]
004afd0b  FADD double ptr [ECX*0x8 + 0x7916e8]
004afd12  FDIV double ptr [0x006be720]
004afd18  FMUL double ptr [EBP + -0x10]
004afd1b  FSTP double ptr [EBP + -0x10]
004afd1e  JMP 0x004afdda
004afd23  MOV EDX,dword ptr [EBP + -0x14]
004afd26  FLD1
004afd28  FSUB double ptr [EDX*0x8 + 0x7916e8]
004afd2f  FMUL double ptr [EBP + -0x28]
004afd32  FLD1
004afd34  FSUBRP
004afd36  FSTP double ptr [EBP + -0x50]
004afd39  MOV EAX,dword ptr [EBP + -0x14]
004afd3c  FLD1
004afd3e  FSUB double ptr [EAX*0x8 + 0x791958]
004afd45  FMUL double ptr [EBP + -0x28]
004afd48  FLD1
004afd4a  FSUBRP
004afd4c  FSTP double ptr [EBP + -0x58]
004afd4f  FLDZ
004afd51  FCOMP double ptr [EBP + -0x50]
004afd54  FNSTSW AX
004afd56  TEST AH,0x41
004afd59  JNZ 0x004afd60
004afd5b  FLDZ
004afd5d  FSTP double ptr [EBP + -0x50]
004afd60  FLDZ
004afd62  FCOMP double ptr [EBP + -0x58]
004afd65  FNSTSW AX
004afd67  TEST AH,0x41
004afd6a  JNZ 0x004afd71
004afd6c  FLDZ
004afd6e  FSTP double ptr [EBP + -0x58]
004afd71  MOV ECX,dword ptr [0x00791364]
004afd77  CALL 0x0047f0c0
004afd7c  CMP dword ptr [EBP + 0x8],EAX
004afd7f  JGE 0x004afd9b
004afd81  FLD double ptr [EBP + -0x58]
004afd84  FSUB double ptr [0x006b2c38]
004afd8a  FMUL double ptr [0x006b3740]
004afd90  FADD double ptr [EBP + -0x50]
004afd93  FMUL double ptr [EBP + -0x10]
004afd96  FSTP double ptr [EBP + -0x10]
004afd99  JMP 0x004afdda
004afd9b  FLD double ptr [EBP + -0x58]
004afd9e  FCOMP double ptr [EBP + -0x50]
004afda1  FNSTSW AX
004afda3  TEST AH,0x5
004afda6  JP 0x004afdc2
004afda8  FLD double ptr [0x006be728]
004afdae  FMUL double ptr [EBP + -0x50]
004afdb1  FADD double ptr [EBP + -0x58]
004afdb4  FDIV double ptr [0x006be720]
004afdba  FMUL double ptr [EBP + -0x10]
004afdbd  FSTP double ptr [EBP + -0x10]
004afdc0  JMP 0x004afdda
004afdc2  FLD double ptr [0x006be728]
004afdc8  FMUL double ptr [EBP + -0x58]
004afdcb  FADD double ptr [EBP + -0x50]
004afdce  FDIV double ptr [0x006be720]
004afdd4  FMUL double ptr [EBP + -0x10]
004afdd7  FSTP double ptr [EBP + -0x10]
004afdda  FLDZ
004afddc  FCOMP double ptr [EBP + -0x10]
004afddf  FNSTSW AX
004afde1  TEST AH,0x41
004afde4  JNZ 0x004afdeb
004afde6  FLDZ
004afde8  FSTP double ptr [EBP + -0x10]
004afdeb  JMP 0x004af9c6
004afdf0  MOV ECX,dword ptr [0x00791890]
004afdf6  CALL 0x004ee6a0
004afdfb  MOVSX ECX,AX
004afdfe  MOV dword ptr [EBP + 0xffffff6c],ECX
004afe04  FILD dword ptr [EBP + 0xffffff6c]
004afe0a  FDIV double ptr [0x006b4b00]
004afe10  MOV EDX,dword ptr [EBP + -0x14]
004afe13  FMUL double ptr [EDX*0x8 + 0x791728]
004afe1a  FADD double ptr [EBP + -0x10]
004afe1d  FSTP double ptr [EBP + -0x10]
004afe20  MOV EAX,dword ptr [EBP + -0x14]
004afe23  FLD double ptr [EBP + -0x10]
004afe26  FMUL double ptr [EAX*0x8 + 0x791dd0]
004afe2d  FSTP double ptr [EBP + -0x10]
004afe30  FLD double ptr [0x006b4b00]
004afe36  FCOMP double ptr [EBP + -0x10]
004afe39  FNSTSW AX
004afe3b  TEST AH,0x5
004afe3e  JP 0x004afe49
004afe40  FLD double ptr [0x006b4b00]
004afe46  FSTP double ptr [EBP + -0x10]
004afe49  FLD double ptr [EBP + -0x10]
004afe4c  POP ESI
004afe4d  MOV ESP,EBP
004afe4f  POP EBP
004afe50  RET
