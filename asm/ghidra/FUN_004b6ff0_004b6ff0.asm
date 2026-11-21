; FUN_004b6ff0  004b6ff0
004b6ff0  PUSH EBP
004b6ff1  MOV EBP,ESP
004b6ff3  SUB ESP,0xd4
004b6ff9  PUSH ESI
004b6ffa  MOV ECX,dword ptr [0x00791364]
004b7000  CALL 0x0047e420
004b7005  MOV dword ptr [EBP + -0x44],EAX
004b7008  FLD1
004b700a  FSTP double ptr [EBP + -0x20]
004b700d  MOV ECX,dword ptr [0x00791890]
004b7013  CALL 0x004f0500
004b7018  FIDIV dword ptr [EBP + 0xc]
004b701b  FSTP double ptr [EBP + -0x18]
004b701e  FLD1
004b7020  FSTP double ptr [EBP + -0x28]
004b7023  FLD1
004b7025  FSTP double ptr [EBP + -0x38]
004b7028  FLD1
004b702a  FSTP double ptr [EBP + -0x10]
004b702d  MOV word ptr [EBP + -0x54],0x0
004b7033  MOV word ptr [EBP + -0x58],0x0
004b7039  JMP 0x004b7047
004b703b  MOV AX,word ptr [EBP + -0x58]
004b703f  ADD AX,0x1
004b7043  MOV word ptr [EBP + -0x58],AX
004b7047  MOVSX ESI,word ptr [EBP + -0x58]
004b704b  MOV ECX,dword ptr [0x00791364]
004b7051  CALL 0x0047f950
004b7056  CMP ESI,EAX
004b7058  JGE 0x004b74f3
004b705e  MOVSX ECX,word ptr [EBP + -0x58]
004b7062  CMP ECX,dword ptr [EBP + -0x44]
004b7065  JNZ 0x004b7069
004b7067  JMP 0x004b703b
004b7069  MOVSX EDX,word ptr [EBP + -0x58]
004b706d  PUSH EDX
004b706e  MOV ECX,dword ptr [0x00791364]
004b7074  CALL 0x0047e390
004b7079  MOV ECX,EAX
004b707b  CALL 0x004c7010
004b7080  CMP EAX,0x1
004b7083  JNZ 0x004b74ee
004b7089  MOV AX,word ptr [EBP + -0x54]
004b708d  ADD AX,0x1
004b7091  MOV word ptr [EBP + -0x54],AX
004b7095  MOV CX,word ptr [EBP + 0xc]
004b7099  PUSH ECX
004b709a  MOV DX,word ptr [EBP + -0x58]
004b709e  PUSH EDX
004b709f  MOV ECX,dword ptr [0x00791890]
004b70a5  CALL 0x004f1710
004b70aa  FSTP double ptr [EBP + -0x60]
004b70ad  MOV EAX,dword ptr [EBP + -0x44]
004b70b0  SHL EAX,0x6
004b70b3  MOVSX ECX,word ptr [EBP + -0x58]
004b70b7  FLD double ptr [EBP + -0x60]
004b70ba  FMUL double ptr [EAX + ECX*0x8 + 0x791ae0]
004b70c1  FCOMP double ptr [EBP + -0x18]
004b70c4  FNSTSW AX
004b70c6  TEST AH,0x41
004b70c9  JNZ 0x004b70d5
004b70cb  FLD1
004b70cd  FSTP double ptr [EBP + -0x68]
004b70d0  JMP 0x004b735b
004b70d5  MOVSX EDX,word ptr [EBP + -0x58]
004b70d9  PUSH EDX
004b70da  MOV ECX,dword ptr [0x00791364]
004b70e0  CALL 0x0047e390
004b70e5  MOV ECX,EAX
004b70e7  CALL 0x004c7050
004b70ec  MOV dword ptr [EBP + 0xffffff78],EAX
004b70f2  MOV word ptr [EBP + 0xffffff70],0x0
004b70fb  MOV AX,word ptr [EBP + 0xffffff78]
004b7102  PUSH EAX
004b7103  MOV ECX,dword ptr [0x00791364]
004b7109  ADD ECX,0x38
004b710c  CALL 0x004f6880
004b7111  MOV word ptr [EBP + 0xffffff6c],AX
004b7118  MOV CX,word ptr [EBP + 0xffffff78]
004b711f  PUSH ECX
004b7120  MOV ECX,dword ptr [0x00791364]
004b7126  ADD ECX,0x38
004b7129  CALL 0x004f6930
004b712e  MOV word ptr [EBP + 0xffffff74],AX
004b7135  MOV DX,word ptr [EBP + 0xffffff78]
004b713c  PUSH EDX
004b713d  MOV ECX,dword ptr [0x00791364]
004b7143  ADD ECX,0x38
004b7146  CALL 0x004f6a90
004b714b  MOVSX EAX,AX
004b714e  MOVSX ECX,word ptr [EBP + 0xffffff6c]
004b7155  SUB EAX,ECX
004b7157  MOV word ptr [EBP + 0xffffff68],AX
004b715e  MOV DX,word ptr [EBP + 0xffffff78]
004b7165  PUSH EDX
004b7166  MOV ECX,dword ptr [0x00791364]
004b716c  ADD ECX,0x38
004b716f  CALL 0x004f6b20
004b7174  MOVSX EAX,AX
004b7177  MOVSX ECX,word ptr [EBP + 0xffffff74]
004b717e  SUB EAX,ECX
004b7180  MOV word ptr [EBP + 0xffffff7c],AX
004b7187  MOVSX EDX,word ptr [EBP + 0xffffff74]
004b718e  TEST EDX,EDX
004b7190  JNZ 0x004b71bc
004b7192  MOVSX EAX,word ptr [EBP + 0xffffff6c]
004b7199  TEST EAX,EAX
004b719b  JNZ 0x004b71bc
004b719d  MOV CX,word ptr [EBP + 0xffffff78]
004b71a4  PUSH ECX
004b71a5  MOV ECX,dword ptr [0x00791364]
004b71ab  ADD ECX,0x38
004b71ae  CALL 0x004f69e0
004b71b3  MOV word ptr [EBP + 0xffffff70],AX
004b71ba  JMP 0x004b71c5
004b71bc  MOV word ptr [EBP + 0xffffff70],0x0
004b71c5  MOVSX EDX,word ptr [EBP + 0xffffff6c]
004b71cc  TEST EDX,EDX
004b71ce  JGE 0x004b71e7
004b71d0  PUSH 0x18f4
004b71d5  PUSH 0x6be4fc
004b71da  PUSH 0x6bc25c
004b71df  CALL 0x005e9f20
004b71e4  ADD ESP,0xc
004b71e7  MOVSX ECX,word ptr [EBP + 0xffffff74]
004b71ee  TEST ECX,ECX
004b71f0  JGE 0x004b7209
004b71f2  PUSH 0x18f5
004b71f7  PUSH 0x6be4fc
004b71fc  PUSH 0x6bc248
004b7201  CALL 0x005e9f20
004b7206  ADD ESP,0xc
004b7209  MOVSX EAX,word ptr [EBP + 0xffffff70]
004b7210  TEST EAX,EAX
004b7212  JGE 0x004b722b
004b7214  PUSH 0x18f6
004b7219  PUSH 0x6be4fc
004b721e  PUSH 0x6bc230
004b7223  CALL 0x005e9f20
004b7228  ADD ESP,0xc
004b722b  MOVSX EDX,word ptr [EBP + 0xffffff68]
004b7232  TEST EDX,EDX
004b7234  JGE 0x004b724d
004b7236  PUSH 0x18f7
004b723b  PUSH 0x6be4fc
004b7240  PUSH 0x6bc220
004b7245  CALL 0x005e9f20
004b724a  ADD ESP,0xc
004b724d  MOVSX ECX,word ptr [EBP + 0xffffff7c]
004b7254  TEST ECX,ECX
004b7256  JGE 0x004b726f
004b7258  PUSH 0x18f8
004b725d  PUSH 0x6be4fc
004b7262  PUSH 0x6bc210
004b7267  CALL 0x005e9f20
004b726c  ADD ESP,0xc
004b726f  MOV ECX,dword ptr [0x00791890]
004b7275  CALL 0x004f0530
004b727a  MOVSX EAX,word ptr [EBP + 0xffffff68]
004b7281  MOV dword ptr [EBP + 0xffffff64],EAX
004b7287  FILD dword ptr [EBP + 0xffffff64]
004b728d  FMULP
004b728f  FLD1
004b7291  FADDP
004b7293  MOV ECX,dword ptr [0x00791890]
004b7299  FSTP double ptr [EBP + 0xffffff5c]
004b729f  CALL 0x004f0600
004b72a4  MOVSX ECX,word ptr [EBP + 0xffffff7c]
004b72ab  MOV dword ptr [EBP + 0xffffff58],ECX
004b72b1  FILD dword ptr [EBP + 0xffffff58]
004b72b7  FMULP
004b72b9  FADD double ptr [EBP + 0xffffff5c]
004b72bf  MOV ECX,dword ptr [0x00791890]
004b72c5  FSTP double ptr [EBP + 0xffffff50]
004b72cb  CALL 0x004f06d0
004b72d0  MOVSX EDX,word ptr [EBP + 0xffffff6c]
004b72d7  MOV dword ptr [EBP + 0xffffff4c],EDX
004b72dd  FILD dword ptr [EBP + 0xffffff4c]
004b72e3  FMULP
004b72e5  FADD double ptr [EBP + 0xffffff50]
004b72eb  MOV ECX,dword ptr [0x00791890]
004b72f1  FSTP double ptr [EBP + 0xffffff44]
004b72f7  CALL 0x004f07a0
004b72fc  MOVSX EAX,word ptr [EBP + 0xffffff74]
004b7303  MOV dword ptr [EBP + 0xffffff40],EAX
004b7309  FILD dword ptr [EBP + 0xffffff40]
004b730f  FMULP
004b7311  FADD double ptr [EBP + 0xffffff44]
004b7317  MOV ECX,dword ptr [0x00791890]
004b731d  FSTP double ptr [EBP + 0xffffff38]
004b7323  CALL 0x004f0410
004b7328  MOVSX ECX,AX
004b732b  MOV dword ptr [EBP + 0xffffff34],ECX
004b7331  FILD dword ptr [EBP + 0xffffff34]
004b7337  FDIV double ptr [0x006bc280]
004b733d  MOVSX EDX,word ptr [EBP + 0xffffff70]
004b7344  MOV dword ptr [EBP + 0xffffff30],EDX
004b734a  FILD dword ptr [EBP + 0xffffff30]
004b7350  FMULP
004b7352  FSUBR double ptr [EBP + 0xffffff38]
004b7358  FSTP double ptr [EBP + -0x68]
004b735b  MOV EAX,dword ptr [EBP + -0x44]
004b735e  FLD1
004b7360  FSUB double ptr [EAX*0x8 + 0x7916e8]
004b7367  FMUL double ptr [EBP + -0x68]
004b736a  FLD1
004b736c  FSUBRP
004b736e  FSTP double ptr [EBP + -0x78]
004b7371  MOV ECX,dword ptr [EBP + -0x44]
004b7374  FLD1
004b7376  FSUB double ptr [ECX*0x8 + 0x791958]
004b737d  FMUL double ptr [EBP + -0x68]
004b7380  FLD1
004b7382  FSUBRP
004b7384  FSTP double ptr [EBP + -0x80]
004b7387  FLDZ
004b7389  FSTP double ptr [EBP + -0x70]
004b738c  MOV EDX,dword ptr [EBP + -0x44]
004b738f  MOV EAX,dword ptr [EBP + -0x44]
004b7392  FLD double ptr [EAX*0x8 + 0x7917a8]
004b7399  FCOMP double ptr [EDX*0x8 + 0x7918f8]
004b73a0  FNSTSW AX
004b73a2  TEST AH,0x5
004b73a5  JP 0x004b73e5
004b73a7  MOV ECX,dword ptr [EBP + -0x44]
004b73aa  MOVZX EDX,byte ptr [ECX + 0x791868]
004b73b1  TEST EDX,EDX
004b73b3  JZ 0x004b73cd
004b73b5  MOV EAX,dword ptr [EBP + -0x44]
004b73b8  FLD1
004b73ba  FSUB double ptr [EAX*0x8 + 0x7918f8]
004b73c1  FMUL double ptr [EBP + -0x68]
004b73c4  FLD1
004b73c6  FSUBRP
004b73c8  FSTP double ptr [EBP + -0x70]
004b73cb  JMP 0x004b73e3
004b73cd  MOV ECX,dword ptr [EBP + -0x44]
004b73d0  FLD1
004b73d2  FSUB double ptr [ECX*0x8 + 0x7917a8]
004b73d9  FMUL double ptr [EBP + -0x68]
004b73dc  FLD1
004b73de  FSUBRP
004b73e0  FSTP double ptr [EBP + -0x70]
004b73e3  JMP 0x004b7421
004b73e5  MOV EDX,dword ptr [EBP + -0x44]
004b73e8  MOVZX EAX,byte ptr [EDX + 0x791ab8]
004b73ef  TEST EAX,EAX
004b73f1  JZ 0x004b740b
004b73f3  MOV ECX,dword ptr [EBP + -0x44]
004b73f6  FLD1
004b73f8  FSUB double ptr [ECX*0x8 + 0x7917a8]
004b73ff  FMUL double ptr [EBP + -0x68]
004b7402  FLD1
004b7404  FSUBRP
004b7406  FSTP double ptr [EBP + -0x70]
004b7409  JMP 0x004b7421
004b740b  MOV EDX,dword ptr [EBP + -0x44]
004b740e  FLD1
004b7410  FSUB double ptr [EDX*0x8 + 0x7918f8]
004b7417  FMUL double ptr [EBP + -0x68]
004b741a  FLD1
004b741c  FSUBRP
004b741e  FSTP double ptr [EBP + -0x70]
004b7421  FLDZ
004b7423  FCOMP double ptr [EBP + -0x78]
004b7426  FNSTSW AX
004b7428  TEST AH,0x41
004b742b  JNZ 0x004b7432
004b742d  FLDZ
004b742f  FSTP double ptr [EBP + -0x78]
004b7432  FLDZ
004b7434  FCOMP double ptr [EBP + -0x80]
004b7437  FNSTSW AX
004b7439  TEST AH,0x41
004b743c  JNZ 0x004b7443
004b743e  FLDZ
004b7440  FSTP double ptr [EBP + -0x80]
004b7443  FLDZ
004b7445  FCOMP double ptr [EBP + -0x70]
004b7448  FNSTSW AX
004b744a  TEST AH,0x41
004b744d  JNZ 0x004b7454
004b744f  FLDZ
004b7451  FSTP double ptr [EBP + -0x70]
004b7454  FLD double ptr [EBP + -0x80]
004b7457  FCOMP double ptr [EBP + -0x78]
004b745a  FNSTSW AX
004b745c  TEST AH,0x5
004b745f  JP 0x004b7481
004b7461  FLD double ptr [EBP + -0x28]
004b7464  FMUL double ptr [EBP + -0x78]
004b7467  FSTP double ptr [EBP + -0x28]
004b746a  FLD double ptr [0x006b2c38]
004b7470  FMUL double ptr [EBP + -0x78]
004b7473  FADD double ptr [0x006b2c38]
004b7479  FMUL double ptr [EBP + -0x38]
004b747c  FSTP double ptr [EBP + -0x38]
004b747f  JMP 0x004b749f
004b7481  FLD double ptr [EBP + -0x28]
004b7484  FMUL double ptr [EBP + -0x80]
004b7487  FSTP double ptr [EBP + -0x28]
004b748a  FLD double ptr [0x006b2c38]
004b7490  FMUL double ptr [EBP + -0x80]
004b7493  FADD double ptr [0x006b2c38]
004b7499  FMUL double ptr [EBP + -0x38]
004b749c  FSTP double ptr [EBP + -0x38]
004b749f  FLD double ptr [EBP + -0x70]
004b74a2  FCOMP double ptr [EBP + -0x78]
004b74a5  FNSTSW AX
004b74a7  TEST AH,0x41
004b74aa  JNZ 0x004b74ce
004b74ac  FLD double ptr [0x006b9490]
004b74b2  FMUL double ptr [EBP + -0x78]
004b74b5  FLD double ptr [0x006b3740]
004b74bb  FMUL double ptr [EBP + -0x70]
004b74be  FADDP
004b74c0  FDIV double ptr [0x006be720]
004b74c6  FMUL double ptr [EBP + -0x10]
004b74c9  FSTP double ptr [EBP + -0x10]
004b74cc  JMP 0x004b74ee
004b74ce  FLD double ptr [0x006b3740]
004b74d4  FMUL double ptr [EBP + -0x78]
004b74d7  FLD double ptr [0x006b9490]
004b74dd  FMUL double ptr [EBP + -0x70]
004b74e0  FADDP
004b74e2  FDIV double ptr [0x006be720]
004b74e8  FMUL double ptr [EBP + -0x10]
004b74eb  FSTP double ptr [EBP + -0x10]
004b74ee  JMP 0x004b703b
004b74f3  FLDZ
004b74f5  FSTP double ptr [EBP + -0x50]
004b74f8  MOV ECX,dword ptr [0x00791890]
004b74fe  CALL 0x004f1cc0
004b7503  MOVSX EAX,AX
004b7506  MOV dword ptr [EBP + 0xffffff2c],EAX
004b750c  FILD dword ptr [EBP + 0xffffff2c]
004b7512  FDIV double ptr [0x006be828]
004b7518  MOV ECX,dword ptr [EBP + -0x44]
004b751b  FMUL double ptr [ECX*0x8 + 0x791728]
004b7522  FSTP double ptr [EBP + -0x40]
004b7525  FLD1
004b7527  FSTP double ptr [EBP + -0x30]
004b752a  MOV word ptr [EBP + -0x4],0x0
004b7530  JMP 0x004b753e
004b7532  MOV DX,word ptr [EBP + -0x4]
004b7536  ADD DX,0x1
004b753a  MOV word ptr [EBP + -0x4],DX
004b753e  MOVSX EAX,word ptr [EBP + -0x4]
004b7542  MOVSX ECX,word ptr [EBP + -0x54]
004b7546  CMP EAX,ECX
004b7548  JGE 0x004b7558
004b754a  FLD double ptr [EBP + -0x30]
004b754d  FMUL double ptr [0x006b2c38]
004b7553  FSTP double ptr [EBP + -0x30]
004b7556  JMP 0x004b7532
004b7558  FLD double ptr [0x006b2c38]
004b755e  FMUL double ptr [EBP + -0x30]
004b7561  FADD double ptr [EBP + -0x50]
004b7564  FSTP double ptr [EBP + -0x50]
004b7567  FLD1
004b7569  FSTP double ptr [EBP + -0x30]
004b756c  MOV word ptr [EBP + -0x4],0x0
004b7572  JMP 0x004b7580
004b7574  MOV DX,word ptr [EBP + -0x4]
004b7578  ADD DX,0x1
004b757c  MOV word ptr [EBP + -0x4],DX
004b7580  MOVSX EAX,word ptr [EBP + -0x4]
004b7584  MOVSX ECX,word ptr [EBP + -0x54]
004b7588  SUB ECX,0x1
004b758b  CMP EAX,ECX
004b758d  JGE 0x004b759d
004b758f  FLD double ptr [EBP + -0x30]
004b7592  FMUL double ptr [0x006b2c38]
004b7598  FSTP double ptr [EBP + -0x30]
004b759b  JMP 0x004b7574
004b759d  FLD1
004b759f  FSUB double ptr [EBP + -0x30]
004b75a2  FMUL double ptr [0x006b2c38]
004b75a8  FLD double ptr [EBP + -0x38]
004b75ab  FADD double ptr [EBP + -0x40]
004b75ae  FMULP
004b75b0  FADD double ptr [EBP + -0x50]
004b75b3  FSTP double ptr [EBP + -0x50]
004b75b6  FLD1
004b75b8  FSTP double ptr [EBP + -0x30]
004b75bb  MOV word ptr [EBP + -0x4],0x0
004b75c1  JMP 0x004b75cf
004b75c3  MOV DX,word ptr [EBP + -0x4]
004b75c7  ADD DX,0x1
004b75cb  MOV word ptr [EBP + -0x4],DX
004b75cf  MOVSX EAX,word ptr [EBP + -0x4]
004b75d3  MOVSX ECX,word ptr [EBP + -0x54]
004b75d7  CMP EAX,ECX
004b75d9  JGE 0x004b75e9
004b75db  FLD double ptr [EBP + -0x30]
004b75de  FMUL double ptr [0x006b2c38]
004b75e4  FSTP double ptr [EBP + -0x30]
004b75e7  JMP 0x004b75c3
004b75e9  FLD1
004b75eb  FMUL double ptr [EBP + -0x30]
004b75ee  FLD double ptr [EBP + -0x28]
004b75f1  FADD double ptr [EBP + -0x40]
004b75f4  FMULP
004b75f6  FADD double ptr [EBP + -0x50]
004b75f9  FSTP double ptr [EBP + -0x50]
004b75fc  FLD double ptr [EBP + -0x10]
004b75ff  FCOMP double ptr [0x006be700]
004b7605  FNSTSW AX
004b7607  TEST AH,0x41
004b760a  JNZ 0x004b762b
004b760c  FLD double ptr [EBP + -0x10]
004b760f  FCOMP double ptr [EBP + -0x50]
004b7612  FNSTSW AX
004b7614  TEST AH,0x41
004b7617  JNZ 0x004b762b
004b7619  FLD double ptr [EBP + -0x10]
004b761c  FSTP double ptr [EBP + -0x20]
004b761f  MOV EDX,dword ptr [EBP + -0x44]
004b7622  MOV byte ptr [EDX + 0x791580],0x1
004b7629  JMP 0x004b763b
004b762b  FLD double ptr [EBP + -0x50]
004b762e  FSTP double ptr [EBP + -0x20]
004b7631  MOV EAX,dword ptr [EBP + -0x44]
004b7634  MOV byte ptr [EAX + 0x791580],0x0
004b763b  MOV ECX,dword ptr [EBP + -0x44]
004b763e  FLD double ptr [EBP + -0x20]
004b7641  FMUL double ptr [ECX*0x8 + 0x791dd0]
004b7648  FSTP double ptr [EBP + -0x20]
004b764b  FLD double ptr [0x006b4b00]
004b7651  FCOMP double ptr [EBP + -0x20]
004b7654  FNSTSW AX
004b7656  TEST AH,0x5
004b7659  JP 0x004b7664
004b765b  FLD double ptr [0x006b4b00]
004b7661  FSTP double ptr [EBP + -0x20]
004b7664  FLD double ptr [EBP + -0x20]
004b7667  POP ESI
004b7668  MOV ESP,EBP
004b766a  POP EBP
004b766b  RET
