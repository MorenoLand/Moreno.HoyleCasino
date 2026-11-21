; FUN_004eab60  004eab60
004eab60  PUSH EBP
004eab61  MOV EBP,ESP
004eab63  SUB ESP,0xc
004eab66  PUSH ESI
004eab67  MOV dword ptr [EBP + -0xc],ECX
004eab6a  MOVSX EAX,word ptr [EBP + 0x8]
004eab6e  CMP EAX,0x1
004eab71  JGE 0x004eab8a
004eab73  PUSH 0x2741
004eab78  PUSH 0x6bf384
004eab7d  PUSH 0x6bf730
004eab82  CALL 0x005e9f20
004eab87  ADD ESP,0xc
004eab8a  MOVSX EDX,word ptr [EBP + 0x8]
004eab8e  CMP EDX,0x3
004eab91  JLE 0x004eabaa
004eab93  PUSH 0x2742
004eab98  PUSH 0x6bf384
004eab9d  PUSH 0x6bf720
004eaba2  CALL 0x005e9f20
004eaba7  ADD ESP,0xc
004eabaa  MOV ECX,dword ptr [EBP + -0xc]
004eabad  MOVSX EDX,word ptr [ECX + 0x64]
004eabb1  TEST EDX,EDX
004eabb3  JNZ 0x004eabfd
004eabb5  MOVSX EAX,word ptr [EBP + 0x8]
004eabb9  CMP EAX,0x1
004eabbc  JNZ 0x004eabcf
004eabbe  MOV ECX,dword ptr [EBP + -0xc]
004eabc1  MOV AX,word ptr [ECX + 0x2a4]
004eabc8  JMP 0x004eae3c
004eabcf  MOVSX EDX,word ptr [EBP + 0x8]
004eabd3  CMP EDX,0x2
004eabd6  JNZ 0x004eabe9
004eabd8  MOV EAX,dword ptr [EBP + -0xc]
004eabdb  MOV AX,word ptr [EAX + 0x2a2]
004eabe2  JMP 0x004eae3c
004eabe9  MOV ECX,dword ptr [EBP + -0xc]
004eabec  MOV AX,word ptr [ECX + 0x2a0]
004eabf3  JMP 0x004eae3c
004eabfd  MOV EDX,dword ptr [EBP + -0xc]
004eac00  MOVSX EAX,word ptr [EDX + 0x64]
004eac04  CMP EAX,0x1
004eac07  JNZ 0x004eaca6
004eac0d  MOVSX ECX,word ptr [EBP + 0x8]
004eac11  CMP ECX,0x1
004eac14  JNZ 0x004eac42
004eac16  MOV EDX,dword ptr [EBP + -0xc]
004eac19  MOVSX ESI,word ptr [EDX + 0x2a4]
004eac20  PUSH 0xf
004eac22  CALL 0x0062fbf0
004eac27  ADD ESP,0x4
004eac2a  ADD ESI,EAX
004eac2c  PUSH 0xf
004eac2e  CALL 0x0062fbf0
004eac33  ADD ESP,0x4
004eac36  ADD ESI,EAX
004eac38  MOV AX,SI
004eac3b  JMP 0x004eae3c
004eac42  MOVSX EAX,word ptr [EBP + 0x8]
004eac46  CMP EAX,0x2
004eac49  JNZ 0x004eac77
004eac4b  MOV ECX,dword ptr [EBP + -0xc]
004eac4e  MOVSX ESI,word ptr [ECX + 0x2a2]
004eac55  PUSH 0xf
004eac57  CALL 0x0062fbf0
004eac5c  ADD ESP,0x4
004eac5f  ADD ESI,EAX
004eac61  PUSH 0xf
004eac63  CALL 0x0062fbf0
004eac68  ADD ESP,0x4
004eac6b  ADD ESI,EAX
004eac6d  MOV AX,SI
004eac70  JMP 0x004eae3c
004eac77  MOV EDX,dword ptr [EBP + -0xc]
004eac7a  MOVSX ESI,word ptr [EDX + 0x2a0]
004eac81  PUSH 0xf
004eac83  CALL 0x0062fbf0
004eac88  ADD ESP,0x4
004eac8b  ADD ESI,EAX
004eac8d  PUSH 0xf
004eac8f  CALL 0x0062fbf0
004eac94  ADD ESP,0x4
004eac97  ADD ESI,EAX
004eac99  MOV AX,SI
004eac9c  JMP 0x004eae3c
004eaca6  MOV EAX,dword ptr [EBP + -0xc]
004eaca9  MOVSX ECX,word ptr [EAX + 0x64]
004eacad  CMP ECX,0x2
004eacb0  JNZ 0x004ead66
004eacb6  MOV word ptr [EBP + -0x4],0x0
004eacbc  MOVSX EDX,word ptr [EBP + 0x8]
004eacc0  CMP EDX,0x1
004eacc3  JNZ 0x004eaced
004eacc5  MOV EAX,dword ptr [EBP + -0xc]
004eacc8  MOVSX ESI,word ptr [EAX + 0x2a4]
004eaccf  PUSH 0x5
004eacd1  CALL 0x0062fbf0
004eacd6  ADD ESP,0x4
004eacd9  SUB ESI,EAX
004eacdb  PUSH 0x5
004eacdd  CALL 0x0062fbf0
004eace2  ADD ESP,0x4
004eace5  SUB ESI,EAX
004eace7  MOV word ptr [EBP + -0x4],SI
004eaceb  JMP 0x004ead44
004eaced  MOVSX ECX,word ptr [EBP + 0x8]
004eacf1  CMP ECX,0x2
004eacf4  JNZ 0x004ead1e
004eacf6  MOV EDX,dword ptr [EBP + -0xc]
004eacf9  MOVSX ESI,word ptr [EDX + 0x2a2]
004ead00  PUSH 0x5
004ead02  CALL 0x0062fbf0
004ead07  ADD ESP,0x4
004ead0a  SUB ESI,EAX
004ead0c  PUSH 0x5
004ead0e  CALL 0x0062fbf0
004ead13  ADD ESP,0x4
004ead16  SUB ESI,EAX
004ead18  MOV word ptr [EBP + -0x4],SI
004ead1c  JMP 0x004ead44
004ead1e  MOV EAX,dword ptr [EBP + -0xc]
004ead21  MOVSX ESI,word ptr [EAX + 0x2a0]
004ead28  PUSH 0x5
004ead2a  CALL 0x0062fbf0
004ead2f  ADD ESP,0x4
004ead32  SUB ESI,EAX
004ead34  PUSH 0x5
004ead36  CALL 0x0062fbf0
004ead3b  ADD ESP,0x4
004ead3e  SUB ESI,EAX
004ead40  MOV word ptr [EBP + -0x4],SI
004ead44  MOVSX ECX,word ptr [EBP + -0x4]
004ead48  CMP ECX,0x1
004ead4b  JGE 0x004ead58
004ead4d  MOV AX,0x1
004ead51  JMP 0x004eae3c
004ead58  MOV AX,word ptr [EBP + -0x4]
004ead5c  JMP 0x004eae3c
004ead66  MOV EDX,dword ptr [EBP + -0xc]
004ead69  MOVSX EAX,word ptr [EDX + 0x64]
004ead6d  CMP EAX,0x3
004ead70  JNZ 0x004eae1d
004ead76  MOV word ptr [EBP + -0x8],0x0
004ead7c  MOVSX ECX,word ptr [EBP + 0x8]
004ead80  CMP ECX,0x1
004ead83  JNZ 0x004eadad
004ead85  MOV EDX,dword ptr [EBP + -0xc]
004ead88  MOVSX ESI,word ptr [EDX + 0x2a4]
004ead8f  PUSH 0xa
004ead91  CALL 0x0062fbf0
004ead96  ADD ESP,0x4
004ead99  SUB ESI,EAX
004ead9b  PUSH 0xa
004ead9d  CALL 0x0062fbf0
004eada2  ADD ESP,0x4
004eada5  SUB ESI,EAX
004eada7  MOV word ptr [EBP + -0x8],SI
004eadab  JMP 0x004eae04
004eadad  MOVSX EAX,word ptr [EBP + 0x8]
004eadb1  CMP EAX,0x2
004eadb4  JNZ 0x004eadde
004eadb6  MOV ECX,dword ptr [EBP + -0xc]
004eadb9  MOVSX ESI,word ptr [ECX + 0x2a2]
004eadc0  PUSH 0xa
004eadc2  CALL 0x0062fbf0
004eadc7  ADD ESP,0x4
004eadca  SUB ESI,EAX
004eadcc  PUSH 0xa
004eadce  CALL 0x0062fbf0
004eadd3  ADD ESP,0x4
004eadd6  SUB ESI,EAX
004eadd8  MOV word ptr [EBP + -0x8],SI
004eaddc  JMP 0x004eae04
004eadde  MOV EDX,dword ptr [EBP + -0xc]
004eade1  MOVSX ESI,word ptr [EDX + 0x2a0]
004eade8  PUSH 0xa
004eadea  CALL 0x0062fbf0
004eadef  ADD ESP,0x4
004eadf2  SUB ESI,EAX
004eadf4  PUSH 0xa
004eadf6  CALL 0x0062fbf0
004eadfb  ADD ESP,0x4
004eadfe  SUB ESI,EAX
004eae00  MOV word ptr [EBP + -0x8],SI
004eae04  MOVSX EAX,word ptr [EBP + -0x8]
004eae08  CMP EAX,0x1
004eae0b  JGE 0x004eae15
004eae0d  MOV AX,0x1
004eae11  JMP 0x004eae3c
004eae15  MOV AX,word ptr [EBP + -0x8]
004eae19  JMP 0x004eae3c
004eae1d  XOR ECX,ECX
004eae1f  JNZ 0x004eae38
004eae21  PUSH 0x2773
004eae26  PUSH 0x6bf384
004eae2b  PUSH 0x6b2b64
004eae30  CALL 0x005e9f20
004eae35  ADD ESP,0xc
004eae38  MOV AX,0x64
004eae3c  POP ESI
004eae3d  MOV ESP,EBP
004eae3f  POP EBP
004eae40  RET 0x4
