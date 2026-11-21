; FUN_0044a170  0044a170
0044a170  PUSH EBP
0044a171  MOV EBP,ESP
0044a173  SUB ESP,0x13c
0044a179  MOV dword ptr [EBP + 0xffffff08],ECX
0044a17f  PUSH 0x0
0044a181  PUSH 0x0
0044a183  CALL 0x0064c8a0
0044a188  ADD ESP,0x8
0044a18b  MOV dword ptr [EBP + -0x5c],EAX
0044a18e  MOV dword ptr [EBP + -0x58],EDX
0044a191  MOV EAX,dword ptr [EBP + -0x5c]
0044a194  MOV dword ptr [EBP + -0x54],EAX
0044a197  MOV ECX,dword ptr [EBP + -0x58]
0044a19a  MOV dword ptr [EBP + -0x50],ECX
0044a19d  MOV dword ptr [EBP + -0x44],0xffffffff
0044a1a4  MOV dword ptr [EBP + -0x20],0xffffffff
0044a1ab  MOV dword ptr [EBP + -0x48],0xffffffff
0044a1b2  FLDZ
0044a1b4  FSTP double ptr [EBP + -0x18]
0044a1b7  FLD1
0044a1b9  FSTP double ptr [EBP + -0x10]
0044a1bc  MOV EDX,dword ptr [0x00790710]
0044a1c2  MOV EAX,dword ptr [EDX + 0xc4]
0044a1c8  MOV dword ptr [EBP + -0x4],EAX
0044a1cb  MOV dword ptr [EBP + -0x1c],0xffffffff
0044a1d2  MOV dword ptr [EBP + -0x8],0xffffffff
0044a1d9  MOV dword ptr [EBP + -0x4c],0xffffffff
0044a1e0  MOV ECX,dword ptr [0x00790710]
0044a1e6  MOV EDX,dword ptr [ECX + 0xf8]
0044a1ec  MOV dword ptr [EBP + -0x44],EDX
0044a1ef  MOV EAX,dword ptr [EBP + -0x60]
0044a1f2  MOV dword ptr [EBP + 0xffffff04],EAX
0044a1f8  MOV ECX,dword ptr [0x00790710]
0044a1fe  MOV EDX,dword ptr [ECX + 0xf4]
0044a204  MOV dword ptr [EBP + 0xffffff04],EDX
0044a20a  CMP dword ptr [EBP + 0xffffff04],0x6
0044a211  JA 0x0044a948
0044a217  MOV EAX,dword ptr [EBP + 0xffffff04]
0044a21d  JMP dword ptr [EAX*0x4 + 0x44ab04]
0044a224  MOV dword ptr [EBP + -0x20],0x7e8
0044a22b  FLD double ptr [0x006b2c40]
0044a231  FSTP double ptr [EBP + -0x10]
0044a234  JMP 0x0044a948
0044a239  MOV dword ptr [EBP + -0x20],0x7eb
0044a240  FLD double ptr [0x006b2c40]
0044a246  FSTP double ptr [EBP + -0x10]
0044a249  JMP 0x0044a948
0044a24e  MOV ECX,dword ptr [0x00790710]
0044a254  CALL 0x0044d820
0044a259  MOV dword ptr [EBP + -0x44],EAX
0044a25c  CMP dword ptr [EBP + -0x44],-0x1
0044a260  JZ 0x0044a277
0044a262  MOV dword ptr [EBP + -0x20],0x7ea
0044a269  FLD double ptr [0x006b2c40]
0044a26f  FSTP double ptr [EBP + -0x10]
0044a272  JMP 0x0044a948
0044a277  MOV ECX,dword ptr [0x00790710]
0044a27d  CALL 0x0044dc20
0044a282  MOV dword ptr [EBP + -0x44],EAX
0044a285  CMP dword ptr [EBP + -0x44],-0x1
0044a289  JZ 0x0044a2a0
0044a28b  MOV dword ptr [EBP + -0x20],0x7e9
0044a292  FLD double ptr [0x006b2c40]
0044a298  FSTP double ptr [EBP + -0x10]
0044a29b  JMP 0x0044a948
0044a2a0  JMP 0x0044a948
0044a2a5  LEA ECX,[EBP + -0x54]
0044a2a8  PUSH ECX
0044a2a9  MOV EDX,dword ptr [EBP + -0x4]
0044a2ac  PUSH EDX
0044a2ad  CALL 0x005dcb00
0044a2b2  ADD ESP,0x4
0044a2b5  MOV ECX,EAX
0044a2b7  CALL 0x005d6020
0044a2bc  MOV EAX,dword ptr [EBP + -0x4]
0044a2bf  PUSH EAX
0044a2c0  CALL 0x005dcb00
0044a2c5  ADD ESP,0x4
0044a2c8  CMP dword ptr [EAX + 0x4a8],0x3
0044a2cf  JLE 0x0044a34f
0044a2d1  PUSH 0x2
0044a2d3  CALL 0x0062fbf0
0044a2d8  ADD ESP,0x4
0044a2db  TEST EAX,EAX
0044a2dd  JNZ 0x0044a34f
0044a2df  MOV ECX,dword ptr [EBP + -0x4]
0044a2e2  PUSH ECX
0044a2e3  CALL 0x005dcb00
0044a2e8  ADD ESP,0x4
0044a2eb  MOV dword ptr [EBP + -0x6c],EAX
0044a2ee  MOV ECX,dword ptr [EBP + -0x6c]
0044a2f1  CALL 0x0063aac0
0044a2f6  MOV EDX,dword ptr [EAX]
0044a2f8  MOV dword ptr [EBP + -0x64],EDX
0044a2fb  CMP dword ptr [EBP + -0x64],0x2
0044a2ff  JZ 0x0044a320
0044a301  MOV ECX,dword ptr [EBP + -0x6c]
0044a304  CALL 0x0063aac0
0044a309  MOV EAX,dword ptr [EAX]
0044a30b  MOV dword ptr [EBP + -0x68],EAX
0044a30e  CMP dword ptr [EBP + -0x68],0x3
0044a312  JZ 0x0044a320
0044a314  MOV dword ptr [EBP + 0xffffff00],0x0
0044a31e  JMP 0x0044a32a
0044a320  MOV dword ptr [EBP + 0xffffff00],0x1
0044a32a  MOVZX ECX,byte ptr [EBP + 0xffffff00]
0044a331  NEG ECX
0044a333  SBB ECX,ECX
0044a335  AND ECX,0x14
0044a338  ADD ECX,0x400
0044a33e  MOV dword ptr [EBP + -0x20],ECX
0044a341  FLD double ptr [0x006b2c40]
0044a347  FSTP double ptr [EBP + -0x10]
0044a34a  JMP 0x0044a948
0044a34f  MOV EDX,dword ptr [EBP + -0x4]
0044a352  PUSH EDX
0044a353  CALL 0x005dcb00
0044a358  ADD ESP,0x4
0044a35b  CMP dword ptr [EAX + 0x4a8],-0x3
0044a362  JGE 0x0044a3e1
0044a364  PUSH 0x2
0044a366  CALL 0x0062fbf0
0044a36b  ADD ESP,0x4
0044a36e  TEST EAX,EAX
0044a370  JNZ 0x0044a3e1
0044a372  MOV EAX,dword ptr [EBP + -0x4]
0044a375  PUSH EAX
0044a376  CALL 0x005dcb00
0044a37b  ADD ESP,0x4
0044a37e  MOV dword ptr [EBP + -0x78],EAX
0044a381  MOV ECX,dword ptr [EBP + -0x78]
0044a384  CALL 0x0063aac0
0044a389  MOV ECX,dword ptr [EAX]
0044a38b  MOV dword ptr [EBP + -0x70],ECX
0044a38e  CMP dword ptr [EBP + -0x70],0x2
0044a392  JZ 0x0044a3b3
0044a394  MOV ECX,dword ptr [EBP + -0x78]
0044a397  CALL 0x0063aac0
0044a39c  MOV EDX,dword ptr [EAX]
0044a39e  MOV dword ptr [EBP + -0x74],EDX
0044a3a1  CMP dword ptr [EBP + -0x74],0x3
0044a3a5  JZ 0x0044a3b3
0044a3a7  MOV dword ptr [EBP + 0xfffffefc],0x0
0044a3b1  JMP 0x0044a3bd
0044a3b3  MOV dword ptr [EBP + 0xfffffefc],0x1
0044a3bd  MOVZX EAX,byte ptr [EBP + 0xfffffefc]
0044a3c4  NEG EAX
0044a3c6  SBB EAX,EAX
0044a3c8  AND EAX,0xa
0044a3cb  ADD EAX,0x3ff
0044a3d0  MOV dword ptr [EBP + -0x20],EAX
0044a3d3  FLD double ptr [0x006b2c40]
0044a3d9  FSTP double ptr [EBP + -0x10]
0044a3dc  JMP 0x0044a948
0044a3e1  MOV ECX,dword ptr [0x00790710]
0044a3e7  ADD ECX,dword ptr [EBP + -0x4]
0044a3ea  MOVZX EDX,byte ptr [ECX + 0xec]
0044a3f1  TEST EDX,EDX
0044a3f3  JZ 0x0044a469
0044a3f5  MOV EAX,dword ptr [EBP + -0x4]
0044a3f8  PUSH EAX
0044a3f9  CALL 0x005dcb00
0044a3fe  ADD ESP,0x4
0044a401  MOV dword ptr [EBP + 0xffffff7c],EAX
0044a407  MOV ECX,dword ptr [EBP + 0xffffff7c]
0044a40d  CALL 0x0063aac0
0044a412  MOV ECX,dword ptr [EAX]
0044a414  MOV dword ptr [EBP + -0x7c],ECX
0044a417  CMP dword ptr [EBP + -0x7c],0x2
0044a41b  JZ 0x0044a43f
0044a41d  MOV ECX,dword ptr [EBP + 0xffffff7c]
0044a423  CALL 0x0063aac0
0044a428  MOV EDX,dword ptr [EAX]
0044a42a  MOV dword ptr [EBP + -0x80],EDX
0044a42d  CMP dword ptr [EBP + -0x80],0x3
0044a431  JZ 0x0044a43f
0044a433  MOV dword ptr [EBP + 0xfffffef8],0x0
0044a43d  JMP 0x0044a449
0044a43f  MOV dword ptr [EBP + 0xfffffef8],0x1
0044a449  MOVZX EAX,byte ptr [EBP + 0xfffffef8]
0044a450  NEG EAX
0044a452  SBB EAX,EAX
0044a454  AND EAX,0x15
0044a457  ADD EAX,0x3fe
0044a45c  MOV dword ptr [EBP + -0x20],EAX
0044a45f  FLD1
0044a461  FSTP double ptr [EBP + -0x10]
0044a464  JMP 0x0044a948
0044a469  CMP dword ptr [EBP + -0x54],0x0
0044a46d  JGE 0x0044a4f8
0044a473  MOV ECX,dword ptr [EBP + -0x4]
0044a476  PUSH ECX
0044a477  CALL 0x005dcb00
0044a47c  ADD ESP,0x4
0044a47f  MOV dword ptr [EBP + 0xffffff70],EAX
0044a485  MOV ECX,dword ptr [EBP + 0xffffff70]
0044a48b  CALL 0x0063aac0
0044a490  MOV EDX,dword ptr [EAX]
0044a492  MOV dword ptr [EBP + 0xffffff78],EDX
0044a498  CMP dword ptr [EBP + 0xffffff78],0x2
0044a49f  JZ 0x0044a4c9
0044a4a1  MOV ECX,dword ptr [EBP + 0xffffff70]
0044a4a7  CALL 0x0063aac0
0044a4ac  MOV EAX,dword ptr [EAX]
0044a4ae  MOV dword ptr [EBP + 0xffffff74],EAX
0044a4b4  CMP dword ptr [EBP + 0xffffff74],0x3
0044a4bb  JZ 0x0044a4c9
0044a4bd  MOV dword ptr [EBP + 0xfffffef4],0x0
0044a4c7  JMP 0x0044a4d3
0044a4c9  MOV dword ptr [EBP + 0xfffffef4],0x1
0044a4d3  MOVZX ECX,byte ptr [EBP + 0xfffffef4]
0044a4da  NEG ECX
0044a4dc  SBB ECX,ECX
0044a4de  AND ECX,0xffffffe6
0044a4e1  ADD ECX,0x402
0044a4e7  MOV dword ptr [EBP + -0x20],ECX
0044a4ea  FLD double ptr [0x006b2c38]
0044a4f0  FSTP double ptr [EBP + -0x10]
0044a4f3  JMP 0x0044a948
0044a4f8  CMP dword ptr [EBP + -0x54],0x0
0044a4fc  JLE 0x0044a587
0044a502  MOV EDX,dword ptr [EBP + -0x4]
0044a505  PUSH EDX
0044a506  CALL 0x005dcb00
0044a50b  ADD ESP,0x4
0044a50e  MOV dword ptr [EBP + 0xffffff64],EAX
0044a514  MOV ECX,dword ptr [EBP + 0xffffff64]
0044a51a  CALL 0x0063aac0
0044a51f  MOV EAX,dword ptr [EAX]
0044a521  MOV dword ptr [EBP + 0xffffff6c],EAX
0044a527  CMP dword ptr [EBP + 0xffffff6c],0x2
0044a52e  JZ 0x0044a558
0044a530  MOV ECX,dword ptr [EBP + 0xffffff64]
0044a536  CALL 0x0063aac0
0044a53b  MOV ECX,dword ptr [EAX]
0044a53d  MOV dword ptr [EBP + 0xffffff68],ECX
0044a543  CMP dword ptr [EBP + 0xffffff68],0x3
0044a54a  JZ 0x0044a558
0044a54c  MOV dword ptr [EBP + 0xfffffef0],0x0
0044a556  JMP 0x0044a562
0044a558  MOV dword ptr [EBP + 0xfffffef0],0x1
0044a562  MOVZX EDX,byte ptr [EBP + 0xfffffef0]
0044a569  NEG EDX
0044a56b  SBB EDX,EDX
0044a56d  AND EDX,0xffffffec
0044a570  ADD EDX,0x404
0044a576  MOV dword ptr [EBP + -0x20],EDX
0044a579  FLD double ptr [0x006b2c38]
0044a57f  FSTP double ptr [EBP + -0x10]
0044a582  JMP 0x0044a948
0044a587  JMP 0x0044a948
0044a58c  MOV ECX,dword ptr [0x0079070c]
0044a592  CALL 0x005dac90
0044a597  MOV dword ptr [EBP + -0x8],EAX
0044a59a  MOV ECX,dword ptr [0x0079070c]
0044a5a0  CALL 0x005dada0
0044a5a5  MOV dword ptr [EBP + -0x4c],EAX
0044a5a8  MOV ECX,dword ptr [0x0079070c]
0044a5ae  CALL 0x005db190
0044a5b3  MOVZX EAX,AL
0044a5b6  TEST EAX,EAX
0044a5b8  JZ 0x0044a6d2
0044a5be  CMP dword ptr [EBP + -0x8],-0x1
0044a5c2  JZ 0x0044a6d2
0044a5c8  MOV ECX,dword ptr [EBP + -0x8]
0044a5cb  PUSH ECX
0044a5cc  CALL 0x005dcb00
0044a5d1  ADD ESP,0x4
0044a5d4  MOV dword ptr [EBP + 0xffffff58],EAX
0044a5da  MOV ECX,dword ptr [EBP + 0xffffff58]
0044a5e0  CALL 0x0063aac0
0044a5e5  MOV EDX,dword ptr [EAX]
0044a5e7  MOV dword ptr [EBP + 0xffffff60],EDX
0044a5ed  CMP dword ptr [EBP + 0xffffff60],0x2
0044a5f4  JZ 0x0044a61e
0044a5f6  MOV ECX,dword ptr [EBP + 0xffffff58]
0044a5fc  CALL 0x0063aac0
0044a601  MOV EAX,dword ptr [EAX]
0044a603  MOV dword ptr [EBP + 0xffffff5c],EAX
0044a609  CMP dword ptr [EBP + 0xffffff5c],0x3
0044a610  JZ 0x0044a61e
0044a612  MOV dword ptr [EBP + 0xfffffeec],0x0
0044a61c  JMP 0x0044a628
0044a61e  MOV dword ptr [EBP + 0xfffffeec],0x1
0044a628  MOVZX ECX,byte ptr [EBP + 0xfffffeec]
0044a62f  TEST ECX,ECX
0044a631  JZ 0x0044a63f
0044a633  MOV dword ptr [EBP + 0xfffffee8],0xffffffff
0044a63d  JMP 0x0044a648
0044a63f  MOV EDX,dword ptr [EBP + -0x8]
0044a642  MOV dword ptr [EBP + 0xfffffee8],EDX
0044a648  MOV EAX,dword ptr [EBP + 0xfffffee8]
0044a64e  MOV dword ptr [EBP + -0x44],EAX
0044a651  MOV ECX,dword ptr [EBP + -0x8]
0044a654  PUSH ECX
0044a655  CALL 0x005dcb00
0044a65a  ADD ESP,0x4
0044a65d  MOV dword ptr [EBP + 0xffffff4c],EAX
0044a663  MOV ECX,dword ptr [EBP + 0xffffff4c]
0044a669  CALL 0x0063aac0
0044a66e  MOV EDX,dword ptr [EAX]
0044a670  MOV dword ptr [EBP + 0xffffff54],EDX
0044a676  CMP dword ptr [EBP + 0xffffff54],0x2
0044a67d  JZ 0x0044a6a7
0044a67f  MOV ECX,dword ptr [EBP + 0xffffff4c]
0044a685  CALL 0x0063aac0
0044a68a  MOV EAX,dword ptr [EAX]
0044a68c  MOV dword ptr [EBP + 0xffffff50],EAX
0044a692  CMP dword ptr [EBP + 0xffffff50],0x3
0044a699  JZ 0x0044a6a7
0044a69b  MOV dword ptr [EBP + 0xfffffee4],0x0
0044a6a5  JMP 0x0044a6b1
0044a6a7  MOV dword ptr [EBP + 0xfffffee4],0x1
0044a6b1  MOVZX ECX,byte ptr [EBP + 0xfffffee4]
0044a6b8  NEG ECX
0044a6ba  SBB ECX,ECX
0044a6bc  AND ECX,0x15
0044a6bf  ADD ECX,0x3fd
0044a6c5  MOV dword ptr [EBP + -0x20],ECX
0044a6c8  FLD1
0044a6ca  FSTP double ptr [EBP + -0x10]
0044a6cd  JMP 0x0044a936
0044a6d2  CMP dword ptr [EBP + -0x8],-0x1
0044a6d6  JZ 0x0044a6ef
0044a6d8  LEA EDX,[EBP + -0x54]
0044a6db  PUSH EDX
0044a6dc  MOV EAX,dword ptr [EBP + -0x8]
0044a6df  PUSH EAX
0044a6e0  CALL 0x005dcb00
0044a6e5  ADD ESP,0x4
0044a6e8  MOV ECX,EAX
0044a6ea  CALL 0x005d6020
0044a6ef  CMP dword ptr [EBP + -0x8],-0x1
0044a6f3  JZ 0x0044a823
0044a6f9  CMP dword ptr [EBP + -0x54],0x0
0044a6fd  JLE 0x0044a823
0044a703  PUSH 0x2
0044a705  CALL 0x0062fbf0
0044a70a  ADD ESP,0x4
0044a70d  TEST EAX,EAX
0044a70f  JNZ 0x0044a823
0044a715  MOV ECX,dword ptr [EBP + -0x8]
0044a718  PUSH ECX
0044a719  CALL 0x005dcb00
0044a71e  ADD ESP,0x4
0044a721  MOV dword ptr [EBP + 0xffffff40],EAX
0044a727  MOV ECX,dword ptr [EBP + 0xffffff40]
0044a72d  CALL 0x0063aac0
0044a732  MOV EDX,dword ptr [EAX]
0044a734  MOV dword ptr [EBP + 0xffffff48],EDX
0044a73a  CMP dword ptr [EBP + 0xffffff48],0x2
0044a741  JZ 0x0044a76b
0044a743  MOV ECX,dword ptr [EBP + 0xffffff40]
0044a749  CALL 0x0063aac0
0044a74e  MOV EAX,dword ptr [EAX]
0044a750  MOV dword ptr [EBP + 0xffffff44],EAX
0044a756  CMP dword ptr [EBP + 0xffffff44],0x3
0044a75d  JZ 0x0044a76b
0044a75f  MOV dword ptr [EBP + 0xfffffee0],0x0
0044a769  JMP 0x0044a775
0044a76b  MOV dword ptr [EBP + 0xfffffee0],0x1
0044a775  MOVZX ECX,byte ptr [EBP + 0xfffffee0]
0044a77c  TEST ECX,ECX
0044a77e  JZ 0x0044a78c
0044a780  MOV dword ptr [EBP + 0xfffffedc],0xffffffff
0044a78a  JMP 0x0044a795
0044a78c  MOV EDX,dword ptr [EBP + -0x8]
0044a78f  MOV dword ptr [EBP + 0xfffffedc],EDX
0044a795  MOV EAX,dword ptr [EBP + 0xfffffedc]
0044a79b  MOV dword ptr [EBP + -0x44],EAX
0044a79e  MOV ECX,dword ptr [EBP + -0x8]
0044a7a1  PUSH ECX
0044a7a2  CALL 0x005dcb00
0044a7a7  ADD ESP,0x4
0044a7aa  MOV dword ptr [EBP + 0xffffff34],EAX
0044a7b0  MOV ECX,dword ptr [EBP + 0xffffff34]
0044a7b6  CALL 0x0063aac0
0044a7bb  MOV EDX,dword ptr [EAX]
0044a7bd  MOV dword ptr [EBP + 0xffffff3c],EDX
0044a7c3  CMP dword ptr [EBP + 0xffffff3c],0x2
0044a7ca  JZ 0x0044a7f4
0044a7cc  MOV ECX,dword ptr [EBP + 0xffffff34]
0044a7d2  CALL 0x0063aac0
0044a7d7  MOV EAX,dword ptr [EAX]
0044a7d9  MOV dword ptr [EBP + 0xffffff38],EAX
0044a7df  CMP dword ptr [EBP + 0xffffff38],0x3
0044a7e6  JZ 0x0044a7f4
0044a7e8  MOV dword ptr [EBP + 0xfffffed8],0x0
0044a7f2  JMP 0x0044a7fe
0044a7f4  MOV dword ptr [EBP + 0xfffffed8],0x1
0044a7fe  MOVZX ECX,byte ptr [EBP + 0xfffffed8]
0044a805  NEG ECX
0044a807  SBB ECX,ECX
0044a809  AND ECX,0x19
0044a80c  ADD ECX,0x3f2
0044a812  MOV dword ptr [EBP + -0x20],ECX
0044a815  FLD double ptr [0x006b2c38]
0044a81b  FSTP double ptr [EBP + -0x10]
0044a81e  JMP 0x0044a936
0044a823  CMP dword ptr [EBP + -0x4c],-0x1
0044a827  JZ 0x0044a936
0044a82d  MOV EDX,dword ptr [EBP + -0x4c]
0044a830  PUSH EDX
0044a831  CALL 0x005dcb00
0044a836  ADD ESP,0x4
0044a839  MOV dword ptr [EBP + 0xffffff28],EAX
0044a83f  MOV ECX,dword ptr [EBP + 0xffffff28]
0044a845  CALL 0x0063aac0
0044a84a  MOV EAX,dword ptr [EAX]
0044a84c  MOV dword ptr [EBP + 0xffffff30],EAX
0044a852  CMP dword ptr [EBP + 0xffffff30],0x2
0044a859  JZ 0x0044a883
0044a85b  MOV ECX,dword ptr [EBP + 0xffffff28]
0044a861  CALL 0x0063aac0
0044a866  MOV ECX,dword ptr [EAX]
0044a868  MOV dword ptr [EBP + 0xffffff2c],ECX
0044a86e  CMP dword ptr [EBP + 0xffffff2c],0x3
0044a875  JZ 0x0044a883
0044a877  MOV dword ptr [EBP + 0xfffffed4],0x0
0044a881  JMP 0x0044a88d
0044a883  MOV dword ptr [EBP + 0xfffffed4],0x1
0044a88d  MOVZX EDX,byte ptr [EBP + 0xfffffed4]
0044a894  TEST EDX,EDX
0044a896  JZ 0x0044a8a4
0044a898  MOV dword ptr [EBP + 0xfffffed0],0xffffffff
0044a8a2  JMP 0x0044a8ad
0044a8a4  MOV EAX,dword ptr [EBP + -0x4c]
0044a8a7  MOV dword ptr [EBP + 0xfffffed0],EAX
0044a8ad  MOV ECX,dword ptr [EBP + 0xfffffed0]
0044a8b3  MOV dword ptr [EBP + -0x44],ECX
0044a8b6  MOV EDX,dword ptr [EBP + -0x4c]
0044a8b9  PUSH EDX
0044a8ba  CALL 0x005dcb00
0044a8bf  ADD ESP,0x4
0044a8c2  MOV dword ptr [EBP + 0xffffff1c],EAX
0044a8c8  MOV ECX,dword ptr [EBP + 0xffffff1c]
0044a8ce  CALL 0x0063aac0
0044a8d3  MOV EAX,dword ptr [EAX]
0044a8d5  MOV dword ptr [EBP + 0xffffff24],EAX
0044a8db  CMP dword ptr [EBP + 0xffffff24],0x2
0044a8e2  JZ 0x0044a90c
0044a8e4  MOV ECX,dword ptr [EBP + 0xffffff1c]
0044a8ea  CALL 0x0063aac0
0044a8ef  MOV ECX,dword ptr [EAX]
0044a8f1  MOV dword ptr [EBP + 0xffffff20],ECX
0044a8f7  CMP dword ptr [EBP + 0xffffff20],0x3
0044a8fe  JZ 0x0044a90c
0044a900  MOV dword ptr [EBP + 0xfffffecc],0x0
0044a90a  JMP 0x0044a916
0044a90c  MOV dword ptr [EBP + 0xfffffecc],0x1
0044a916  MOVZX EDX,byte ptr [EBP + 0xfffffecc]
0044a91d  NEG EDX
0044a91f  SBB EDX,EDX
0044a921  AND EDX,0x19
0044a924  ADD EDX,0x3f3
0044a92a  MOV dword ptr [EBP + -0x20],EDX
0044a92d  FLD double ptr [0x006b2c38]
0044a933  FSTP double ptr [EBP + -0x10]
0044a936  JMP 0x0044a948
0044a938  MOV dword ptr [EBP + -0x1c],0x29810
0044a93f  JMP 0x0044a948
0044a941  MOV dword ptr [EBP + -0x1c],0x29816
0044a948  MOV EAX,[0x00790710]
0044a94d  MOV dword ptr [EBP + 0xffffff18],EAX
0044a953  MOV ECX,dword ptr [EBP + 0xffffff18]
0044a959  MOV dword ptr [ECX + 0xf4],0xffffffff
0044a963  MOV EDX,dword ptr [EBP + 0xffffff18]
0044a969  MOV dword ptr [EDX + 0xf8],0xffffffff
0044a973  CMP dword ptr [EBP + -0x44],0x4
0044a977  JNZ 0x0044a9c5
0044a979  CMP dword ptr [EBP + -0x1c],-0x1
0044a97d  JNZ 0x0044a9a2
0044a97f  PUSH 0x0
0044a981  PUSH 0x1
0044a983  MOV EAX,[0x0162ee80]
0044a988  MOV ECX,dword ptr [EAX + 0x4]
0044a98b  MOV EDX,dword ptr [0x0162ee80]
0044a991  MOV EAX,dword ptr [EDX + 0x4]
0044a994  MOV EDX,dword ptr [ECX]
0044a996  MOV ECX,EAX
0044a998  MOV EAX,dword ptr [EDX + 0x8]
0044a99b  CALL EAX
0044a99d  JMP 0x0044aafd
0044a9a2  PUSH 0x0
0044a9a4  MOV ECX,dword ptr [0x0162ee80]
0044a9aa  MOV EDX,dword ptr [ECX + 0x4]
0044a9ad  PUSH EDX
0044a9ae  MOV EAX,dword ptr [EBP + -0x1c]
0044a9b1  PUSH EAX
0044a9b2  MOV ECX,dword ptr [0x00790718]
0044a9b8  MOV ECX,dword ptr [ECX + 0x4c]
0044a9bb  CALL 0x005cd7c0
0044a9c0  JMP 0x0044aafd
0044a9c5  CMP dword ptr [EBP + -0x20],-0x1
0044a9c9  JZ 0x0044aa53
0044a9cf  MOV ECX,dword ptr [0x0162ee84]
0044a9d5  CALL 0x00636730
0044a9da  TEST EAX,EAX
0044a9dc  JZ 0x0044aa53
0044a9de  CMP dword ptr [EBP + -0x44],-0x1
0044a9e2  JLE 0x0044aa76
0044a9e8  MOV EDX,dword ptr [EBP + -0x44]
0044a9eb  PUSH EDX
0044a9ec  CALL 0x005dcb00
0044a9f1  ADD ESP,0x4
0044a9f4  MOV dword ptr [EBP + 0xffffff0c],EAX
0044a9fa  MOV ECX,dword ptr [EBP + 0xffffff0c]
0044aa00  CALL 0x0063aac0
0044aa05  MOV EAX,dword ptr [EAX]
0044aa07  MOV dword ptr [EBP + 0xffffff14],EAX
0044aa0d  CMP dword ptr [EBP + 0xffffff14],0x2
0044aa14  JZ 0x0044aa3e
0044aa16  MOV ECX,dword ptr [EBP + 0xffffff0c]
0044aa1c  CALL 0x0063aac0
0044aa21  MOV ECX,dword ptr [EAX]
0044aa23  MOV dword ptr [EBP + 0xffffff10],ECX
0044aa29  CMP dword ptr [EBP + 0xffffff10],0x3
0044aa30  JZ 0x0044aa3e
0044aa32  MOV dword ptr [EBP + 0xfffffec8],0x0
0044aa3c  JMP 0x0044aa48
0044aa3e  MOV dword ptr [EBP + 0xfffffec8],0x1
0044aa48  MOVZX EDX,byte ptr [EBP + 0xfffffec8]
0044aa4f  TEST EDX,EDX
0044aa51  JZ 0x0044aa76
0044aa53  PUSH 0x0
0044aa55  PUSH 0x1
0044aa57  MOV EAX,[0x0162ee80]
0044aa5c  MOV ECX,dword ptr [EAX + 0x4]
0044aa5f  MOV EDX,dword ptr [0x0162ee80]
0044aa65  MOV EAX,dword ptr [EDX + 0x4]
0044aa68  MOV EDX,dword ptr [ECX]
0044aa6a  MOV ECX,EAX
0044aa6c  MOV EAX,dword ptr [EDX + 0x8]
0044aa6f  CALL EAX
0044aa71  JMP 0x0044aafd
0044aa76  CMP dword ptr [EBP + -0x44],-0x1
0044aa7a  JZ 0x0044aa87
0044aa7c  MOV ECX,dword ptr [EBP + -0x44]
0044aa7f  MOV dword ptr [EBP + 0xfffffec4],ECX
0044aa85  JMP 0x0044aa98
0044aa87  MOV ECX,dword ptr [0x0162ee84]
0044aa8d  CALL 0x00636c50
0044aa92  MOV dword ptr [EBP + 0xfffffec4],EAX
0044aa98  MOV EDX,dword ptr [EBP + 0xfffffec4]
0044aa9e  MOV dword ptr [EBP + -0x40],EDX
0044aaa1  MOV EAX,dword ptr [EBP + -0x20]
0044aaa4  MOV dword ptr [EBP + -0x3c],EAX
0044aaa7  MOV ECX,dword ptr [EBP + -0x48]
0044aaaa  MOV dword ptr [EBP + -0x38],ECX
0044aaad  FLD double ptr [EBP + -0x18]
0044aab0  FSTP double ptr [EBP + -0x30]
0044aab3  FLD double ptr [EBP + -0x10]
0044aab6  FSTP double ptr [EBP + -0x28]
0044aab9  PUSH 0x1
0044aabb  MOV EDX,dword ptr [0x0162ee80]
0044aac1  MOV EAX,dword ptr [EDX + 0x4]
0044aac4  MOV ECX,dword ptr [0x0162ee80]
0044aaca  MOV ECX,dword ptr [ECX + 0x4]
0044aacd  MOV EDX,dword ptr [EAX]
0044aacf  MOV EAX,dword ptr [EDX + 0x4]
0044aad2  CALL EAX
0044aad4  PUSH 0x1
0044aad6  PUSH 0x2
0044aad8  MOV ECX,dword ptr [0x0162ee84]
0044aade  CALL 0x00637810
0044aae3  PUSH EAX
0044aae4  MOV ECX,dword ptr [0x0162ee80]
0044aaea  MOV EDX,dword ptr [ECX + 0x4]
0044aaed  PUSH EDX
0044aaee  LEA EAX,[EBP + -0x40]
0044aaf1  PUSH EAX
0044aaf2  MOV ECX,dword ptr [0x0162ee84]
0044aaf8  CALL 0x00639390
0044aafd  MOV ESP,EBP
0044aaff  POP EBP
0044ab00  RET
