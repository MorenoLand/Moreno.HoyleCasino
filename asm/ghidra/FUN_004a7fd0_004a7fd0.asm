; FUN_004a7fd0  004a7fd0
004a7fd0  PUSH EBP
004a7fd1  MOV EBP,ESP
004a7fd3  SUB ESP,0x168
004a7fd9  PUSH ESI
004a7fda  MOV ECX,dword ptr [0x00791364]
004a7fe0  CALL 0x0047e420
004a7fe5  MOV dword ptr [EBP + 0xffffff6c],EAX
004a7feb  FLD1
004a7fed  FSTP double ptr [EBP + -0x38]
004a7ff0  FLD1
004a7ff2  FSTP double ptr [EBP + 0xffffff58]
004a7ff8  MOV ECX,dword ptr [0x00791890]
004a7ffe  CALL 0x004d5010
004a8003  FIDIV dword ptr [EBP + 0xc]
004a8006  FSTP double ptr [EBP + -0x30]
004a8009  MOV word ptr [EBP + 0xffffff4c],0x0
004a8012  MOV word ptr [EBP + 0xffffff24],0x0
004a801b  JMP 0x004a802f
004a801d  MOV AX,word ptr [EBP + 0xffffff24]
004a8024  ADD AX,0x1
004a8028  MOV word ptr [EBP + 0xffffff24],AX
004a802f  MOVSX ESI,word ptr [EBP + 0xffffff24]
004a8036  MOV ECX,dword ptr [0x00791364]
004a803c  CALL 0x0047f950
004a8041  CMP ESI,EAX
004a8043  JGE 0x004a8558
004a8049  MOVSX ECX,word ptr [EBP + 0xffffff24]
004a8050  CMP ECX,dword ptr [EBP + 0xffffff6c]
004a8056  JNZ 0x004a805a
004a8058  JMP 0x004a801d
004a805a  MOVSX EDX,word ptr [EBP + 0xffffff24]
004a8061  PUSH EDX
004a8062  MOV ECX,dword ptr [0x00791364]
004a8068  CALL 0x0047e390
004a806d  MOV ECX,EAX
004a806f  CALL 0x004c7010
004a8074  CMP EAX,0x1
004a8077  JNZ 0x004a8553
004a807d  FLDZ
004a807f  FSTP double ptr [EBP + 0xffffff10]
004a8085  MOV AX,word ptr [EBP + 0xc]
004a8089  PUSH EAX
004a808a  MOV CX,word ptr [EBP + 0xffffff24]
004a8091  PUSH ECX
004a8092  MOV ECX,dword ptr [0x00791890]
004a8098  CALL 0x004d4d30
004a809d  FSTP double ptr [EBP + 0xffffff18]
004a80a3  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a80a9  SHL EDX,0x6
004a80ac  MOVSX EAX,word ptr [EBP + 0xffffff24]
004a80b3  FLD double ptr [EBP + 0xffffff18]
004a80b9  FMUL double ptr [EDX + EAX*0x8 + 0x791ae0]
004a80c0  FCOMP double ptr [EBP + -0x30]
004a80c3  FNSTSW AX
004a80c5  TEST AH,0x41
004a80c8  JNZ 0x004a80d6
004a80ca  MOV byte ptr [EBP + 0xffffff0f],0x1
004a80d1  JMP 0x004a82d1
004a80d6  MOV CX,word ptr [EBP + 0xffffff4c]
004a80dd  ADD CX,0x1
004a80e1  MOV word ptr [EBP + 0xffffff4c],CX
004a80e8  MOVSX EDX,word ptr [EBP + 0xffffff24]
004a80ef  PUSH EDX
004a80f0  MOV ECX,dword ptr [0x00791364]
004a80f6  CALL 0x0047e390
004a80fb  MOV ECX,EAX
004a80fd  CALL 0x004c7050
004a8102  MOV dword ptr [EBP + 0xffffff04],EAX
004a8108  MOV AX,word ptr [EBP + 0xffffff04]
004a810f  PUSH EAX
004a8110  MOV ECX,dword ptr [0x00791364]
004a8116  ADD ECX,0x38
004a8119  CALL 0x004f6880
004a811e  MOV word ptr [EBP + 0xfffffefc],AX
004a8125  MOV CX,word ptr [EBP + 0xffffff04]
004a812c  PUSH ECX
004a812d  MOV ECX,dword ptr [0x00791364]
004a8133  ADD ECX,0x38
004a8136  CALL 0x004f6930
004a813b  MOV word ptr [EBP + 0xffffff00],AX
004a8142  MOV DX,word ptr [EBP + 0xffffff04]
004a8149  PUSH EDX
004a814a  MOV ECX,dword ptr [0x00791364]
004a8150  ADD ECX,0x38
004a8153  CALL 0x004f6a90
004a8158  MOVSX EAX,AX
004a815b  MOVSX ECX,word ptr [EBP + 0xfffffefc]
004a8162  SUB EAX,ECX
004a8164  MOV word ptr [EBP + 0xfffffef8],AX
004a816b  MOV DX,word ptr [EBP + 0xffffff04]
004a8172  PUSH EDX
004a8173  MOV ECX,dword ptr [0x00791364]
004a8179  ADD ECX,0x38
004a817c  CALL 0x004f6b20
004a8181  MOVSX EAX,AX
004a8184  MOVSX ECX,word ptr [EBP + 0xffffff00]
004a818b  SUB EAX,ECX
004a818d  MOV word ptr [EBP + 0xffffff08],AX
004a8194  MOVSX EDX,word ptr [EBP + 0xfffffefc]
004a819b  TEST EDX,EDX
004a819d  JGE 0x004a81b6
004a819f  PUSH 0x6ff
004a81a4  PUSH 0x6be4fc
004a81a9  PUSH 0x6bc25c
004a81ae  CALL 0x005e9f20
004a81b3  ADD ESP,0xc
004a81b6  MOVSX ECX,word ptr [EBP + 0xffffff00]
004a81bd  TEST ECX,ECX
004a81bf  JGE 0x004a81d8
004a81c1  PUSH 0x700
004a81c6  PUSH 0x6be4fc
004a81cb  PUSH 0x6bc248
004a81d0  CALL 0x005e9f20
004a81d5  ADD ESP,0xc
004a81d8  MOVSX EAX,word ptr [EBP + 0xfffffef8]
004a81df  TEST EAX,EAX
004a81e1  JGE 0x004a81fa
004a81e3  PUSH 0x701
004a81e8  PUSH 0x6be4fc
004a81ed  PUSH 0x6bc220
004a81f2  CALL 0x005e9f20
004a81f7  ADD ESP,0xc
004a81fa  MOVSX EDX,word ptr [EBP + 0xffffff08]
004a8201  TEST EDX,EDX
004a8203  JGE 0x004a821c
004a8205  PUSH 0x702
004a820a  PUSH 0x6be4fc
004a820f  PUSH 0x6bc210
004a8214  CALL 0x005e9f20
004a8219  ADD ESP,0xc
004a821c  MOV byte ptr [EBP + 0xffffff0f],0x0
004a8223  MOV ECX,dword ptr [0x00791890]
004a8229  CALL 0x004d5040
004a822e  MOVSX ECX,word ptr [EBP + 0xfffffef8]
004a8235  MOV dword ptr [EBP + 0xfffffef0],ECX
004a823b  FILD dword ptr [EBP + 0xfffffef0]
004a8241  FMULP
004a8243  FLD1
004a8245  FADDP
004a8247  MOV ECX,dword ptr [0x00791890]
004a824d  FSTP double ptr [EBP + 0xfffffee8]
004a8253  CALL 0x004d5110
004a8258  MOVSX EDX,word ptr [EBP + 0xffffff08]
004a825f  MOV dword ptr [EBP + 0xfffffee4],EDX
004a8265  FILD dword ptr [EBP + 0xfffffee4]
004a826b  FMULP
004a826d  FADD double ptr [EBP + 0xfffffee8]
004a8273  MOV ECX,dword ptr [0x00791890]
004a8279  FSTP double ptr [EBP + 0xfffffedc]
004a827f  CALL 0x004d51e0
004a8284  MOVSX EAX,word ptr [EBP + 0xfffffefc]
004a828b  MOV dword ptr [EBP + 0xfffffed8],EAX
004a8291  FILD dword ptr [EBP + 0xfffffed8]
004a8297  FMULP
004a8299  FADD double ptr [EBP + 0xfffffedc]
004a829f  MOV ECX,dword ptr [0x00791890]
004a82a5  FSTP double ptr [EBP + 0xfffffed0]
004a82ab  CALL 0x004d52b0
004a82b0  MOVSX ECX,word ptr [EBP + 0xffffff00]
004a82b7  MOV dword ptr [EBP + 0xfffffecc],ECX
004a82bd  FILD dword ptr [EBP + 0xfffffecc]
004a82c3  FMULP
004a82c5  FADD double ptr [EBP + 0xfffffed0]
004a82cb  FSTP double ptr [EBP + 0xffffff10]
004a82d1  MOV word ptr [EBP + 0xfffffef4],0x0
004a82da  JMP 0x004a82ee
004a82dc  MOV DX,word ptr [EBP + 0xfffffef4]
004a82e3  ADD DX,0x1
004a82e7  MOV word ptr [EBP + 0xfffffef4],DX
004a82ee  MOVSX EAX,word ptr [EBP + 0xfffffef4]
004a82f5  CMP EAX,0x6
004a82f8  JGE 0x004a8553
004a82fe  MOVZX ECX,byte ptr [EBP + 0xffffff0f]
004a8305  TEST ECX,ECX
004a8307  JZ 0x004a8412
004a830d  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8313  IMUL EDX,EDX,0x18
004a8316  FILD dword ptr [EDX + 0x7915c8]
004a831c  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8322  IMUL EAX,EAX,0x18
004a8325  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a832b  IMUL ECX,ECX,0x18
004a832e  MOV EDX,dword ptr [EAX + 0x7915c8]
004a8334  ADD EDX,dword ptr [ECX + 0x7919d8]
004a833a  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8340  IMUL EAX,EAX,0x18
004a8343  ADD EDX,dword ptr [EAX + 0x791460]
004a8349  MOV dword ptr [EBP + 0xfffffec8],EDX
004a834f  FILD dword ptr [EBP + 0xfffffec8]
004a8355  FDIVP
004a8357  FLD1
004a8359  FSUBRP
004a835b  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8361  IMUL ECX,ECX,0x18
004a8364  FILD dword ptr [ECX + 0x7919d8]
004a836a  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8370  IMUL EDX,EDX,0x18
004a8373  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8379  IMUL EAX,EAX,0x18
004a837c  MOV ECX,dword ptr [EDX + 0x7915c8]
004a8382  ADD ECX,dword ptr [EAX + 0x7919d8]
004a8388  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a838e  IMUL EDX,EDX,0x18
004a8391  ADD ECX,dword ptr [EDX + 0x791460]
004a8397  MOV dword ptr [EBP + 0xfffffec4],ECX
004a839d  FILD dword ptr [EBP + 0xfffffec4]
004a83a3  FDIVP
004a83a5  FMUL double ptr [0x006b3e40]
004a83ab  FSUBP
004a83ad  FMUL double ptr [EBP + -0x38]
004a83b0  FSTP double ptr [EBP + -0x38]
004a83b3  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a83b9  IMUL EAX,EAX,0x18
004a83bc  FILD dword ptr [EAX + 0x7915cc]
004a83c2  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a83c8  IMUL ECX,ECX,0x18
004a83cb  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a83d1  IMUL EDX,EDX,0x18
004a83d4  MOV EAX,dword ptr [ECX + 0x7915cc]
004a83da  ADD EAX,dword ptr [EDX + 0x7919dc]
004a83e0  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a83e6  IMUL ECX,ECX,0x18
004a83e9  ADD EAX,dword ptr [ECX + 0x791464]
004a83ef  MOV dword ptr [EBP + 0xfffffec0],EAX
004a83f5  FILD dword ptr [EBP + 0xfffffec0]
004a83fb  FDIVP
004a83fd  FLD1
004a83ff  FSUBRP
004a8401  FMUL double ptr [EBP + 0xffffff58]
004a8407  FSTP double ptr [EBP + 0xffffff58]
004a840d  JMP 0x004a8526
004a8412  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8418  IMUL EDX,EDX,0x18
004a841b  FILD dword ptr [EDX + 0x7915c8]
004a8421  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8427  IMUL EAX,EAX,0x18
004a842a  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8430  IMUL ECX,ECX,0x18
004a8433  MOV EDX,dword ptr [EAX + 0x7915c8]
004a8439  ADD EDX,dword ptr [ECX + 0x7919d8]
004a843f  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8445  IMUL EAX,EAX,0x18
004a8448  ADD EDX,dword ptr [EAX + 0x791460]
004a844e  MOV dword ptr [EBP + 0xfffffebc],EDX
004a8454  FILD dword ptr [EBP + 0xfffffebc]
004a845a  FDIVP
004a845c  FMUL double ptr [EBP + 0xffffff10]
004a8462  FLD1
004a8464  FSUBRP
004a8466  FLD double ptr [EBP + 0xffffff10]
004a846c  FMUL double ptr [0x006b3e40]
004a8472  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8478  IMUL ECX,ECX,0x18
004a847b  FILD dword ptr [ECX + 0x7919d8]
004a8481  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8487  IMUL EDX,EDX,0x18
004a848a  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8490  IMUL EAX,EAX,0x18
004a8493  MOV ECX,dword ptr [EDX + 0x7915c8]
004a8499  ADD ECX,dword ptr [EAX + 0x7919d8]
004a849f  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a84a5  IMUL EDX,EDX,0x18
004a84a8  ADD ECX,dword ptr [EDX + 0x791460]
004a84ae  MOV dword ptr [EBP + 0xfffffeb8],ECX
004a84b4  FILD dword ptr [EBP + 0xfffffeb8]
004a84ba  FDIVP
004a84bc  FMULP
004a84be  FSUBP
004a84c0  FMUL double ptr [EBP + -0x38]
004a84c3  FSTP double ptr [EBP + -0x38]
004a84c6  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a84cc  IMUL EAX,EAX,0x18
004a84cf  FILD dword ptr [EAX + 0x7915cc]
004a84d5  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a84db  IMUL ECX,ECX,0x18
004a84de  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a84e4  IMUL EDX,EDX,0x18
004a84e7  MOV EAX,dword ptr [ECX + 0x7915cc]
004a84ed  ADD EAX,dword ptr [EDX + 0x7919dc]
004a84f3  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a84f9  IMUL ECX,ECX,0x18
004a84fc  ADD EAX,dword ptr [ECX + 0x791464]
004a8502  MOV dword ptr [EBP + 0xfffffeb4],EAX
004a8508  FILD dword ptr [EBP + 0xfffffeb4]
004a850e  FDIVP
004a8510  FMUL double ptr [EBP + 0xffffff10]
004a8516  FLD1
004a8518  FSUBRP
004a851a  FMUL double ptr [EBP + 0xffffff58]
004a8520  FSTP double ptr [EBP + 0xffffff58]
004a8526  FLDZ
004a8528  FCOMP double ptr [EBP + -0x38]
004a852b  FNSTSW AX
004a852d  TEST AH,0x41
004a8530  JNZ 0x004a8537
004a8532  FLDZ
004a8534  FSTP double ptr [EBP + -0x38]
004a8537  FLDZ
004a8539  FCOMP double ptr [EBP + 0xffffff58]
004a853f  FNSTSW AX
004a8541  TEST AH,0x41
004a8544  JNZ 0x004a854e
004a8546  FLDZ
004a8548  FSTP double ptr [EBP + 0xffffff58]
004a854e  JMP 0x004a82dc
004a8553  JMP 0x004a801d
004a8558  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a855e  MOV EAX,dword ptr [EDX*0x4 + 0x7918b4]
004a8565  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a856b  ADD EAX,dword ptr [ECX*0x4 + 0x791894]
004a8572  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8578  ADD EAX,dword ptr [EDX*0x4 + 0x791848]
004a857f  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8585  ADD EAX,dword ptr [ECX*0x4 + 0x791ac0]
004a858c  MOV dword ptr [EBP + -0x5c],EAX
004a858f  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8595  FILD dword ptr [EDX*0x4 + 0x791998]
004a859c  FIDIV dword ptr [EBP + -0x5c]
004a859f  FLD1
004a85a1  FSUBRP
004a85a3  FSTP double ptr [EBP + 0xffffff28]
004a85a9  FLDZ
004a85ab  FSTP double ptr [EBP + -0x58]
004a85ae  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a85b4  CMP dword ptr [EAX*0x4 + 0x7916c8],0x0
004a85bc  JLE 0x004a85f7
004a85be  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a85c4  FILD dword ptr [ECX*0x4 + 0x7916c8]
004a85cb  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a85d1  FILD dword ptr [EDX*0x4 + 0x7916c8]
004a85d8  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a85de  FIADD dword ptr [EAX*0x4 + 0x791ce0]
004a85e5  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a85eb  FIADD dword ptr [ECX*0x4 + 0x791778]
004a85f2  FDIVP
004a85f4  FSTP double ptr [EBP + -0x58]
004a85f7  FLDZ
004a85f9  FSTP double ptr [EBP + -0x50]
004a85fc  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8602  CMP dword ptr [EDX*0x4 + 0x791ce0],0x0
004a860a  JLE 0x004a8645
004a860c  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8612  FILD dword ptr [EAX*0x4 + 0x791ce0]
004a8619  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a861f  FILD dword ptr [ECX*0x4 + 0x7916c8]
004a8626  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a862c  FIADD dword ptr [EDX*0x4 + 0x791ce0]
004a8633  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8639  FIADD dword ptr [EAX*0x4 + 0x791778]
004a8640  FDIVP
004a8642  FSTP double ptr [EBP + -0x50]
004a8645  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a864b  FILD dword ptr [ECX*0x4 + 0x791938]
004a8652  FIDIV dword ptr [EBP + -0x5c]
004a8655  FLD1
004a8657  FSUBRP
004a8659  FSTP double ptr [EBP + -0x28]
004a865c  FLDZ
004a865e  FSTP double ptr [EBP + -0x10]
004a8661  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8667  CMP dword ptr [EDX*0x4 + 0x7918d4],0x0
004a866f  JLE 0x004a86a9
004a8671  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8677  FILD dword ptr [EAX*0x4 + 0x7918d4]
004a867e  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8684  MOV EDX,dword ptr [ECX*0x4 + 0x7918d4]
004a868b  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8691  ADD EDX,dword ptr [EAX*0x4 + 0x7916a8]
004a8698  MOV dword ptr [EBP + 0xfffffeb0],EDX
004a869e  FILD dword ptr [EBP + 0xfffffeb0]
004a86a4  FDIVP
004a86a6  FSTP double ptr [EBP + -0x10]
004a86a9  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a86af  FILD dword ptr [ECX*0x4 + 0x7918b4]
004a86b6  FIDIV dword ptr [EBP + -0x5c]
004a86b9  FLD1
004a86bb  FSUBRP
004a86bd  FSTP double ptr [EBP + -0x68]
004a86c0  FLDZ
004a86c2  FSTP double ptr [EBP + 0xffffff60]
004a86c8  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a86ce  CMP dword ptr [EDX*0x4 + 0x791894],0x0
004a86d6  JLE 0x004a8714
004a86d8  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a86de  FILD dword ptr [EAX*0x4 + 0x791894]
004a86e5  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a86eb  FILD dword ptr [ECX*0x4 + 0x791894]
004a86f2  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a86f8  FIADD dword ptr [EDX*0x4 + 0x791848]
004a86ff  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8705  FIADD dword ptr [EAX*0x4 + 0x791ac0]
004a870c  FDIVP
004a870e  FSTP double ptr [EBP + 0xffffff60]
004a8714  FLDZ
004a8716  FSTP double ptr [EBP + -0x20]
004a8719  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a871f  CMP dword ptr [ECX*0x4 + 0x791848],0x0
004a8727  JLE 0x004a8762
004a8729  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a872f  FILD dword ptr [EDX*0x4 + 0x791848]
004a8736  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a873c  FILD dword ptr [EAX*0x4 + 0x791894]
004a8743  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8749  FIADD dword ptr [ECX*0x4 + 0x791848]
004a8750  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8756  FIADD dword ptr [EDX*0x4 + 0x791ac0]
004a875d  FDIVP
004a875f  FSTP double ptr [EBP + -0x20]
004a8762  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8768  FILD dword ptr [EAX*0x4 + 0x791870]
004a876f  FIDIV dword ptr [EBP + -0x5c]
004a8772  FLD1
004a8774  FSUBRP
004a8776  FSTP double ptr [EBP + 0xffffff38]
004a877c  FLDZ
004a877e  FSTP double ptr [EBP + 0xffffff70]
004a8784  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a878a  CMP dword ptr [ECX*0x4 + 0x791588],0x0
004a8792  JLE 0x004a87d0
004a8794  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a879a  FILD dword ptr [EDX*0x4 + 0x791588]
004a87a1  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a87a7  FILD dword ptr [EAX*0x4 + 0x791588]
004a87ae  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a87b4  FIADD dword ptr [ECX*0x4 + 0x791e10]
004a87bb  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a87c1  FIADD dword ptr [EDX*0x4 + 0x791d20]
004a87c8  FDIVP
004a87ca  FSTP double ptr [EBP + 0xffffff70]
004a87d0  FLDZ
004a87d2  FSTP double ptr [EBP + 0xffffff78]
004a87d8  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a87de  CMP dword ptr [EAX*0x4 + 0x791e10],0x0
004a87e6  JLE 0x004a8824
004a87e8  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a87ee  FILD dword ptr [ECX*0x4 + 0x791e10]
004a87f5  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a87fb  FILD dword ptr [EDX*0x4 + 0x791588]
004a8802  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8808  FIADD dword ptr [EAX*0x4 + 0x791e10]
004a880f  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8815  FIADD dword ptr [ECX*0x4 + 0x791d20]
004a881c  FDIVP
004a881e  FSTP double ptr [EBP + 0xffffff78]
004a8824  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a882a  FILD dword ptr [EDX*0x4 + 0x791420]
004a8831  FIDIV dword ptr [EBP + -0x5c]
004a8834  FLD1
004a8836  FSUBRP
004a8838  FSTP double ptr [EBP + 0xffffff50]
004a883e  FLDZ
004a8840  FSTP double ptr [EBP + -0x70]
004a8843  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8849  CMP dword ptr [EAX*0x4 + 0x791560],0x0
004a8851  JLE 0x004a888c
004a8853  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8859  FILD dword ptr [ECX*0x4 + 0x791560]
004a8860  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8866  FILD dword ptr [EDX*0x4 + 0x791560]
004a886d  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8873  FIADD dword ptr [EAX*0x4 + 0x7915a8]
004a887a  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a8880  FIADD dword ptr [ECX*0x4 + 0x791688]
004a8887  FDIVP
004a8889  FSTP double ptr [EBP + -0x70]
004a888c  FLDZ
004a888e  FSTP double ptr [EBP + 0xffffff30]
004a8894  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a889a  CMP dword ptr [EDX*0x4 + 0x7915a8],0x0
004a88a2  JLE 0x004a88e0
004a88a4  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a88aa  FILD dword ptr [EAX*0x4 + 0x7915a8]
004a88b1  MOV ECX,dword ptr [EBP + 0xffffff6c]
004a88b7  FILD dword ptr [ECX*0x4 + 0x791560]
004a88be  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a88c4  FIADD dword ptr [EDX*0x4 + 0x7915a8]
004a88cb  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a88d1  FIADD dword ptr [EAX*0x4 + 0x791688]
004a88d8  FDIVP
004a88da  FSTP double ptr [EBP + 0xffffff30]
004a88e0  MOV ECX,dword ptr [0x00791890]
004a88e6  CALL 0x004d5b90
004a88eb  MOVSX ECX,AX
004a88ee  MOV dword ptr [EBP + 0xfffffeac],ECX
004a88f4  FILD dword ptr [EBP + 0xfffffeac]
004a88fa  FDIV double ptr [0x006b4b00]
004a8900  FSTP double ptr [EBP + -0x48]
004a8903  MOV ECX,dword ptr [0x00791890]
004a8909  CALL 0x004d5bb0
004a890e  MOVSX EDX,AX
004a8911  MOV dword ptr [EBP + 0xfffffea8],EDX
004a8917  FILD dword ptr [EBP + 0xfffffea8]
004a891d  FDIV double ptr [0x006b4b00]
004a8923  FSTP double ptr [EBP + -0x40]
004a8926  MOVSX EAX,word ptr [EBP + 0xffffff4c]
004a892d  ADD EAX,0x1
004a8930  MOV dword ptr [EBP + 0xfffffea4],EAX
004a8936  FILD dword ptr [EBP + 0xfffffea4]
004a893c  FDIVR double ptr [EBP + -0x48]
004a893f  FSTP double ptr [EBP + -0x80]
004a8942  MOVSX ECX,word ptr [EBP + 0xffffff4c]
004a8949  ADD ECX,0x1
004a894c  MOV dword ptr [EBP + 0xfffffea0],ECX
004a8952  FILD dword ptr [EBP + 0xfffffea0]
004a8958  FDIVR double ptr [EBP + -0x40]
004a895b  FSTP double ptr [EBP + -0x78]
004a895e  FLD1
004a8960  FSUB double ptr [EBP + -0x40]
004a8963  FCOMP double ptr [EBP + -0x68]
004a8966  FNSTSW AX
004a8968  TEST AH,0x5
004a896b  JP 0x004a8976
004a896d  FLD double ptr [EBP + -0x68]
004a8970  FSUB double ptr [EBP + -0x78]
004a8973  FSTP double ptr [EBP + -0x68]
004a8976  FLD1
004a8978  FSUB double ptr [EBP + -0x40]
004a897b  FCOMP double ptr [EBP + 0xffffff38]
004a8981  FNSTSW AX
004a8983  TEST AH,0x5
004a8986  JP 0x004a8997
004a8988  FLD double ptr [EBP + 0xffffff38]
004a898e  FSUB double ptr [EBP + -0x78]
004a8991  FSTP double ptr [EBP + 0xffffff38]
004a8997  FLD1
004a8999  FSUB double ptr [EBP + -0x40]
004a899c  FCOMP double ptr [EBP + 0xffffff50]
004a89a2  FNSTSW AX
004a89a4  TEST AH,0x5
004a89a7  JP 0x004a89b8
004a89a9  FLD double ptr [EBP + 0xffffff50]
004a89af  FSUB double ptr [EBP + -0x78]
004a89b2  FSTP double ptr [EBP + 0xffffff50]
004a89b8  FLD double ptr [EBP + -0x28]
004a89bb  FMUL double ptr [EBP + -0x10]
004a89be  FLD1
004a89c0  FSUB double ptr [EBP + -0x28]
004a89c3  FMUL double ptr [EBP + -0x68]
004a89c6  FMUL double ptr [EBP + 0xffffff60]
004a89cc  FADDP
004a89ce  FLD1
004a89d0  FSUB double ptr [EBP + -0x28]
004a89d3  FLD1
004a89d5  FSUB double ptr [EBP + -0x68]
004a89d8  FMULP
004a89da  FMUL double ptr [EBP + 0xffffff38]
004a89e0  FMUL double ptr [EBP + 0xffffff70]
004a89e6  FADDP
004a89e8  FLD1
004a89ea  FSUB double ptr [EBP + -0x28]
004a89ed  FLD1
004a89ef  FSUB double ptr [EBP + -0x68]
004a89f2  FMULP
004a89f4  FLD1
004a89f6  FSUB double ptr [EBP + 0xffffff38]
004a89fc  FMULP
004a89fe  FMUL double ptr [EBP + 0xffffff50]
004a8a04  FMUL double ptr [EBP + -0x70]
004a8a07  FADDP
004a8a09  FLD1
004a8a0b  FSUB double ptr [EBP + -0x28]
004a8a0e  FMUL double ptr [EBP + -0x80]
004a8a11  FMUL double ptr [EBP + -0x68]
004a8a14  FMUL double ptr [EBP + -0x20]
004a8a17  FADDP
004a8a19  FLD1
004a8a1b  FSUB double ptr [EBP + -0x28]
004a8a1e  FMUL double ptr [EBP + -0x80]
004a8a21  FLD1
004a8a23  FSUB double ptr [EBP + -0x68]
004a8a26  FMULP
004a8a28  FMUL double ptr [EBP + 0xffffff38]
004a8a2e  FMUL double ptr [EBP + 0xffffff78]
004a8a34  FADDP
004a8a36  FLD1
004a8a38  FSUB double ptr [EBP + -0x28]
004a8a3b  FMUL double ptr [EBP + -0x80]
004a8a3e  FLD1
004a8a40  FSUB double ptr [EBP + -0x68]
004a8a43  FMULP
004a8a45  FLD1
004a8a47  FSUB double ptr [EBP + 0xffffff38]
004a8a4d  FMULP
004a8a4f  FMUL double ptr [EBP + 0xffffff50]
004a8a55  FMUL double ptr [EBP + 0xffffff30]
004a8a5b  FADDP
004a8a5d  FLD1
004a8a5f  FSUB double ptr [EBP + -0x28]
004a8a62  FLD1
004a8a64  FSUB double ptr [EBP + -0x68]
004a8a67  FMULP
004a8a69  FLD1
004a8a6b  FSUB double ptr [EBP + 0xffffff38]
004a8a71  FMULP
004a8a73  FLD1
004a8a75  FSUB double ptr [EBP + 0xffffff50]
004a8a7b  FMULP
004a8a7d  FMUL double ptr [EBP + -0x38]
004a8a80  FADDP
004a8a82  FSTP double ptr [EBP + 0xffffff40]
004a8a88  FLD double ptr [EBP + 0xffffff40]
004a8a8e  FADD double ptr [EBP + -0x58]
004a8a91  FLD double ptr [EBP + -0x80]
004a8a94  FMUL double ptr [EBP + -0x50]
004a8a97  FADDP
004a8a99  FDIV double ptr [0x006b3740]
004a8a9f  FMUL double ptr [EBP + 0xffffff28]
004a8aa5  FLD1
004a8aa7  FSUB double ptr [EBP + 0xffffff28]
004a8aad  FMUL double ptr [EBP + 0xffffff40]
004a8ab3  FADDP
004a8ab5  FSTP double ptr [EBP + 0xffffff40]
004a8abb  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8ac1  IMUL EDX,EDX,0x18
004a8ac4  MOV EAX,dword ptr [EBP + 0xffffff6c]
004a8aca  IMUL EAX,EAX,0x18
004a8acd  MOV ECX,dword ptr [EDX + 0x7915cc]
004a8ad3  ADD ECX,dword ptr [EAX + 0x791464]
004a8ad9  JNZ 0x004a8af2
004a8adb  FLD double ptr [EBP + 0xffffff40]
004a8ae1  FADD double ptr [EBP + -0x58]
004a8ae4  FLD double ptr [EBP + -0x80]
004a8ae7  FMUL double ptr [EBP + -0x50]
004a8aea  FADDP
004a8aec  FSTP double ptr [EBP + 0xffffff58]
004a8af2  MOV ECX,dword ptr [0x00791890]
004a8af8  CALL 0x004d5b70
004a8afd  MOVSX EDX,AX
004a8b00  MOV dword ptr [EBP + 0xfffffe9c],EDX
004a8b06  FILD dword ptr [EBP + 0xfffffe9c]
004a8b0c  FDIV double ptr [0x006b4b00]
004a8b12  MOV EAX,0x6
004a8b17  SUB EAX,dword ptr [EBP + 0x8]
004a8b1a  MOVSX ECX,word ptr [EBP + 0xffffff4c]
004a8b21  ADD EAX,ECX
004a8b23  MOV dword ptr [EBP + 0xfffffe98],EAX
004a8b29  FILD dword ptr [EBP + 0xfffffe98]
004a8b2f  FMULP
004a8b31  FSTP double ptr [EBP + -0x8]
004a8b34  FLD double ptr [EBP + 0xffffff40]
004a8b3a  FMUL double ptr [EBP + -0x8]
004a8b3d  FLD double ptr [EBP + -0x38]
004a8b40  FADD double ptr [EBP + 0xffffff58]
004a8b46  FDIV double ptr [0x006b3740]
004a8b4c  FMUL double ptr [EBP + 0xffffff28]
004a8b52  FLD1
004a8b54  FSUB double ptr [EBP + 0xffffff28]
004a8b5a  FMUL double ptr [EBP + -0x38]
004a8b5d  FADDP
004a8b5f  FLD1
004a8b61  FSUB double ptr [EBP + -0x8]
004a8b64  FMULP
004a8b66  FADDP
004a8b68  FSTP double ptr [EBP + -0x18]
004a8b6b  MOV EDX,dword ptr [EBP + 0xffffff6c]
004a8b71  FLD double ptr [EBP + -0x18]
004a8b74  FMUL double ptr [EDX*0x8 + 0x791dd0]
004a8b7b  FSTP double ptr [EBP + -0x18]
004a8b7e  FLD double ptr [0x006b4b00]
004a8b84  FCOMP double ptr [EBP + -0x18]
004a8b87  FNSTSW AX
004a8b89  TEST AH,0x5
004a8b8c  JP 0x004a8b97
004a8b8e  FLD double ptr [0x006b4b00]
004a8b94  FSTP double ptr [EBP + -0x18]
004a8b97  FLDZ
004a8b99  FCOMP double ptr [EBP + -0x18]
004a8b9c  FNSTSW AX
004a8b9e  TEST AH,0x41
004a8ba1  JNZ 0x004a8ba8
004a8ba3  FLDZ
004a8ba5  FSTP double ptr [EBP + -0x18]
004a8ba8  FLD double ptr [EBP + -0x18]
004a8bab  POP ESI
004a8bac  MOV ESP,EBP
004a8bae  POP EBP
004a8baf  RET
