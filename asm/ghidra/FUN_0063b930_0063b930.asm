; FUN_0063b930  0063b930
0063b930  PUSH EBP
0063b931  MOV EBP,ESP
0063b933  PUSH -0x1
0063b935  PUSH 0x6abc00
0063b93a  MOV EAX,FS:[0x0]
0063b940  PUSH EAX
0063b941  SUB ESP,0x164
0063b947  MOV EAX,[0x00781870]
0063b94c  XOR EAX,EBP
0063b94e  MOV dword ptr [EBP + -0x14],EAX
0063b951  PUSH EAX
0063b952  LEA EAX,[EBP + -0xc]
0063b955  MOV FS:[0x0],EAX
0063b95b  MOV dword ptr [EBP + 0xfffffeac],ECX
0063b961  MOV EAX,dword ptr [EBP + 0xfffffeac]
0063b967  CMP dword ptr [EAX + 0x1c0],0x0
0063b96e  JNZ 0x0063b9b7
0063b970  MOV ECX,dword ptr [0x0162ee84]
0063b976  MOV EDX,dword ptr [ECX]
0063b978  MOV ECX,dword ptr [0x0162ee84]
0063b97e  MOV EAX,dword ptr [EDX + 0x10c]
0063b984  CALL EAX
0063b986  XOR ECX,ECX
0063b988  MOV EDX,0x8
0063b98d  MUL EDX
0063b98f  SETO CL
0063b992  NEG ECX
0063b994  OR ECX,EAX
0063b996  PUSH ECX
0063b997  CALL 0x00686d82
0063b99c  ADD ESP,0x4
0063b99f  MOV dword ptr [EBP + 0xfffffec8],EAX
0063b9a5  MOV EAX,dword ptr [EBP + 0xfffffeac]
0063b9ab  MOV ECX,dword ptr [EBP + 0xfffffec8]
0063b9b1  MOV dword ptr [EAX + 0x1c0],ECX
0063b9b7  MOV EDX,dword ptr [EBP + 0xfffffeac]
0063b9bd  MOV EAX,dword ptr [EDX + 0x1c0]
0063b9c3  PUSH EAX
0063b9c4  MOV ECX,dword ptr [0x0162ee80]
0063b9ca  MOV EDX,dword ptr [ECX]
0063b9cc  MOV ECX,dword ptr [0x0162ee80]
0063b9d2  MOV EAX,dword ptr [EDX + 0xf4]
0063b9d8  CALL EAX
0063b9da  LEA ECX,[EBP + 0xfffffecc]
0063b9e0  PUSH ECX
0063b9e1  MOV ECX,dword ptr [0x0162ee84]
0063b9e7  CALL 0x005f3bf0
0063b9ec  PUSH EAX
0063b9ed  MOV EDX,dword ptr [0x0162ee84]
0063b9f3  MOV EAX,dword ptr [EDX]
0063b9f5  MOV ECX,dword ptr [0x0162ee84]
0063b9fb  MOV EDX,dword ptr [EAX + 0x338]
0063ba01  CALL EDX
0063ba03  MOV EAX,[0x0162ee80]
0063ba08  MOV EDX,dword ptr [EAX]
0063ba0a  MOV ECX,dword ptr [0x0162ee80]
0063ba10  MOV EAX,dword ptr [EDX + 0xb0]
0063ba16  CALL EAX
0063ba18  MOVZX ECX,AL
0063ba1b  TEST ECX,ECX
0063ba1d  JZ 0x0063ba46
0063ba1f  LEA EDX,[EBP + 0xfffffecc]
0063ba25  PUSH EDX
0063ba26  PUSH 0x6dba14
0063ba2b  CALL 0x00630f40
0063ba30  ADD ESP,0x4
0063ba33  PUSH EAX
0063ba34  LEA EAX,[EBP + 0xfffffeec]
0063ba3a  PUSH EAX
0063ba3b  CALL dword ptr [0x006b2220]
0063ba41  ADD ESP,0xc
0063ba44  JMP 0x0063ba6b
0063ba46  LEA ECX,[EBP + 0xfffffecc]
0063ba4c  PUSH ECX
0063ba4d  PUSH 0x6db9f4
0063ba52  CALL 0x00630f40
0063ba57  ADD ESP,0x4
0063ba5a  PUSH EAX
0063ba5b  LEA EDX,[EBP + 0xfffffeec]
0063ba61  PUSH EDX
0063ba62  CALL dword ptr [0x006b2220]
0063ba68  ADD ESP,0xc
0063ba6b  PUSH -0x1
0063ba6d  PUSH 0x12
0063ba6f  PUSH 0x1
0063ba71  PUSH 0x3
0063ba73  PUSH 0x5
0063ba75  PUSH 0x19
0063ba77  PUSH 0x1f9
0063ba7c  PUSH 0x49
0063ba7e  LEA EAX,[EBP + 0xfffffeec]
0063ba84  PUSH EAX
0063ba85  PUSH -0x1
0063ba87  PUSH 0x0
0063ba89  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063ba8f  CALL 0x005fa5b0
0063ba94  MOV ECX,dword ptr [0x0162ee80]
0063ba9a  MOV EDX,dword ptr [ECX]
0063ba9c  MOV ECX,dword ptr [0x0162ee80]
0063baa2  MOV EAX,dword ptr [EDX + 0xb8]
0063baa8  CALL EAX
0063baaa  MOV dword ptr [EBP + -0x10],EAX
0063baad  CMP dword ptr [EBP + -0x10],0x0
0063bab1  JZ 0x0063babe
0063bab3  MOV ECX,dword ptr [EBP + -0x10]
0063bab6  MOV dword ptr [EBP + 0xfffffea8],ECX
0063babc  JMP 0x0063bad1
0063babe  PUSH 0x6c1428
0063bac3  CALL 0x00630f40
0063bac8  ADD ESP,0x4
0063bacb  MOV dword ptr [EBP + 0xfffffea8],EAX
0063bad1  PUSH 0x0
0063bad3  PUSH -0x1
0063bad5  PUSH 0x4a
0063bad7  PUSH 0x4b
0063bad9  PUSH 0x48
0063badb  MOV EDX,dword ptr [EBP + 0xfffffea8]
0063bae1  PUSH EDX
0063bae2  PUSH 0x1
0063bae4  PUSH 0x188
0063bae9  PUSH 0x14e
0063baee  PUSH 0x30d4e5
0063baf3  PUSH 0x0
0063baf5  PUSH 0x0
0063baf7  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bafd  CALL 0x005f9de0
0063bb02  MOV EAX,[0x0162ee80]
0063bb07  MOV EDX,dword ptr [EAX]
0063bb09  MOV ECX,dword ptr [0x0162ee80]
0063bb0f  MOV EAX,dword ptr [EDX + 0xbc]
0063bb15  CALL EAX
0063bb17  MOV dword ptr [EBP + -0x10],EAX
0063bb1a  CMP dword ptr [EBP + -0x10],0x0
0063bb1e  JZ 0x0063bb2b
0063bb20  MOV ECX,dword ptr [EBP + -0x10]
0063bb23  MOV dword ptr [EBP + 0xfffffea4],ECX
0063bb29  JMP 0x0063bb3e
0063bb2b  PUSH 0x6c2318
0063bb30  CALL 0x00630f40
0063bb35  ADD ESP,0x4
0063bb38  MOV dword ptr [EBP + 0xfffffea4],EAX
0063bb3e  PUSH 0x0
0063bb40  PUSH -0x1
0063bb42  PUSH 0x4a
0063bb44  PUSH 0x4b
0063bb46  PUSH 0x48
0063bb48  MOV EDX,dword ptr [EBP + 0xfffffea4]
0063bb4e  PUSH EDX
0063bb4f  PUSH 0x1
0063bb51  PUSH 0x188
0063bb56  PUSH 0x1a8
0063bb5b  PUSH 0x30d4de
0063bb60  PUSH 0x1
0063bb62  PUSH 0x0
0063bb64  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bb6a  CALL 0x005f9de0
0063bb6f  PUSH 0xd
0063bb71  PUSH 0x0
0063bb73  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bb79  CALL 0x005fb300
0063bb7e  MOV ECX,EAX
0063bb80  CALL 0x006026f0
0063bb85  PUSH 0x1b
0063bb87  PUSH 0x1
0063bb89  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bb8f  CALL 0x005fb300
0063bb94  MOV ECX,EAX
0063bb96  CALL 0x006026f0
0063bb9b  PUSH 0x21c
0063bba0  CALL 0x00686d82
0063bba5  ADD ESP,0x4
0063bba8  MOV dword ptr [EBP + 0xfffffec0],EAX
0063bbae  MOV dword ptr [EBP + -0x4],0x0
0063bbb5  CMP dword ptr [EBP + 0xfffffec0],0x0
0063bbbc  JZ 0x0063bbe3
0063bbbe  MOV ECX,dword ptr [EBP + 0xfffffec0]
0063bbc4  CALL 0x005ff310
0063bbc9  MOV EAX,dword ptr [EBP + 0xfffffec0]
0063bbcf  MOV dword ptr [EAX],0x6db8f4
0063bbd5  MOV ECX,dword ptr [EBP + 0xfffffec0]
0063bbdb  MOV dword ptr [EBP + 0xfffffea0],ECX
0063bbe1  JMP 0x0063bbed
0063bbe3  MOV dword ptr [EBP + 0xfffffea0],0x0
0063bbed  MOV EDX,dword ptr [EBP + 0xfffffea0]
0063bbf3  MOV dword ptr [EBP + 0xfffffec4],EDX
0063bbf9  MOV dword ptr [EBP + -0x4],0xffffffff
0063bc00  PUSH -0x1
0063bc02  PUSH 0x4a
0063bc04  PUSH 0x4b
0063bc06  PUSH 0x48
0063bc08  PUSH 0x6db8d4
0063bc0d  CALL 0x00630f40
0063bc12  ADD ESP,0x4
0063bc15  PUSH EAX
0063bc16  PUSH 0x1
0063bc18  PUSH 0x0
0063bc1a  PUSH 0x0
0063bc1c  PUSH 0x30d4db
0063bc21  PUSH 0x0
0063bc23  PUSH 0x3
0063bc25  PUSH 0x0
0063bc27  MOV EAX,dword ptr [EBP + 0xfffffec4]
0063bc2d  PUSH EAX
0063bc2e  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bc34  CALL 0x005fa1e0
0063bc39  PUSH 0x21c
0063bc3e  CALL 0x00686d82
0063bc43  ADD ESP,0x4
0063bc46  MOV dword ptr [EBP + 0xfffffeb8],EAX
0063bc4c  MOV dword ptr [EBP + -0x4],0x1
0063bc53  CMP dword ptr [EBP + 0xfffffeb8],0x0
0063bc5a  JZ 0x0063bc81
0063bc5c  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0063bc62  CALL 0x005ff310
0063bc67  MOV ECX,dword ptr [EBP + 0xfffffeb8]
0063bc6d  MOV dword ptr [ECX],0x6db8f4
0063bc73  MOV EDX,dword ptr [EBP + 0xfffffeb8]
0063bc79  MOV dword ptr [EBP + 0xfffffe9c],EDX
0063bc7f  JMP 0x0063bc8b
0063bc81  MOV dword ptr [EBP + 0xfffffe9c],0x0
0063bc8b  MOV EAX,dword ptr [EBP + 0xfffffe9c]
0063bc91  MOV dword ptr [EBP + 0xfffffebc],EAX
0063bc97  MOV dword ptr [EBP + -0x4],0xffffffff
0063bc9e  PUSH -0x1
0063bca0  PUSH 0x4a
0063bca2  PUSH 0x4b
0063bca4  PUSH 0x48
0063bca6  PUSH 0x6db8c0
0063bcab  CALL 0x00630f40
0063bcb0  ADD ESP,0x4
0063bcb3  PUSH EAX
0063bcb4  PUSH 0x1
0063bcb6  PUSH 0x0
0063bcb8  PUSH 0x0
0063bcba  PUSH 0x30d4dc
0063bcbf  PUSH 0x0
0063bcc1  PUSH 0x4
0063bcc3  PUSH 0x0
0063bcc5  MOV ECX,dword ptr [EBP + 0xfffffebc]
0063bccb  PUSH ECX
0063bccc  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bcd2  CALL 0x005fa1e0
0063bcd7  PUSH 0x1d0
0063bcdc  CALL 0x00686d82
0063bce1  ADD ESP,0x4
0063bce4  MOV dword ptr [EBP + 0xfffffeb0],EAX
0063bcea  MOV dword ptr [EBP + -0x4],0x2
0063bcf1  CMP dword ptr [EBP + 0xfffffeb0],0x0
0063bcf8  JZ 0x0063bd1f
0063bcfa  MOV ECX,dword ptr [EBP + 0xfffffeb0]
0063bd00  CALL 0x005ec5a0
0063bd05  MOV EDX,dword ptr [EBP + 0xfffffeb0]
0063bd0b  MOV dword ptr [EDX],0x6db7fc
0063bd11  MOV EAX,dword ptr [EBP + 0xfffffeb0]
0063bd17  MOV dword ptr [EBP + 0xfffffe98],EAX
0063bd1d  JMP 0x0063bd29
0063bd1f  MOV dword ptr [EBP + 0xfffffe98],0x0
0063bd29  MOV ECX,dword ptr [EBP + 0xfffffe98]
0063bd2f  MOV dword ptr [EBP + 0xfffffeb4],ECX
0063bd35  MOV dword ptr [EBP + -0x4],0xffffffff
0063bd3c  PUSH -0x1
0063bd3e  PUSH 0x11
0063bd40  PUSH 0x1
0063bd42  PUSH 0x180
0063bd47  PUSH 0x7
0063bd49  PUSH 0x25
0063bd4b  PUSH 0x140
0063bd50  PUSH 0x23
0063bd52  PUSH 0x6b27f8
0063bd57  PUSH -0x1
0063bd59  MOV EDX,dword ptr [EBP + 0xfffffeb4]
0063bd5f  PUSH EDX
0063bd60  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bd66  CALL 0x005fa5b0
0063bd6b  PUSH 0x32
0063bd6d  MOV EAX,dword ptr [EBP + 0xfffffeac]
0063bd73  PUSH EAX
0063bd74  PUSH 0x0
0063bd76  PUSH 0x4
0063bd78  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bd7e  CALL 0x005fb480
0063bd83  PUSH EAX
0063bd84  PUSH 0x0
0063bd86  PUSH 0x3
0063bd88  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bd8e  CALL 0x005fb480
0063bd93  PUSH EAX
0063bd94  MOV ECX,dword ptr [0x0162ee80]
0063bd9a  MOV EDX,dword ptr [ECX]
0063bd9c  MOV ECX,dword ptr [0x0162ee80]
0063bda2  MOV EAX,dword ptr [EDX + 0xc8]
0063bda8  CALL EAX
0063bdaa  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bdb0  CALL 0x0063c260
0063bdb5  MOV ECX,dword ptr [0x0162ee80]
0063bdbb  MOV EDX,dword ptr [ECX]
0063bdbd  MOV ECX,dword ptr [0x0162ee80]
0063bdc3  MOV EAX,dword ptr [EDX + 0xb0]
0063bdc9  CALL EAX
0063bdcb  MOVZX ECX,AL
0063bdce  TEST ECX,ECX
0063bdd0  JZ 0x0063bdfd
0063bdd2  PUSH 0x0
0063bdd4  PUSH 0x3
0063bdd6  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063bddc  CALL 0x005fb480
0063bde1  MOV dword ptr [EBP + 0xfffffe94],EAX
0063bde7  MOV EDX,dword ptr [EBP + 0xfffffe94]
0063bded  MOV EAX,dword ptr [EDX]
0063bdef  MOV ECX,dword ptr [EBP + 0xfffffe94]
0063bdf5  MOV EDX,dword ptr [EAX + 0xd0]
0063bdfb  CALL EDX
0063bdfd  MOV EAX,[0x0162ee80]
0063be02  MOV EDX,dword ptr [EAX]
0063be04  MOV ECX,dword ptr [0x0162ee80]
0063be0a  MOV EAX,dword ptr [EDX + 0xb4]
0063be10  CALL EAX
0063be12  MOVZX ECX,AL
0063be15  TEST ECX,ECX
0063be17  JZ 0x0063be44
0063be19  PUSH 0x0
0063be1b  PUSH 0x4
0063be1d  MOV ECX,dword ptr [EBP + 0xfffffeac]
0063be23  CALL 0x005fb480
0063be28  MOV dword ptr [EBP + 0xfffffe90],EAX
0063be2e  MOV EDX,dword ptr [EBP + 0xfffffe90]
0063be34  MOV EAX,dword ptr [EDX]
0063be36  MOV ECX,dword ptr [EBP + 0xfffffe90]
0063be3c  MOV EDX,dword ptr [EAX + 0xd0]
0063be42  CALL EDX
0063be44  MOV ECX,dword ptr [EBP + -0xc]
0063be47  MOV dword ptr FS:[0x0],ECX
0063be4e  POP ECX
0063be4f  MOV ECX,dword ptr [EBP + -0x14]
0063be52  XOR ECX,EBP
0063be54  CALL 0x00686d72
0063be59  MOV ESP,EBP
0063be5b  POP EBP
0063be5c  RET
