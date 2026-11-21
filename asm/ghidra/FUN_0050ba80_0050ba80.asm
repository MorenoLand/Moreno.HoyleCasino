; FUN_0050ba80  0050ba80
0050ba80  PUSH EBP
0050ba81  MOV EBP,ESP
0050ba83  PUSH -0x1
0050ba85  PUSH 0x6a329b
0050ba8a  MOV EAX,FS:[0x0]
0050ba90  PUSH EAX
0050ba91  SUB ESP,0x180
0050ba97  PUSH ESI
0050ba98  MOV EAX,[0x00781870]
0050ba9d  XOR EAX,EBP
0050ba9f  PUSH EAX
0050baa0  LEA EAX,[EBP + -0xc]
0050baa3  MOV FS:[0x0],EAX
0050baa9  MOV ECX,dword ptr [0x00791364]
0050baaf  CALL 0x0047e420
0050bab4  MOV dword ptr [EBP + -0x70],EAX
0050bab7  FLD1
0050bab9  FSTP double ptr [EBP + -0x6c]
0050babc  MOV ECX,dword ptr [0x007926f8]
0050bac2  CALL 0x004ebaa0
0050bac7  FIDIV dword ptr [EBP + 0xc]
0050baca  FSTP double ptr [EBP + -0x64]
0050bacd  FLDZ
0050bacf  FSTP double ptr [EBP + 0xffffff7c]
0050bad5  MOV word ptr [EBP + -0x78],0x0
0050badb  FLDZ
0050badd  FSTP double ptr [EBP + -0x5c]
0050bae0  FLD double ptr [0x006c0dd0]
0050bae6  FSTP double ptr [EBP + -0x54]
0050bae9  FLD double ptr [0x006c0dc8]
0050baef  FSTP double ptr [EBP + -0x4c]
0050baf2  FLD double ptr [0x006c0dc0]
0050baf8  FSTP double ptr [EBP + -0x44]
0050bafb  FLD double ptr [0x006c0db8]
0050bb01  FSTP double ptr [EBP + -0x3c]
0050bb04  FLD double ptr [0x006c0db0]
0050bb0a  FSTP double ptr [EBP + -0x34]
0050bb0d  FLD double ptr [0x006c0da8]
0050bb13  FSTP double ptr [EBP + -0x2c]
0050bb16  FLD double ptr [0x006c0da0]
0050bb1c  FSTP double ptr [EBP + -0x24]
0050bb1f  FLD double ptr [0x006c0d98]
0050bb25  FSTP double ptr [EBP + -0x1c]
0050bb28  FLD double ptr [0x006c0d90]
0050bb2e  FSTP double ptr [EBP + -0x14]
0050bb31  FLD double ptr [EBP + -0x5c]
0050bb34  FSTP double ptr [EBP + 0xffffff34]
0050bb3a  FLD double ptr [EBP + -0x54]
0050bb3d  FADD double ptr [EBP + 0xffffff34]
0050bb43  FSTP double ptr [EBP + 0xffffff3c]
0050bb49  FLD double ptr [EBP + -0x4c]
0050bb4c  FADD double ptr [EBP + 0xffffff3c]
0050bb52  FSTP double ptr [EBP + 0xffffff44]
0050bb58  FLD double ptr [EBP + -0x44]
0050bb5b  FADD double ptr [EBP + 0xffffff44]
0050bb61  FSTP double ptr [EBP + 0xffffff4c]
0050bb67  FLD double ptr [EBP + -0x3c]
0050bb6a  FADD double ptr [EBP + 0xffffff4c]
0050bb70  FSTP double ptr [EBP + 0xffffff54]
0050bb76  FLD double ptr [EBP + -0x34]
0050bb79  FADD double ptr [EBP + 0xffffff54]
0050bb7f  FSTP double ptr [EBP + 0xffffff5c]
0050bb85  FLD double ptr [EBP + -0x2c]
0050bb88  FADD double ptr [EBP + 0xffffff5c]
0050bb8e  FSTP double ptr [EBP + 0xffffff64]
0050bb94  FLD double ptr [EBP + -0x24]
0050bb97  FADD double ptr [EBP + 0xffffff64]
0050bb9d  FSTP double ptr [EBP + 0xffffff6c]
0050bba3  FLD double ptr [EBP + -0x1c]
0050bba6  FADD double ptr [EBP + 0xffffff6c]
0050bbac  FSTP double ptr [EBP + 0xffffff74]
0050bbb2  MOV EAX,dword ptr [EBP + -0x70]
0050bbb5  MOVSX ECX,word ptr [EAX*0x2 + 0x7929d8]
0050bbbd  MOV EDX,dword ptr [EBP + -0x70]
0050bbc0  MOVSX EAX,word ptr [EDX*0x2 + 0x792830]
0050bbc8  ADD ECX,EAX
0050bbca  MOV EDX,dword ptr [EBP + -0x70]
0050bbcd  MOVSX EAX,word ptr [EDX*0x2 + 0x7920f8]
0050bbd5  ADD ECX,EAX
0050bbd7  MOV EDX,dword ptr [EBP + -0x70]
0050bbda  MOVSX EAX,word ptr [EDX*0x2 + 0x792820]
0050bbe2  ADD ECX,EAX
0050bbe4  MOV EDX,dword ptr [EBP + -0x70]
0050bbe7  MOVSX EAX,word ptr [EDX*0x2 + 0x792218]
0050bbef  ADD ECX,EAX
0050bbf1  MOV EDX,dword ptr [EBP + -0x70]
0050bbf4  MOVSX EAX,word ptr [EDX*0x2 + 0x792248]
0050bbfc  ADD ECX,EAX
0050bbfe  MOV EDX,dword ptr [EBP + -0x70]
0050bc01  MOVSX EAX,word ptr [EDX*0x2 + 0x7925c0]
0050bc09  ADD ECX,EAX
0050bc0b  MOV EDX,dword ptr [EBP + -0x70]
0050bc0e  MOVSX EAX,word ptr [EDX*0x2 + 0x7926fc]
0050bc16  ADD ECX,EAX
0050bc18  MOV EDX,dword ptr [EBP + -0x70]
0050bc1b  MOVSX EAX,word ptr [EDX*0x2 + 0x792f78]
0050bc23  ADD ECX,EAX
0050bc25  MOV EDX,dword ptr [EBP + -0x70]
0050bc28  MOVSX EAX,word ptr [EDX*0x2 + 0x7920e8]
0050bc30  ADD ECX,EAX
0050bc32  MOV word ptr [EBP + -0x78],CX
0050bc36  MOV ECX,dword ptr [EBP + -0x70]
0050bc39  MOVSX EDX,word ptr [ECX*0x2 + 0x7929d8]
0050bc41  MOV dword ptr [EBP + 0xfffffeec],EDX
0050bc47  FILD dword ptr [EBP + 0xfffffeec]
0050bc4d  FLD1
0050bc4f  FMULP
0050bc51  MOVSX EAX,word ptr [EBP + -0x78]
0050bc55  MOV dword ptr [EBP + 0xfffffee8],EAX
0050bc5b  FILD dword ptr [EBP + 0xfffffee8]
0050bc61  FDIVP
0050bc63  FLD1
0050bc65  FSUB double ptr [EBP + 0xffffff34]
0050bc6b  MOV ECX,dword ptr [EBP + -0x70]
0050bc6e  MOVSX EDX,word ptr [ECX*0x2 + 0x792830]
0050bc76  MOV dword ptr [EBP + 0xfffffee4],EDX
0050bc7c  FILD dword ptr [EBP + 0xfffffee4]
0050bc82  FMULP
0050bc84  MOVSX EAX,word ptr [EBP + -0x78]
0050bc88  MOV dword ptr [EBP + 0xfffffee0],EAX
0050bc8e  FILD dword ptr [EBP + 0xfffffee0]
0050bc94  FDIVP
0050bc96  FADDP
0050bc98  FLD1
0050bc9a  FSUB double ptr [EBP + 0xffffff3c]
0050bca0  MOV ECX,dword ptr [EBP + -0x70]
0050bca3  MOVSX EDX,word ptr [ECX*0x2 + 0x7920f8]
0050bcab  MOV dword ptr [EBP + 0xfffffedc],EDX
0050bcb1  FILD dword ptr [EBP + 0xfffffedc]
0050bcb7  FMULP
0050bcb9  MOVSX EAX,word ptr [EBP + -0x78]
0050bcbd  MOV dword ptr [EBP + 0xfffffed8],EAX
0050bcc3  FILD dword ptr [EBP + 0xfffffed8]
0050bcc9  FDIVP
0050bccb  FADDP
0050bccd  FLD1
0050bccf  FSUB double ptr [EBP + 0xffffff44]
0050bcd5  MOV ECX,dword ptr [EBP + -0x70]
0050bcd8  MOVSX EDX,word ptr [ECX*0x2 + 0x792820]
0050bce0  MOV dword ptr [EBP + 0xfffffed4],EDX
0050bce6  FILD dword ptr [EBP + 0xfffffed4]
0050bcec  FMULP
0050bcee  MOVSX EAX,word ptr [EBP + -0x78]
0050bcf2  MOV dword ptr [EBP + 0xfffffed0],EAX
0050bcf8  FILD dword ptr [EBP + 0xfffffed0]
0050bcfe  FDIVP
0050bd00  FADDP
0050bd02  FLD1
0050bd04  FSUB double ptr [EBP + 0xffffff4c]
0050bd0a  MOV ECX,dword ptr [EBP + -0x70]
0050bd0d  MOVSX EDX,word ptr [ECX*0x2 + 0x792218]
0050bd15  MOV dword ptr [EBP + 0xfffffecc],EDX
0050bd1b  FILD dword ptr [EBP + 0xfffffecc]
0050bd21  FMULP
0050bd23  MOVSX EAX,word ptr [EBP + -0x78]
0050bd27  MOV dword ptr [EBP + 0xfffffec8],EAX
0050bd2d  FILD dword ptr [EBP + 0xfffffec8]
0050bd33  FDIVP
0050bd35  FADDP
0050bd37  FLD1
0050bd39  FSUB double ptr [EBP + 0xffffff54]
0050bd3f  MOV ECX,dword ptr [EBP + -0x70]
0050bd42  MOVSX EDX,word ptr [ECX*0x2 + 0x792248]
0050bd4a  MOV dword ptr [EBP + 0xfffffec4],EDX
0050bd50  FILD dword ptr [EBP + 0xfffffec4]
0050bd56  FMULP
0050bd58  MOVSX EAX,word ptr [EBP + -0x78]
0050bd5c  MOV dword ptr [EBP + 0xfffffec0],EAX
0050bd62  FILD dword ptr [EBP + 0xfffffec0]
0050bd68  FDIVP
0050bd6a  FADDP
0050bd6c  FLD1
0050bd6e  FSUB double ptr [EBP + 0xffffff5c]
0050bd74  MOV ECX,dword ptr [EBP + -0x70]
0050bd77  MOVSX EDX,word ptr [ECX*0x2 + 0x7925c0]
0050bd7f  MOV dword ptr [EBP + 0xfffffebc],EDX
0050bd85  FILD dword ptr [EBP + 0xfffffebc]
0050bd8b  FMULP
0050bd8d  MOVSX EAX,word ptr [EBP + -0x78]
0050bd91  MOV dword ptr [EBP + 0xfffffeb8],EAX
0050bd97  FILD dword ptr [EBP + 0xfffffeb8]
0050bd9d  FDIVP
0050bd9f  FADDP
0050bda1  FLD1
0050bda3  FSUB double ptr [EBP + 0xffffff64]
0050bda9  MOV ECX,dword ptr [EBP + -0x70]
0050bdac  MOVSX EDX,word ptr [ECX*0x2 + 0x7926fc]
0050bdb4  MOV dword ptr [EBP + 0xfffffeb4],EDX
0050bdba  FILD dword ptr [EBP + 0xfffffeb4]
0050bdc0  FMULP
0050bdc2  MOVSX EAX,word ptr [EBP + -0x78]
0050bdc6  MOV dword ptr [EBP + 0xfffffeb0],EAX
0050bdcc  FILD dword ptr [EBP + 0xfffffeb0]
0050bdd2  FDIVP
0050bdd4  FADDP
0050bdd6  FSTP double ptr [EBP + 0xffffff7c]
0050bddc  LEA ECX,[EBP + 0xfffffef8]
0050bde2  PUSH ECX
0050bde3  MOV ECX,dword ptr [0x007926f8]
0050bde9  CALL 0x004c7c40
0050bdee  MOV dword ptr [EBP + 0xfffffeac],EAX
0050bdf4  MOV EDX,dword ptr [EBP + 0xfffffeac]
0050bdfa  MOV dword ptr [EBP + 0xfffffea8],EDX
0050be00  MOV dword ptr [EBP + -0x4],0x0
0050be07  PUSH 0x0
0050be09  PUSH 0x0
0050be0b  PUSH 0x0
0050be0d  PUSH 0x1
0050be0f  PUSH 0x1
0050be11  PUSH 0x1
0050be13  PUSH 0x1
0050be15  LEA EAX,[EBP + 0xfffffef4]
0050be1b  PUSH EAX
0050be1c  MOV ECX,dword ptr [EBP + 0xfffffea8]
0050be22  CALL 0x00485940
0050be27  MOV dword ptr [EBP + 0xfffffea4],EAX
0050be2d  MOV ECX,dword ptr [EBP + 0xfffffea4]
0050be33  MOV dword ptr [EBP + 0xfffffea0],ECX
0050be39  MOV byte ptr [EBP + -0x4],0x1
0050be3d  MOV EDX,dword ptr [0x00791380]
0050be43  PUSH EDX
0050be44  LEA EAX,[EBP + 0xfffffef3]
0050be4a  PUSH EAX
0050be4b  MOV ECX,dword ptr [EBP + 0xfffffea0]
0050be51  CALL 0x004a2160
0050be56  MOV ECX,EAX
0050be58  CALL 0x004a1f00
0050be5d  MOV byte ptr [EBP + 0xffffff03],AL
0050be63  MOV byte ptr [EBP + -0x4],0x0
0050be67  LEA ECX,[EBP + 0xfffffef4]
0050be6d  CALL 0x004a20f0
0050be72  MOV dword ptr [EBP + -0x4],0xffffffff
0050be79  LEA ECX,[EBP + 0xfffffef8]
0050be7f  CALL 0x00484470
0050be84  MOVZX ECX,byte ptr [EBP + 0xffffff03]
0050be8b  TEST ECX,ECX
0050be8d  JZ 0x0050be97
0050be8f  FLDZ
0050be91  FSTP double ptr [EBP + 0xffffff7c]
0050be97  CMP dword ptr [EBP + 0x8],0x2
0050be9b  JNZ 0x0050beb1
0050be9d  FLD double ptr [EBP + 0xffffff7c]
0050bea3  FDIV double ptr [0x006be720]
0050bea9  FSTP double ptr [EBP + 0xffffff7c]
0050beaf  JMP 0x0050bec9
0050beb1  CMP dword ptr [EBP + 0x8],0x3
0050beb5  JNZ 0x0050bec9
0050beb7  FLD double ptr [EBP + 0xffffff7c]
0050bebd  FDIV double ptr [0x006c1050]
0050bec3  FSTP double ptr [EBP + 0xffffff7c]
0050bec9  MOV EDX,dword ptr [EBP + -0x70]
0050becc  MOV byte ptr [EDX + 0x7929d0],0x0
0050bed3  MOV word ptr [EBP + -0x74],0x0
0050bed9  JMP 0x0050bee7
0050bedb  MOV AX,word ptr [EBP + -0x74]
0050bedf  ADD AX,0x1
0050bee3  MOV word ptr [EBP + -0x74],AX
0050bee7  MOVSX ESI,word ptr [EBP + -0x74]
0050beeb  MOV ECX,dword ptr [0x00791364]
0050bef1  CALL 0x0047f950
0050bef6  CMP ESI,EAX
0050bef8  JGE 0x0050c28d
0050befe  MOVSX ECX,word ptr [EBP + -0x74]
0050bf02  CMP ECX,dword ptr [EBP + -0x70]
0050bf05  JNZ 0x0050bf09
0050bf07  JMP 0x0050bedb
0050bf09  MOVSX EDX,word ptr [EBP + -0x74]
0050bf0d  PUSH EDX
0050bf0e  MOV ECX,dword ptr [0x00791364]
0050bf14  CALL 0x0047e390
0050bf19  MOV ECX,EAX
0050bf1b  CALL 0x004c7010
0050bf20  CMP EAX,0x1
0050bf23  JNZ 0x0050c288
0050bf29  MOV EAX,dword ptr [EBP + -0x70]
0050bf2c  LEA ECX,[EAX*0x4 + 0x793010]
0050bf33  PUSH ECX
0050bf34  MOVSX EDX,word ptr [EBP + -0x74]
0050bf38  LEA ECX,[EDX*0x4 + 0x793010]
0050bf3f  CALL 0x004a2440
0050bf44  MOVZX EAX,AL
0050bf47  TEST EAX,EAX
0050bf49  JZ 0x0050bf55
0050bf4b  MOV ECX,dword ptr [EBP + -0x70]
0050bf4e  MOV byte ptr [ECX + 0x7929d0],0x1
0050bf55  FLDZ
0050bf57  FSTP double ptr [EBP + 0xffffff24]
0050bf5d  MOV DX,word ptr [EBP + 0xc]
0050bf61  PUSH EDX
0050bf62  MOV AX,word ptr [EBP + -0x74]
0050bf66  PUSH EAX
0050bf67  MOV ECX,dword ptr [0x007926f8]
0050bf6d  CALL 0x004eccb0
0050bf72  FSTP double ptr [EBP + 0xffffff2c]
0050bf78  MOV ECX,dword ptr [EBP + -0x70]
0050bf7b  SHL ECX,0x6
0050bf7e  MOVSX EDX,word ptr [EBP + -0x74]
0050bf82  FLD double ptr [EBP + 0xffffff2c]
0050bf88  FMUL double ptr [ECX + EDX*0x8 + 0x7929e8]
0050bf8f  FCOMP double ptr [EBP + -0x64]
0050bf92  FNSTSW AX
0050bf94  TEST AH,0x41
0050bf97  JNZ 0x0050bfa5
0050bf99  MOV byte ptr [EBP + 0xffffff1b],0x1
0050bfa0  JMP 0x0050c18b
0050bfa5  MOVSX EAX,word ptr [EBP + -0x74]
0050bfa9  PUSH EAX
0050bfaa  MOV ECX,dword ptr [0x00791364]
0050bfb0  CALL 0x0047e390
0050bfb5  MOV ECX,EAX
0050bfb7  CALL 0x004c7050
0050bfbc  MOV dword ptr [EBP + 0xffffff10],EAX
0050bfc2  MOV CX,word ptr [EBP + 0xffffff10]
0050bfc9  PUSH ECX
0050bfca  MOV ECX,dword ptr [0x00791364]
0050bfd0  ADD ECX,0x38
0050bfd3  CALL 0x004f6880
0050bfd8  MOV word ptr [EBP + 0xffffff08],AX
0050bfdf  MOV DX,word ptr [EBP + 0xffffff10]
0050bfe6  PUSH EDX
0050bfe7  MOV ECX,dword ptr [0x00791364]
0050bfed  ADD ECX,0x38
0050bff0  CALL 0x004f6930
0050bff5  MOV word ptr [EBP + 0xffffff0c],AX
0050bffc  MOV AX,word ptr [EBP + 0xffffff10]
0050c003  PUSH EAX
0050c004  MOV ECX,dword ptr [0x00791364]
0050c00a  ADD ECX,0x38
0050c00d  CALL 0x004f6a90
0050c012  MOVSX ECX,AX
0050c015  MOVSX EDX,word ptr [EBP + 0xffffff08]
0050c01c  SUB ECX,EDX
0050c01e  MOV word ptr [EBP + 0xffffff04],CX
0050c025  MOV AX,word ptr [EBP + 0xffffff10]
0050c02c  PUSH EAX
0050c02d  MOV ECX,dword ptr [0x00791364]
0050c033  ADD ECX,0x38
0050c036  CALL 0x004f6b20
0050c03b  MOVSX ECX,AX
0050c03e  MOVSX EDX,word ptr [EBP + 0xffffff0c]
0050c045  SUB ECX,EDX
0050c047  MOV word ptr [EBP + 0xffffff14],CX
0050c04e  MOVSX EAX,word ptr [EBP + 0xffffff08]
0050c055  TEST EAX,EAX
0050c057  JGE 0x0050c070
0050c059  PUSH 0xdfc
0050c05e  PUSH 0x6c0c40
0050c063  PUSH 0x6bc25c
0050c068  CALL 0x005e9f20
0050c06d  ADD ESP,0xc
0050c070  MOVSX EDX,word ptr [EBP + 0xffffff0c]
0050c077  TEST EDX,EDX
0050c079  JGE 0x0050c092
0050c07b  PUSH 0xdfd
0050c080  PUSH 0x6c0c40
0050c085  PUSH 0x6bc248
0050c08a  CALL 0x005e9f20
0050c08f  ADD ESP,0xc
0050c092  MOVSX ECX,word ptr [EBP + 0xffffff04]
0050c099  TEST ECX,ECX
0050c09b  JGE 0x0050c0b4
0050c09d  PUSH 0xdfe
0050c0a2  PUSH 0x6c0c40
0050c0a7  PUSH 0x6bc220
0050c0ac  CALL 0x005e9f20
0050c0b1  ADD ESP,0xc
0050c0b4  MOVSX EAX,word ptr [EBP + 0xffffff14]
0050c0bb  TEST EAX,EAX
0050c0bd  JGE 0x0050c0d6
0050c0bf  PUSH 0xdff
0050c0c4  PUSH 0x6c0c40
0050c0c9  PUSH 0x6bc210
0050c0ce  CALL 0x005e9f20
0050c0d3  ADD ESP,0xc
0050c0d6  MOV byte ptr [EBP + 0xffffff1b],0x0
0050c0dd  MOV ECX,dword ptr [0x007926f8]
0050c0e3  CALL 0x004ebad0
0050c0e8  MOVSX EDX,word ptr [EBP + 0xffffff04]
0050c0ef  MOV dword ptr [EBP + 0xfffffe9c],EDX
0050c0f5  FILD dword ptr [EBP + 0xfffffe9c]
0050c0fb  FMULP
0050c0fd  FLD1
0050c0ff  FADDP
0050c101  MOV ECX,dword ptr [0x007926f8]
0050c107  FSTP double ptr [EBP + 0xfffffe94]
0050c10d  CALL 0x004ebba0
0050c112  MOVSX EAX,word ptr [EBP + 0xffffff14]
0050c119  MOV dword ptr [EBP + 0xfffffe90],EAX
0050c11f  FILD dword ptr [EBP + 0xfffffe90]
0050c125  FMULP
0050c127  FADD double ptr [EBP + 0xfffffe94]
0050c12d  MOV ECX,dword ptr [0x007926f8]
0050c133  FSTP double ptr [EBP + 0xfffffe88]
0050c139  CALL 0x004ebc70
0050c13e  MOVSX ECX,word ptr [EBP + 0xffffff08]
0050c145  MOV dword ptr [EBP + 0xfffffe84],ECX
0050c14b  FILD dword ptr [EBP + 0xfffffe84]
0050c151  FMULP
0050c153  FADD double ptr [EBP + 0xfffffe88]
0050c159  MOV ECX,dword ptr [0x007926f8]
0050c15f  FSTP double ptr [EBP + 0xfffffe7c]
0050c165  CALL 0x004ebd40
0050c16a  MOVSX EDX,word ptr [EBP + 0xffffff0c]
0050c171  MOV dword ptr [EBP + 0xfffffe78],EDX
0050c177  FILD dword ptr [EBP + 0xfffffe78]
0050c17d  FMULP
0050c17f  FADD double ptr [EBP + 0xfffffe7c]
0050c185  FSTP double ptr [EBP + 0xffffff24]
0050c18b  MOV EAX,dword ptr [EBP + -0x70]
0050c18e  SHL EAX,0x5
0050c191  MOVSX ECX,word ptr [EBP + -0x74]
0050c195  MOV EDX,dword ptr [EBP + -0x70]
0050c198  SHL EDX,0x5
0050c19b  MOVSX ESI,word ptr [EBP + -0x74]
0050c19f  MOV EAX,dword ptr [EAX + ECX*0x4 + 0x792be8]
0050c1a6  ADD EAX,dword ptr [EDX + ESI*0x4 + 0x792108]
0050c1ad  MOV ECX,dword ptr [EBP + -0x70]
0050c1b0  SHL ECX,0x5
0050c1b3  MOVSX EDX,word ptr [EBP + -0x74]
0050c1b7  ADD EAX,dword ptr [ECX + EDX*0x4 + 0x791ed8]
0050c1be  MOV dword ptr [EBP + 0xfffffe74],EAX
0050c1c4  FILD dword ptr [EBP + 0xfffffe74]
0050c1ca  FSTP double ptr [EBP + 0xffffff1c]
0050c1d0  MOVZX EAX,byte ptr [EBP + 0xffffff1b]
0050c1d7  TEST EAX,EAX
0050c1d9  JZ 0x0050c223
0050c1db  FLD1
0050c1dd  FADD double ptr [EBP + 0xffffff7c]
0050c1e3  MOV ECX,dword ptr [EBP + -0x70]
0050c1e6  SHL ECX,0x5
0050c1e9  MOVSX EDX,word ptr [EBP + -0x74]
0050c1ed  FILD dword ptr [ECX + EDX*0x4 + 0x792be8]
0050c1f4  FDIV double ptr [EBP + 0xffffff1c]
0050c1fa  FSUBP
0050c1fc  MOV EAX,dword ptr [EBP + -0x70]
0050c1ff  SHL EAX,0x5
0050c202  MOVSX ECX,word ptr [EBP + -0x74]
0050c206  FILD dword ptr [EAX + ECX*0x4 + 0x792108]
0050c20d  FDIV double ptr [EBP + 0xffffff1c]
0050c213  FMUL double ptr [0x006b3e40]
0050c219  FSUBP
0050c21b  FMUL double ptr [EBP + -0x6c]
0050c21e  FSTP double ptr [EBP + -0x6c]
0050c221  JMP 0x0050c277
0050c223  FLD1
0050c225  FADD double ptr [EBP + 0xffffff7c]
0050c22b  MOV EDX,dword ptr [EBP + -0x70]
0050c22e  SHL EDX,0x5
0050c231  MOVSX EAX,word ptr [EBP + -0x74]
0050c235  FILD dword ptr [EDX + EAX*0x4 + 0x792be8]
0050c23c  FDIV double ptr [EBP + 0xffffff1c]
0050c242  FMUL double ptr [EBP + 0xffffff24]
0050c248  FSUBP
0050c24a  FLD double ptr [EBP + 0xffffff24]
0050c250  FMUL double ptr [0x006b3e40]
0050c256  MOV ECX,dword ptr [EBP + -0x70]
0050c259  SHL ECX,0x5
0050c25c  MOVSX EDX,word ptr [EBP + -0x74]
0050c260  FILD dword ptr [ECX + EDX*0x4 + 0x792108]
0050c267  FDIV double ptr [EBP + 0xffffff1c]
0050c26d  FMULP
0050c26f  FSUBP
0050c271  FMUL double ptr [EBP + -0x6c]
0050c274  FSTP double ptr [EBP + -0x6c]
0050c277  FLDZ
0050c279  FCOMP double ptr [EBP + -0x6c]
0050c27c  FNSTSW AX
0050c27e  TEST AH,0x41
0050c281  JNZ 0x0050c288
0050c283  FLDZ
0050c285  FSTP double ptr [EBP + -0x6c]
0050c288  JMP 0x0050bedb
0050c28d  MOV EAX,dword ptr [EBP + -0x70]
0050c290  FLD double ptr [EBP + -0x6c]
0050c293  FMUL double ptr [EAX*0x8 + 0x792e38]
0050c29a  FSTP double ptr [EBP + -0x6c]
0050c29d  FLD double ptr [0x006b4b00]
0050c2a3  FCOMP double ptr [EBP + -0x6c]
0050c2a6  FNSTSW AX
0050c2a8  TEST AH,0x5
0050c2ab  JP 0x0050c2b6
0050c2ad  FLD double ptr [0x006b4b00]
0050c2b3  FSTP double ptr [EBP + -0x6c]
0050c2b6  FLD double ptr [EBP + -0x6c]
0050c2b9  MOV ECX,dword ptr [EBP + -0xc]
0050c2bc  MOV dword ptr FS:[0x0],ECX
0050c2c3  POP ECX
0050c2c4  POP ESI
0050c2c5  MOV ESP,EBP
0050c2c7  POP EBP
0050c2c8  RET
