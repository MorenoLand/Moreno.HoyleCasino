; FUN_004a5a80  004a5a80
004a5a80  PUSH EBP
004a5a81  MOV EBP,ESP
004a5a83  SUB ESP,0x140
004a5a89  PUSH ESI
004a5a8a  MOV ECX,dword ptr [0x00791364]
004a5a90  CALL 0x0047e420
004a5a95  MOV dword ptr [EBP + 0xffffff7c],EAX
004a5a9b  FLD1
004a5a9d  FSTP double ptr [EBP + -0x38]
004a5aa0  MOV ECX,dword ptr [0x00791890]
004a5aa6  CALL 0x004d23e0
004a5aab  FIDIV dword ptr [EBP + 0xc]
004a5aae  FSTP double ptr [EBP + -0x30]
004a5ab1  MOV word ptr [EBP + 0xffffff64],0x0
004a5aba  MOV word ptr [EBP + 0xffffff44],0x0
004a5ac3  JMP 0x004a5ad7
004a5ac5  MOV AX,word ptr [EBP + 0xffffff44]
004a5acc  ADD AX,0x1
004a5ad0  MOV word ptr [EBP + 0xffffff44],AX
004a5ad7  MOVSX ESI,word ptr [EBP + 0xffffff44]
004a5ade  MOV ECX,dword ptr [0x00791364]
004a5ae4  CALL 0x0047f950
004a5ae9  CMP ESI,EAX
004a5aeb  JGE 0x004a5e93
004a5af1  MOVSX ECX,word ptr [EBP + 0xffffff44]
004a5af8  CMP ECX,dword ptr [EBP + 0xffffff7c]
004a5afe  JNZ 0x004a5b02
004a5b00  JMP 0x004a5ac5
004a5b02  MOVSX EDX,word ptr [EBP + 0xffffff44]
004a5b09  PUSH EDX
004a5b0a  MOV ECX,dword ptr [0x00791364]
004a5b10  CALL 0x0047e390
004a5b15  MOV ECX,EAX
004a5b17  CALL 0x004c7010
004a5b1c  CMP EAX,0x1
004a5b1f  JNZ 0x004a5e8e
004a5b25  FLDZ
004a5b27  FSTP double ptr [EBP + 0xffffff30]
004a5b2d  MOV AX,word ptr [EBP + 0xc]
004a5b31  PUSH EAX
004a5b32  MOV CX,word ptr [EBP + 0xffffff44]
004a5b39  PUSH ECX
004a5b3a  MOV ECX,dword ptr [0x00791890]
004a5b40  CALL 0x004d2100
004a5b45  FSTP double ptr [EBP + 0xffffff38]
004a5b4b  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5b51  SHL EDX,0x6
004a5b54  MOVSX EAX,word ptr [EBP + 0xffffff44]
004a5b5b  FLD double ptr [EBP + 0xffffff38]
004a5b61  FMUL double ptr [EDX + EAX*0x8 + 0x791ae0]
004a5b68  FCOMP double ptr [EBP + -0x30]
004a5b6b  FNSTSW AX
004a5b6d  TEST AH,0x41
004a5b70  JNZ 0x004a5b7e
004a5b72  MOV byte ptr [EBP + 0xffffff2f],0x1
004a5b79  JMP 0x004a5d79
004a5b7e  MOV CX,word ptr [EBP + 0xffffff64]
004a5b85  ADD CX,0x1
004a5b89  MOV word ptr [EBP + 0xffffff64],CX
004a5b90  MOVSX EDX,word ptr [EBP + 0xffffff44]
004a5b97  PUSH EDX
004a5b98  MOV ECX,dword ptr [0x00791364]
004a5b9e  CALL 0x0047e390
004a5ba3  MOV ECX,EAX
004a5ba5  CALL 0x004c7050
004a5baa  MOV dword ptr [EBP + 0xffffff24],EAX
004a5bb0  MOV AX,word ptr [EBP + 0xffffff24]
004a5bb7  PUSH EAX
004a5bb8  MOV ECX,dword ptr [0x00791364]
004a5bbe  ADD ECX,0x38
004a5bc1  CALL 0x004f6880
004a5bc6  MOV word ptr [EBP + 0xffffff1c],AX
004a5bcd  MOV CX,word ptr [EBP + 0xffffff24]
004a5bd4  PUSH ECX
004a5bd5  MOV ECX,dword ptr [0x00791364]
004a5bdb  ADD ECX,0x38
004a5bde  CALL 0x004f6930
004a5be3  MOV word ptr [EBP + 0xffffff20],AX
004a5bea  MOV DX,word ptr [EBP + 0xffffff24]
004a5bf1  PUSH EDX
004a5bf2  MOV ECX,dword ptr [0x00791364]
004a5bf8  ADD ECX,0x38
004a5bfb  CALL 0x004f6a90
004a5c00  MOVSX EAX,AX
004a5c03  MOVSX ECX,word ptr [EBP + 0xffffff1c]
004a5c0a  SUB EAX,ECX
004a5c0c  MOV word ptr [EBP + 0xffffff18],AX
004a5c13  MOV DX,word ptr [EBP + 0xffffff24]
004a5c1a  PUSH EDX
004a5c1b  MOV ECX,dword ptr [0x00791364]
004a5c21  ADD ECX,0x38
004a5c24  CALL 0x004f6b20
004a5c29  MOVSX EAX,AX
004a5c2c  MOVSX ECX,word ptr [EBP + 0xffffff20]
004a5c33  SUB EAX,ECX
004a5c35  MOV word ptr [EBP + 0xffffff28],AX
004a5c3c  MOVSX EDX,word ptr [EBP + 0xffffff1c]
004a5c43  TEST EDX,EDX
004a5c45  JGE 0x004a5c5e
004a5c47  PUSH 0x36b
004a5c4c  PUSH 0x6be4fc
004a5c51  PUSH 0x6bc25c
004a5c56  CALL 0x005e9f20
004a5c5b  ADD ESP,0xc
004a5c5e  MOVSX ECX,word ptr [EBP + 0xffffff20]
004a5c65  TEST ECX,ECX
004a5c67  JGE 0x004a5c80
004a5c69  PUSH 0x36c
004a5c6e  PUSH 0x6be4fc
004a5c73  PUSH 0x6bc248
004a5c78  CALL 0x005e9f20
004a5c7d  ADD ESP,0xc
004a5c80  MOVSX EAX,word ptr [EBP + 0xffffff18]
004a5c87  TEST EAX,EAX
004a5c89  JGE 0x004a5ca2
004a5c8b  PUSH 0x36d
004a5c90  PUSH 0x6be4fc
004a5c95  PUSH 0x6bc220
004a5c9a  CALL 0x005e9f20
004a5c9f  ADD ESP,0xc
004a5ca2  MOVSX EDX,word ptr [EBP + 0xffffff28]
004a5ca9  TEST EDX,EDX
004a5cab  JGE 0x004a5cc4
004a5cad  PUSH 0x36e
004a5cb2  PUSH 0x6be4fc
004a5cb7  PUSH 0x6bc210
004a5cbc  CALL 0x005e9f20
004a5cc1  ADD ESP,0xc
004a5cc4  MOV byte ptr [EBP + 0xffffff2f],0x0
004a5ccb  MOV ECX,dword ptr [0x00791890]
004a5cd1  CALL 0x004d2410
004a5cd6  MOVSX ECX,word ptr [EBP + 0xffffff18]
004a5cdd  MOV dword ptr [EBP + 0xffffff04],ECX
004a5ce3  FILD dword ptr [EBP + 0xffffff04]
004a5ce9  FMULP
004a5ceb  FLD1
004a5ced  FADDP
004a5cef  MOV ECX,dword ptr [0x00791890]
004a5cf5  FSTP double ptr [EBP + 0xfffffefc]
004a5cfb  CALL 0x004d24e0
004a5d00  MOVSX EDX,word ptr [EBP + 0xffffff28]
004a5d07  MOV dword ptr [EBP + 0xfffffef8],EDX
004a5d0d  FILD dword ptr [EBP + 0xfffffef8]
004a5d13  FMULP
004a5d15  FADD double ptr [EBP + 0xfffffefc]
004a5d1b  MOV ECX,dword ptr [0x00791890]
004a5d21  FSTP double ptr [EBP + 0xfffffef0]
004a5d27  CALL 0x004d25b0
004a5d2c  MOVSX EAX,word ptr [EBP + 0xffffff1c]
004a5d33  MOV dword ptr [EBP + 0xfffffeec],EAX
004a5d39  FILD dword ptr [EBP + 0xfffffeec]
004a5d3f  FMULP
004a5d41  FADD double ptr [EBP + 0xfffffef0]
004a5d47  MOV ECX,dword ptr [0x00791890]
004a5d4d  FSTP double ptr [EBP + 0xfffffee4]
004a5d53  CALL 0x004d2680
004a5d58  MOVSX ECX,word ptr [EBP + 0xffffff20]
004a5d5f  MOV dword ptr [EBP + 0xfffffee0],ECX
004a5d65  FILD dword ptr [EBP + 0xfffffee0]
004a5d6b  FMULP
004a5d6d  FADD double ptr [EBP + 0xfffffee4]
004a5d73  FSTP double ptr [EBP + 0xffffff30]
004a5d79  MOV word ptr [EBP + 0xffffff14],0x0
004a5d82  JMP 0x004a5d96
004a5d84  MOV DX,word ptr [EBP + 0xffffff14]
004a5d8b  ADD DX,0x1
004a5d8f  MOV word ptr [EBP + 0xffffff14],DX
004a5d96  MOVSX EAX,word ptr [EBP + 0xffffff14]
004a5d9d  CMP EAX,0x6
004a5da0  JGE 0x004a5e8e
004a5da6  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5dac  IMUL ECX,ECX,0x18
004a5daf  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5db5  IMUL EDX,EDX,0x18
004a5db8  MOV EAX,dword ptr [ECX + 0x7915c8]
004a5dbe  ADD EAX,dword ptr [EDX + 0x7919d8]
004a5dc4  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5dca  IMUL ECX,ECX,0x18
004a5dcd  ADD EAX,dword ptr [ECX + 0x791460]
004a5dd3  MOV dword ptr [EBP + 0xfffffedc],EAX
004a5dd9  FILD dword ptr [EBP + 0xfffffedc]
004a5ddf  FSTP double ptr [EBP + 0xffffff08]
004a5de5  MOVZX EDX,byte ptr [EBP + 0xffffff2f]
004a5dec  TEST EDX,EDX
004a5dee  JZ 0x004a5e2e
004a5df0  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5df6  IMUL EAX,EAX,0x18
004a5df9  FILD dword ptr [EAX + 0x7915c8]
004a5dff  FDIV double ptr [EBP + 0xffffff08]
004a5e05  FLD1
004a5e07  FSUBRP
004a5e09  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5e0f  IMUL ECX,ECX,0x18
004a5e12  FILD dword ptr [ECX + 0x7919d8]
004a5e18  FDIV double ptr [EBP + 0xffffff08]
004a5e1e  FMUL double ptr [0x006b3e40]
004a5e24  FSUBP
004a5e26  FMUL double ptr [EBP + -0x38]
004a5e29  FSTP double ptr [EBP + -0x38]
004a5e2c  JMP 0x004a5e78
004a5e2e  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5e34  IMUL EDX,EDX,0x18
004a5e37  FILD dword ptr [EDX + 0x7915c8]
004a5e3d  FDIV double ptr [EBP + 0xffffff08]
004a5e43  FMUL double ptr [EBP + 0xffffff30]
004a5e49  FLD1
004a5e4b  FSUBRP
004a5e4d  FLD double ptr [EBP + 0xffffff30]
004a5e53  FMUL double ptr [0x006b3e40]
004a5e59  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5e5f  IMUL EAX,EAX,0x18
004a5e62  FILD dword ptr [EAX + 0x7919d8]
004a5e68  FDIV double ptr [EBP + 0xffffff08]
004a5e6e  FMULP
004a5e70  FSUBP
004a5e72  FMUL double ptr [EBP + -0x38]
004a5e75  FSTP double ptr [EBP + -0x38]
004a5e78  FLDZ
004a5e7a  FCOMP double ptr [EBP + -0x38]
004a5e7d  FNSTSW AX
004a5e7f  TEST AH,0x41
004a5e82  JNZ 0x004a5e89
004a5e84  FLDZ
004a5e86  FSTP double ptr [EBP + -0x38]
004a5e89  JMP 0x004a5d84
004a5e8e  JMP 0x004a5ac5
004a5e93  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5e99  MOV EDX,dword ptr [ECX*0x4 + 0x7918b4]
004a5ea0  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5ea6  ADD EDX,dword ptr [EAX*0x4 + 0x791894]
004a5ead  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5eb3  ADD EDX,dword ptr [ECX*0x4 + 0x791848]
004a5eba  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5ec0  ADD EDX,dword ptr [EAX*0x4 + 0x791ac0]
004a5ec7  MOV dword ptr [EBP + -0x4c],EDX
004a5eca  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5ed0  FILD dword ptr [ECX*0x4 + 0x791938]
004a5ed7  FIDIV dword ptr [EBP + -0x4c]
004a5eda  FLD1
004a5edc  FSUBRP
004a5ede  FSTP double ptr [EBP + -0x28]
004a5ee1  FLDZ
004a5ee3  FSTP double ptr [EBP + -0x10]
004a5ee6  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5eec  CMP dword ptr [EDX*0x4 + 0x7918d4],0x0
004a5ef4  JLE 0x004a5f2e
004a5ef6  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5efc  FILD dword ptr [EAX*0x4 + 0x7918d4]
004a5f03  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5f09  MOV EDX,dword ptr [ECX*0x4 + 0x7918d4]
004a5f10  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5f16  ADD EDX,dword ptr [EAX*0x4 + 0x7916a8]
004a5f1d  MOV dword ptr [EBP + 0xfffffed8],EDX
004a5f23  FILD dword ptr [EBP + 0xfffffed8]
004a5f29  FDIVP
004a5f2b  FSTP double ptr [EBP + -0x10]
004a5f2e  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5f34  FILD dword ptr [ECX*0x4 + 0x7918b4]
004a5f3b  FIDIV dword ptr [EBP + -0x4c]
004a5f3e  FLD1
004a5f40  FSUBRP
004a5f42  FSTP double ptr [EBP + -0x58]
004a5f45  FLDZ
004a5f47  FSTP double ptr [EBP + 0xffffff70]
004a5f4d  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5f53  CMP dword ptr [EDX*0x4 + 0x791894],0x0
004a5f5b  JLE 0x004a5f99
004a5f5d  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5f63  FILD dword ptr [EAX*0x4 + 0x791894]
004a5f6a  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5f70  FILD dword ptr [ECX*0x4 + 0x791894]
004a5f77  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5f7d  FIADD dword ptr [EDX*0x4 + 0x791848]
004a5f84  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5f8a  FIADD dword ptr [EAX*0x4 + 0x791ac0]
004a5f91  FDIVP
004a5f93  FSTP double ptr [EBP + 0xffffff70]
004a5f99  FLDZ
004a5f9b  FSTP double ptr [EBP + -0x20]
004a5f9e  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5fa4  CMP dword ptr [ECX*0x4 + 0x791848],0x0
004a5fac  JLE 0x004a5fe7
004a5fae  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5fb4  FILD dword ptr [EDX*0x4 + 0x791848]
004a5fbb  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5fc1  FILD dword ptr [EAX*0x4 + 0x791894]
004a5fc8  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a5fce  FIADD dword ptr [ECX*0x4 + 0x791848]
004a5fd5  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a5fdb  FIADD dword ptr [EDX*0x4 + 0x791ac0]
004a5fe2  FDIVP
004a5fe4  FSTP double ptr [EBP + -0x20]
004a5fe7  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a5fed  FILD dword ptr [EAX*0x4 + 0x791870]
004a5ff4  FIDIV dword ptr [EBP + -0x4c]
004a5ff7  FLD1
004a5ff9  FSUBRP
004a5ffb  FSTP double ptr [EBP + 0xffffff50]
004a6001  FLDZ
004a6003  FSTP double ptr [EBP + -0x80]
004a6006  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a600c  CMP dword ptr [ECX*0x4 + 0x791588],0x0
004a6014  JLE 0x004a604f
004a6016  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a601c  FILD dword ptr [EDX*0x4 + 0x791588]
004a6023  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a6029  FILD dword ptr [EAX*0x4 + 0x791588]
004a6030  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a6036  FIADD dword ptr [ECX*0x4 + 0x791e10]
004a603d  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a6043  FIADD dword ptr [EDX*0x4 + 0x791d20]
004a604a  FDIVP
004a604c  FSTP double ptr [EBP + -0x80]
004a604f  FLDZ
004a6051  FSTP double ptr [EBP + -0x78]
004a6054  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a605a  CMP dword ptr [EAX*0x4 + 0x791e10],0x0
004a6062  JLE 0x004a609d
004a6064  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a606a  FILD dword ptr [ECX*0x4 + 0x791e10]
004a6071  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a6077  FILD dword ptr [EDX*0x4 + 0x791588]
004a607e  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a6084  FIADD dword ptr [EAX*0x4 + 0x791e10]
004a608b  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a6091  FIADD dword ptr [ECX*0x4 + 0x791d20]
004a6098  FDIVP
004a609a  FSTP double ptr [EBP + -0x78]
004a609d  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a60a3  FILD dword ptr [EDX*0x4 + 0x791420]
004a60aa  FIDIV dword ptr [EBP + -0x4c]
004a60ad  FLD1
004a60af  FSUBRP
004a60b1  FSTP double ptr [EBP + 0xffffff68]
004a60b7  FLDZ
004a60b9  FSTP double ptr [EBP + -0x60]
004a60bc  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a60c2  CMP dword ptr [EAX*0x4 + 0x791560],0x0
004a60ca  JLE 0x004a6105
004a60cc  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a60d2  FILD dword ptr [ECX*0x4 + 0x791560]
004a60d9  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a60df  FILD dword ptr [EDX*0x4 + 0x791560]
004a60e6  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a60ec  FIADD dword ptr [EAX*0x4 + 0x7915a8]
004a60f3  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a60f9  FIADD dword ptr [ECX*0x4 + 0x791688]
004a6100  FDIVP
004a6102  FSTP double ptr [EBP + -0x60]
004a6105  FLDZ
004a6107  FSTP double ptr [EBP + 0xffffff48]
004a610d  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a6113  CMP dword ptr [EDX*0x4 + 0x7915a8],0x0
004a611b  JLE 0x004a6159
004a611d  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a6123  FILD dword ptr [EAX*0x4 + 0x7915a8]
004a612a  MOV ECX,dword ptr [EBP + 0xffffff7c]
004a6130  FILD dword ptr [ECX*0x4 + 0x791560]
004a6137  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a613d  FIADD dword ptr [EDX*0x4 + 0x7915a8]
004a6144  MOV EAX,dword ptr [EBP + 0xffffff7c]
004a614a  FIADD dword ptr [EAX*0x4 + 0x791688]
004a6151  FDIVP
004a6153  FSTP double ptr [EBP + 0xffffff48]
004a6159  MOV ECX,dword ptr [0x00791890]
004a615f  CALL 0x004d2f40
004a6164  MOVSX ECX,AX
004a6167  MOV dword ptr [EBP + 0xfffffed4],ECX
004a616d  FILD dword ptr [EBP + 0xfffffed4]
004a6173  FDIV double ptr [0x006b4b00]
004a6179  FSTP double ptr [EBP + -0x48]
004a617c  MOV ECX,dword ptr [0x00791890]
004a6182  CALL 0x004d2f60
004a6187  MOVSX EDX,AX
004a618a  MOV dword ptr [EBP + 0xfffffed0],EDX
004a6190  FILD dword ptr [EBP + 0xfffffed0]
004a6196  FDIV double ptr [0x006b4b00]
004a619c  FSTP double ptr [EBP + -0x40]
004a619f  MOVSX EAX,word ptr [EBP + 0xffffff64]
004a61a6  ADD EAX,0x1
004a61a9  MOV dword ptr [EBP + 0xfffffecc],EAX
004a61af  FILD dword ptr [EBP + 0xfffffecc]
004a61b5  FDIVR double ptr [EBP + -0x48]
004a61b8  FSTP double ptr [EBP + -0x70]
004a61bb  MOVSX ECX,word ptr [EBP + 0xffffff64]
004a61c2  ADD ECX,0x1
004a61c5  MOV dword ptr [EBP + 0xfffffec8],ECX
004a61cb  FILD dword ptr [EBP + 0xfffffec8]
004a61d1  FDIVR double ptr [EBP + -0x40]
004a61d4  FSTP double ptr [EBP + -0x68]
004a61d7  FLD1
004a61d9  FSUB double ptr [EBP + -0x40]
004a61dc  FCOMP double ptr [EBP + -0x58]
004a61df  FNSTSW AX
004a61e1  TEST AH,0x5
004a61e4  JP 0x004a61ef
004a61e6  FLD double ptr [EBP + -0x58]
004a61e9  FSUB double ptr [EBP + -0x68]
004a61ec  FSTP double ptr [EBP + -0x58]
004a61ef  FLD1
004a61f1  FSUB double ptr [EBP + -0x40]
004a61f4  FCOMP double ptr [EBP + 0xffffff50]
004a61fa  FNSTSW AX
004a61fc  TEST AH,0x5
004a61ff  JP 0x004a6210
004a6201  FLD double ptr [EBP + 0xffffff50]
004a6207  FSUB double ptr [EBP + -0x68]
004a620a  FSTP double ptr [EBP + 0xffffff50]
004a6210  FLD1
004a6212  FSUB double ptr [EBP + -0x40]
004a6215  FCOMP double ptr [EBP + 0xffffff68]
004a621b  FNSTSW AX
004a621d  TEST AH,0x5
004a6220  JP 0x004a6231
004a6222  FLD double ptr [EBP + 0xffffff68]
004a6228  FSUB double ptr [EBP + -0x68]
004a622b  FSTP double ptr [EBP + 0xffffff68]
004a6231  FLD double ptr [EBP + -0x28]
004a6234  FMUL double ptr [EBP + -0x10]
004a6237  FLD1
004a6239  FSUB double ptr [EBP + -0x28]
004a623c  FMUL double ptr [EBP + -0x58]
004a623f  FMUL double ptr [EBP + 0xffffff70]
004a6245  FADDP
004a6247  FLD1
004a6249  FSUB double ptr [EBP + -0x28]
004a624c  FLD1
004a624e  FSUB double ptr [EBP + -0x58]
004a6251  FMULP
004a6253  FMUL double ptr [EBP + 0xffffff50]
004a6259  FMUL double ptr [EBP + -0x80]
004a625c  FADDP
004a625e  FLD1
004a6260  FSUB double ptr [EBP + -0x28]
004a6263  FLD1
004a6265  FSUB double ptr [EBP + -0x58]
004a6268  FMULP
004a626a  FLD1
004a626c  FSUB double ptr [EBP + 0xffffff50]
004a6272  FMULP
004a6274  FMUL double ptr [EBP + 0xffffff68]
004a627a  FMUL double ptr [EBP + -0x60]
004a627d  FADDP
004a627f  FLD1
004a6281  FSUB double ptr [EBP + -0x28]
004a6284  FMUL double ptr [EBP + -0x70]
004a6287  FMUL double ptr [EBP + -0x58]
004a628a  FMUL double ptr [EBP + -0x20]
004a628d  FADDP
004a628f  FLD1
004a6291  FSUB double ptr [EBP + -0x28]
004a6294  FMUL double ptr [EBP + -0x70]
004a6297  FLD1
004a6299  FSUB double ptr [EBP + -0x58]
004a629c  FMULP
004a629e  FMUL double ptr [EBP + 0xffffff50]
004a62a4  FMUL double ptr [EBP + -0x78]
004a62a7  FADDP
004a62a9  FLD1
004a62ab  FSUB double ptr [EBP + -0x28]
004a62ae  FMUL double ptr [EBP + -0x70]
004a62b1  FLD1
004a62b3  FSUB double ptr [EBP + -0x58]
004a62b6  FMULP
004a62b8  FLD1
004a62ba  FSUB double ptr [EBP + 0xffffff50]
004a62c0  FMULP
004a62c2  FMUL double ptr [EBP + 0xffffff68]
004a62c8  FMUL double ptr [EBP + 0xffffff48]
004a62ce  FADDP
004a62d0  FLD1
004a62d2  FSUB double ptr [EBP + -0x28]
004a62d5  FLD1
004a62d7  FSUB double ptr [EBP + -0x58]
004a62da  FMULP
004a62dc  FLD1
004a62de  FSUB double ptr [EBP + 0xffffff50]
004a62e4  FMULP
004a62e6  FLD1
004a62e8  FSUB double ptr [EBP + 0xffffff68]
004a62ee  FMULP
004a62f0  FMUL double ptr [EBP + -0x38]
004a62f3  FADDP
004a62f5  FSTP double ptr [EBP + 0xffffff58]
004a62fb  MOV ECX,dword ptr [0x00791890]
004a6301  CALL 0x004d2f20
004a6306  MOVSX EDX,AX
004a6309  MOV dword ptr [EBP + 0xfffffec4],EDX
004a630f  FILD dword ptr [EBP + 0xfffffec4]
004a6315  FDIV double ptr [0x006b4b00]
004a631b  MOV EAX,0x6
004a6320  SUB EAX,dword ptr [EBP + 0x8]
004a6323  MOVSX ECX,word ptr [EBP + 0xffffff64]
004a632a  ADD EAX,ECX
004a632c  MOV dword ptr [EBP + 0xfffffec0],EAX
004a6332  FILD dword ptr [EBP + 0xfffffec0]
004a6338  FMULP
004a633a  FSTP double ptr [EBP + -0x8]
004a633d  FLD double ptr [EBP + 0xffffff58]
004a6343  FMUL double ptr [EBP + -0x8]
004a6346  FLD1
004a6348  FSUB double ptr [EBP + -0x8]
004a634b  FMUL double ptr [EBP + -0x38]
004a634e  FADDP
004a6350  FSTP double ptr [EBP + -0x18]
004a6353  MOV EDX,dword ptr [EBP + 0xffffff7c]
004a6359  FLD double ptr [EBP + -0x18]
004a635c  FMUL double ptr [EDX*0x8 + 0x791dd0]
004a6363  FSTP double ptr [EBP + -0x18]
004a6366  FLD double ptr [0x006b4b00]
004a636c  FCOMP double ptr [EBP + -0x18]
004a636f  FNSTSW AX
004a6371  TEST AH,0x5
004a6374  JP 0x004a637f
004a6376  FLD double ptr [0x006b4b00]
004a637c  FSTP double ptr [EBP + -0x18]
004a637f  FLDZ
004a6381  FCOMP double ptr [EBP + -0x18]
004a6384  FNSTSW AX
004a6386  TEST AH,0x41
004a6389  JNZ 0x004a6390
004a638b  FLDZ
004a638d  FSTP double ptr [EBP + -0x18]
004a6390  FLD double ptr [EBP + -0x18]
004a6393  POP ESI
004a6394  MOV ESP,EBP
004a6396  POP EBP
004a6397  RET
